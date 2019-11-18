g++ -g $1 -I/usr/local/include/opencv4 -L/usr/local/lib -lopencv_videoio -lopencv_imgproc -lopencv_imgcodecs -lopencv_highgui -lopencv_core -o debug/${1:0:${#1}-4}_g
