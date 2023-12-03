// SPDX-FileCopyrightText: 2023 Unity Technologies and the glTFast authors
// SPDX-License-Identifier: Apache-2.0

#if USING_HDRP

using System;
using UnityEngine;
using UnityEngine.Rendering;
#if USING_HDRP_10_OR_NEWER
using UnityEngine.Rendering.HighDefinition;
#endif

namespace GLTFast.Materials {

    public class HighDefinitionRPMaterialGenerator : ShaderGraphMaterialGenerator {

        // ReSharper disable MemberCanBePrivate.Global

        /// <summary>DistortionVectors shader pass name</summary>
        public const string DistortionVectorsPass = "DistortionVectors";

        /// <summary>_CullModeForward shader property identifier</summary>
        public static readonly int CullModeForwardProperty = Shader.PropertyToID("_CullModeForward");

        // ReSharper restore MemberCanBePrivate.Global

        static readonly int k_AlphaCutoffEnable = Shader.PropertyToID("_AlphaCutoffEnable");
        static readonly int k_ZTestDepthEqualForOpaque = Shader.PropertyToID("_ZTestDepthEqualForOpaque");

#if USING_HDRP_10_OR_NEWER
        static readonly int k_RenderQueueType = Shader.PropertyToID("_RenderQueueType");
        static readonly int k_SurfaceType = Shader.PropertyToID("_SurfaceType");
        const string k_DoubleSidedOnKeyword = "_DOUBLESIDED_ON";

        static readonly int k_DoubleSidedEnablePropId = Shader.PropertyToID("_DoubleSidedEnable");
        static readonly int k_DoubleSidedNormalModePropId = Shader.PropertyToID("_DoubleSidedNormalMode");
        static readonly int k_DoubleSidedConstantsPropId = Shader.PropertyToID("_DoubleSidedConstants");

        /// <summary>Name of the stack lit shader graph used for advanced PBR materials</summary>
        public const string MetallicStackLitShader = "HDRP/glTF-pbrMetallicRoughnessStackLit";

        static bool s_MetallicStackLitShaderQueried;
        static Shader s_MetallicStackLitShader;

#if !UNITY_SHADER_GRAPH_12_OR_NEWER

        /// <summary>
        /// Forces non-legacy shader graph for HDRP 10.x
        /// </summary>
        /// <param name="features">Shader features</param>
        /// <returns>Shader name</returns>
        // TODO: Drop it when 2020 support is dropped
        protected override string GetMetallicShaderName(MetallicShaderFeatures features) {
            return MetallicShader;
        }

        /// <summary>
        /// Forces non-legacy shader graph for HDRP 10.x
        /// </summary>
        /// <param name="features">Shader features</param>
        /// <returns>Shader name</returns>
        protected override string GetSpecularShaderName(SpecularShaderFeatures features) {
            return SpecularShader;
        }

        /// <summary>
        /// Forces non-legacy shader graph for HDRP 10.x
        /// </summary>
        /// <param name="features">Shader features</param>
        /// <returns>Shader name</returns>
        protected override string GetUnlitShaderName(UnlitShaderFeatures features) {
            return UnlitShader;
        }
#endif // !UNITY_SHADER_GRAPH_12_OR_NEWER

        protected override void SetDoubleSided(Schema.MaterialBase gltfMaterial, Material material) {
            base.SetDoubleSided(gltfMaterial,material);

            material.EnableKeyword(k_DoubleSidedOnKeyword);
            material.SetFloat(k_DoubleSidedEnablePropId, 1);

            // UnityEditor.Rendering.HighDefinition.DoubleSidedNormalMode.Flip
            material.SetFloat(k_DoubleSidedNormalModePropId, 0);
            material.SetVector(k_DoubleSidedConstantsPropId, new Vector4(-1,-1,-1,0));

            material.SetFloat(CullModeProperty, (int)CullMode.Off);
            material.SetFloat(CullModeForwardProperty, (int)CullMode.Off);
        }
#endif // USING_HDRP_10_OR_NEWER

        protected override void SetAlphaModeMask(Schema.MaterialBase gltfMaterial, Material material) {
            base.SetAlphaModeMask(gltfMaterial,material);

            material.SetFloat(k_AlphaCutoffEnable, 1);
            material.SetOverrideTag(MotionVectorTag, MotionVectorUser);
            material.SetShaderPassEnabled(MotionVectorsPass, false);


            if (gltfMaterial.Extensions?.KHR_materials_unlit != null) {
#if USING_HDRP_10_OR_NEWER
                material.EnableKeyword(SurfaceTypeTransparentKeyword);
                material.EnableKeyword(DisableSsrTransparentKeyword);
                material.EnableKeyword(EnableFogOnTransparentKeyword);

                material.SetShaderPassEnabled(ShaderPassTransparentDepthPrepass, false);
                material.SetShaderPassEnabled(ShaderPassTransparentDepthPostpass, false);
                material.SetShaderPassEnabled(ShaderPassTransparentBackface, false);
                material.SetShaderPassEnabled(ShaderPassRayTracingPrepass, false);
                material.SetShaderPassEnabled(ShaderPassDepthOnlyPass, false);

                material.SetFloat(AlphaDstBlendProperty, (int)BlendMode.OneMinusSrcAlpha);//10
#endif // USING_HDRP_10_OR_NEWER
                material.SetOverrideTag(RenderTypeTag,TransparentRenderType);
                material.SetShaderPassEnabled(DistortionVectorsPass,false);
                material.SetFloat(DstBlendProperty, (int)BlendMode.OneMinusSrcAlpha);//10
                material.SetFloat(SrcBlendProperty, (int) BlendMode.One);
                // material.SetFloat(k_RenderQueueType, 4);
                // material.SetFloat(k_SurfaceType, 1);
                material.SetFloat(k_ZTestDepthEqualForOpaque, (int)CompareFunction.LessEqual);
                material.SetFloat(ZWriteProperty, 0);
            }
        }

#if USING_HDRP_10_OR_NEWER
        /// <summary>
        /// Picks more advanced StackLit based shader graph, if any material feature requires it.
        /// </summary>
        /// <param name="features">Material features</param>
        /// <returns>Shader capable of rendering the features</returns>
        protected override Shader GetMetallicShader(MetallicShaderFeatures features)
        {
            if ((features & MetallicShaderFeatures.ClearCoat) != 0)
            {
                if (!s_MetallicStackLitShaderQueried)
                {
                    s_MetallicStackLitShader = LoadShaderByName(MetallicStackLitShader);
                    if (s_MetallicStackLitShader == null)
                    {
                        // Fallback to regular shader graph
                        s_MetallicStackLitShader = base.GetMetallicShader(features);
                    }
                    s_MetallicStackLitShaderQueried = true;
                }
                return s_MetallicStackLitShader;
            }

            return base.GetMetallicShader(features);
        }

        protected override void SetShaderModeBlend(Schema.MaterialBase gltfMaterial, Material material) {

            material.DisableKeyword(AlphaTestOnKeyword);
            material.EnableKeyword(SurfaceTypeTransparentKeyword);
            // material.EnableKeyword(KW_DISABLE_DECALS);
            material.EnableKeyword(DisableSsrTransparentKeyword);
            material.EnableKeyword(EnableFogOnTransparentKeyword);

            material.SetOverrideTag(RenderTypeTag, TransparentRenderType);

            material.SetShaderPassEnabled(ShaderPassTransparentDepthPrepass, false);
            material.SetShaderPassEnabled(ShaderPassTransparentDepthPostpass, false);
            material.SetShaderPassEnabled(ShaderPassTransparentBackface, false);
            material.SetShaderPassEnabled(ShaderPassRayTracingPrepass, false);
            material.SetShaderPassEnabled(ShaderPassDepthOnlyPass, false);

            material.SetFloat(k_AlphaCutoffEnable, 0);
            material.SetFloat(k_RenderQueueType, (int)CustomPass.RenderQueueType.PreRefraction );// 4
            material.SetFloat(k_SurfaceType, 1 );
            material.SetFloat(ZWriteProperty, 0);
            material.SetFloat(ZTestGBufferProperty, (int)CompareFunction.LessEqual); //4
            material.SetFloat(k_ZTestDepthEqualForOpaque, (int)CompareFunction.LessEqual); //4
            material.SetFloat(AlphaDstBlendProperty, (int)BlendMode.OneMinusSrcAlpha);//10
            material.SetFloat(DstBlendProperty, (int)BlendMode.OneMinusSrcAlpha);//10
            material.SetFloat(SrcBlendProperty, (int) BlendMode.SrcAlpha);//5
        }
#endif // USING_HDRP_10_OR_NEWER
    }
}
#endif // USING_URP
