#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_3->setVisible(false);

    //六维力传感器
    QSerialPort* sensorport = new QSerialPort(nullptr);
    //设置传感器的串口号，根据实际修改
    sensorport->setPortName("COM4");
    sensorport->setBaudRate(460800);
    sensorport->setDataBits(QSerialPort::Data8);
    sensorport->setFlowControl(QSerialPort::NoFlowControl);
    sensorport->setStopBits(QSerialPort::OneStop);
    sensorport->setParity(QSerialPort::NoParity);

    if(sensorport->open(QIODevice::ReadWrite))
    {
        qDebug() << "sensorserialport open success";
        //挂载串口
        csensor.AttachSerialport(sensorport);
        csensor.Initialize();
    }

    //每100ms刷新力传感器数据的显示
    m_timer = new QTimer(this);
    connect(m_timer, &QTimer::timeout, this, &MainWindow::updateData);
    m_timer->start(100);
    //每100ms刷新力传感器数据的显示
    save_timer = new QTimer(this);

}
void MainWindow::updateData()
{
    if(csensor.GetForceStruct())
    {
        float Fx, Fy, Fz, Mx, My, Mz;
        Fx = csensor.GetForce(0) * 9.8;
        Fy = csensor.GetForce(1) * 9.8;
        Fz = csensor.GetForce(2) * 9.8;
        Mx = csensor.GetForce(3) * 9.8;
        My = csensor.GetForce(4) * 9.8;
        Mz = csensor.GetForce(5) * 9.8;
        ui->label_value_fx->setText(QString::number(Fx, 'f', 2) + "N");
        ui->label_value_fy->setText(QString::number(Fy, 'f', 2) + "N");
        ui->label_value_fz->setText(QString::number(Fz, 'f', 2) + "N");
        ui->label_value_mx->setText(QString::number(Mx, 'f', 2) + "Nm");
        ui->label_value_my->setText(QString::number(My, 'f', 2) + "Nm");
        ui->label_value_mz->setText(QString::number(Mz, 'f', 2) + "Nm");
    }
    else
        qDebug() << "failed to read!";
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    qDebug() << "Start。。。";
    ui->pushButton->setDisabled(true);
    connect(save_timer, &QTimer::timeout, this, &MainWindow::SaveData);
    save_timer->start(200);
}


void MainWindow::on_pushButton_2_clicked()
{
    qDebug() << "Stop！！！";
    ui->pushButton->setDisabled(false);
    save_timer->stop();
}

void MainWindow::SaveData()
{
    qDebug() << "Save.....";

    if(csensor.GetForceStruct())
    {
        float Fx, Fy, Fz, Mx, My, Mz;
        Fx = csensor.GetForce(0) * 9.8;
        Fy = csensor.GetForce(1) * 9.8;
        Fz = csensor.GetForce(2) * 9.8;
        Mx = csensor.GetForce(3) * 9.8;
        My = csensor.GetForce(4) * 9.8;
        Mz = csensor.GetForce(5) * 9.8;
        qDebug() << "Fx:" << Fx << ";Fy:" << Fy << ";Fz:" << Fz
                 << ";Mx:" << Mx << ";My:" << My << ";Mz:" << Mz;
        //将数据保存至txt
        // 定义自定义目录
        QString dirPath = "C:/Users/13235/Desktop/研1/研一下/3基于肌电臂环的手法复位力向量估计/";
        // 创建 QFile 对象并打开文件以进行附加操作
        QFile file(dirPath + "csensordata.txt");

        if (file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            // 获取当前日期和时间
            QDateTime currentDateTime = QDateTime::currentDateTime();
            QString currentDateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss.zzz");
            // 创建 QTextStream 对象，并绑定到 QFile
            QTextStream out(&file);
            // 写入内容到文件
            out << "(---------------------------------------------\n";
            out << "Data saved on: " << currentDateTimeString << "\n";
            out << "Fx:" << Fx << "\n";
            out << "Fy:" << Fy << "\n";
            out << "Fz:" << Fz << "\n";
            out << "Mx:" << Mx << "\n";
            out << "My:" << My << "\n";
            out << "Mz:" << Mz << "\n";
            out << "---------------------------------------------)\n";
            // 关闭文件
            file.close();
        }
    }
    else
        qDebug() << "Save_error";
}
//测试保存——按钮testsave
void MainWindow::on_pushButton_3_clicked()
{
    SaveData();
}

