# Homework-Tencent Games Open Course-2024
Assignments for the IEG Tencent Games Open Course 2024, from a complete beginner with zero prior experience.
## Week1 10/16
### 1. 源码编译UE5.4，新建一个C++工程，进行简单场景编辑和工程设置 
因为UE5.4太大了，所以就展示一下编译运行的图片：
![UE5工程](https://github.com/gdw118/Homework-Tencent-Games-Open-Course-2024/blob/main/Week1/UE5%E5%B7%A5%E7%A8%8B.png)
![UE5编译运行](https://github.com/gdw118/Homework-Tencent-Games-Open-Course-2024/blob/main/Week1/UE5%E7%BC%96%E8%AF%91%E8%BF%90%E8%A1%8C.png)  
#### 问题
在编译过程中，我遇到的问题比较普通，主要是网络问题导致gradle无法下载。  
**解决方法**：在腾讯/阿里云镜像网站手动下载对应版本的gradle，然后将zip(无需解压)放到`C:\Users\[username]\.gradle\wrapper\dists`即可。
#### Reference:
https://www.bilibili.com/video/BV1VY411o7VE/?share_source=copy_web&vd_source=48ce2e224ded1b744c82a4cd513b352c  
https://dev.epicgames.com/documentation/zh-cn/unreal-engine/setting-up-visual-studio-development-environment-for-cplusplus-projects-in-unreal-engine#c++%E5%B7%A5%E5%85%B7  
https://dev.epicgames.com/documentation/zh-cn/unreal-engine/downloading-unreal-engine-source-code?application_version=5.4

### 2. 编译并构建安装包，确保能将游戏工程安装到手机正常运行
APK: https://share.weiyun.com/hl9OuocD
![Android安装包](https://github.com/gdw118/Homework-Tencent-Games-Open-Course-2024/blob/main/Week1/Android%E5%AE%89%E8%A3%85%E5%8C%85.png)
![Android运行](https://github.com/gdw118/Homework-Tencent-Games-Open-Course-2024/blob/main/Week1/Android%E8%BF%90%E8%A1%8C.jpg)
#### 问题
- 注意手机Android的SDK版本要符合要求(Harmony4.2就不太行了)  
- 最好是直接在手机上安装APK，通过USB调试安装时好时坏。  
- 常见错误：Permission required(解决见Reference)  
#### Reference:
https://blog.csdn.net/qq_35587645/article/details/139207695  
https://dev.epicgames.com/documentation/zh-cn/unreal-engine/set-up-android-sdk-ndk-and-android-studio-using-turnkey-for-unreal-engine  
https://ue5hub.com/forum-post/1930.html  

