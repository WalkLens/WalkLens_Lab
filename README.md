# WalkLens_Lab 👓
서울대학교 기반 메타버스 학회 XREAL의 프로젝트 팀 WalkLens의 실험실(Lab) 기반 교육 플랫폼 데모 버전

##  팀 소개 👨‍👦‍👦
 ### WalkLens
 저희는 XREAL 내부에서 VR이 아닌, 새로운 가치를 추구해 보고자 일상에서 생활 활용도가 높은 AR을 구심점으로 모인 **WalkLens** 팀입니다. 
 
 이때, 프로젝트를 개발하기 위해 디바이스 **HoloLens2**를 사용하여 프로젝트를 시작하게 되었습니다. 
 
 현재까지 “XRecords”, “PUN translator” 두 개의 소규모 프로젝트를 제작해 보며 XMC 발표를 진행하였고, 체험자들에게 AR 환경의 가능성을 보여주었습니다.
 ### 팀원 소개
|팀장|이우진(3기)|
|------|------|
|리서치|허민준(3기), 이윤경(4기), 김희진(4기)|
|데브|김기영(4기), 김정효(4기), 이우진(3기), 이유진(4기), 이현민(4기)|
|디자인|정다빈(5기)|
## 프로젝트 소개 🖥
 ### AR 환경 내에서 실험 교육 콘텐츠를 소비하면서 새로운 내용을 학습하는 서비스
 AR 교육 플랫폼에 대한 아이디에이션이 진행된 이후, 다양한 교육 환경 중 실험실 내에서의 환경이 본 팀에서 구현하고자 하는 공간 컴퓨팅(Spatial Computing) 및 교육에 적합하다고 판단하였고,
 이후 관련 리서칭, UI/UX 디자인, 기술 구현을 통해 본 서비스에 대한 유저 테스트를 거쳐 검증을 진행해보려고 합니다.
 
 ### 개발 방법론
  * Agile
 ### 개발 기간
  - 2023.11 ~ 2024.01
 ### 개발 환경
  - `Unity`
  - `Photon PUN 2`
  - `Mixed Reality Toolkit`
  - `Azure Storage`
  - `Reality Collective`
  - `Microsoft Azure Services`
  - `HoloLens 2`
 ### Application Version
  - `Unity Editor : 2021.3.30f1`
  - `Mixed Reality ToolKit : MRTK 3.0`
 
## 주요 기능 🛠
 ### 1. Identification
 ![image](https://github.com/WalkLens/WalkLens_Lab/assets/72248342/5910dd82-60b9-4912-a1bd-35a0545cae4b)
 - **Supervisor**, **Student** 선택 가능
 - **Student**는 자신의 이름을 입력하도록 합니다.
 - 선택 이후에는 `PUN 2` 서버에 접속합니다.
 ### 2. QR-Recognition
 ![image](https://github.com/WalkLens/WalkLens_Lab/assets/72248342/c4c5a520-1bb6-4651-8ffb-1153afbf9353)
 - 홀로렌즈의 카메라를 통해 QR 코드를 인식하면 Lecture용 UI가 뜨도록 합니다.
 ### 3. Lecture
 ![image](https://github.com/WalkLens/WalkLens_Lab/assets/72248342/24abb866-43fa-41bf-85cb-bcb72248fa46)
 - DB(`Azure Storage`)에 저장된 영상을 실행할 수 있도록 합니다.
 - 왼쪽의 **Contents UI**에서 Lecture 선택이 가능합니다.
 ### 4. Utility Tools
 ![image](https://github.com/WalkLens/WalkLens_Lab/assets/72248342/5eff8ade-5716-43b1-806e-a4977340d99f)
 - 왼손을 위로 올리는 Haptic을 통해 여러가지 부가 기능들을 제공할 수 있도록 합니다.
 #### 1. Chat
 ![image](https://github.com/WalkLens/WalkLens_Lab/assets/72248342/5844eb48-4ac6-49c5-a6bc-ce63bad853a7)
 - `Azure Cognivie Service`의 `Speech To Text` 기능을 이용해 음성인식 채팅을 지원합니다.
 #### 2. Calculator
 ![image](https://github.com/WalkLens/WalkLens_Lab/assets/72248342/64039228-99a0-470a-b714-5ac594c70677)
 - **화학 실험실용 몰농도 계산기**를 지원합니다.
   


   
 
 
