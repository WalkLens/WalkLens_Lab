using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.UX;

public class AlbedoController : MonoBehaviour
{
    float transparent;
    float r, g, b;
    public GameObject albedoSlider;
    public Renderer[] childrenderers;
    float a;
    // Start is called before the first frame update
    void Start()
    {
        childrenderers = GetComponentsInChildren<Renderer>();
        r = childrenderers[0].material.color.r;
        g = childrenderers[0].material.color.g;
        b = childrenderers[0].material.color.b;
    }

    // Update is called once per frame
    void Update()
    {
        transparent = albedoSlider.GetComponent<Slider>().Value;
        Color newAlbedo = new Color(r, g, b, transparent);
        foreach (Renderer childRenderer in childrenderers)
        {
            childRenderer.material.color = newAlbedo;
        }
    }



}
