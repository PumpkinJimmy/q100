## Q100 笔记
### pre
imread
imwrite
imshow
waitKey
Mat.at
### question
1. 灰度化：imread指定flag或者cvtColor
2. 二值化：threshold简单粗暴
3. HSV：面向用户的颜色模型，指H(色调)S(纯度)V(亮度)
   在提取颜色上有奇效，配合inRange效果更佳
4. GaussianBlur, medianBlur, boxFilter 三大低通滤波，降噪
   高斯最佳，保留细节
   中值对付椒盐噪点
   均值滤波不知道干什么
5. Sobel, Laplacian 高通滤波，提取边缘
   Sobel相当于一阶偏导数（当然OpenCV的Sobel全微分也是可以的），Laplacian就是二阶导数，保留细节边缘极多，要先降噪
