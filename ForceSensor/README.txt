step1：
使用msvc2019构建
step2：
修改MainWindow.cpp  
15行
 //设置传感器的串口号，根据实际修改
 sensorport->setPortName("COMx");


99行
//自定义数据文件保存路径以及文件名称
QString dirPath = "C:/Users/Administrator/Desktop/";
QFile file(dirPath + "csensordata.txt");

