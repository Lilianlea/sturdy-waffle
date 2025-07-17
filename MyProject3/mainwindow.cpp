#include "mainwindow.h"
#include "ui_mainwindow.h"

//D:\_CPro\MyProject3\build-MyProject3-Desktop_Qt_6_6_1_MSVC2019_64bit-Release

#define WINDOW_SIZE 100

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), mSaveEgn("data.txt")
{
    ui->setupUi(this);
    MemberInit();
    ConnectAll();
    UIInit();
    mHubThread->start();
    RegisterListener();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::MemberInit()
{
    mIsHubReady = false;
    mIsDeviceFound = false;
    mIsDeviceConnected = false;
    mIsSaving = false;
    mHub = HubManager::getHubInstance(_T("gForce"));
    mHubThread = std::make_shared<GFHubThread>(mHub);
    mListener = std::make_shared<GFListener>(mHub, this);
    mComForce.SetBaudRate(460800);
    mComForce.SetDeviceName("传感器");
    mComForce.Load(ui->gbox_force);
    mIsSensorConnect = false;
    mFrePointer = 0;
    mFrePeriod = 1;
}

void MainWindow::ConnectAll()
{
    connect(ui->pb_scan, SIGNAL(clicked()), this, SLOT(OnButtonScan()));
    connect(ui->pb_link, SIGNAL(clicked()), this, SLOT(OnButtonLink()));
    connect(ui->pb_test, SIGNAL(clicked()), this, SLOT(OnButtonSave()));
    connect(ui->pb_test_2, SIGNAL(clicked()), this, SLOT(OnButtonGuiling()));
    //connect(ui->pb_test_2, SIGNAL(clicked()), this, SLOT(OnButtonTest()));
    connect(mHubThread.get(), SIGNAL(hubReady()), this, SLOT(OnHubReady()));
    connect(mListener.get(), SIGNAL(sendDeviceData(QVector<uint8_t>)), this,
    SLOT(OnData(QVector<uint8_t>))); connect(mListener.get(),
    SIGNAL(deviceConnected()), this, SLOT(OnConnected()));
    connect(mListener.get(), SIGNAL(deviceDisConnected()), this,
    SLOT(OnDisconnected())); connect(mListener.get(),
    SIGNAL(emgSettingFailed()), this, SLOT(OnSettingFailed()));
    connect(mListener.get(), SIGNAL(deviceFound(QString, unsigned int)), this,
    SLOT(OnDeviceFound(QString, uint))); connect(mListener.get(),
    SIGNAL(scanFinished()), this, SLOT(OnScanFinished())); connect(&mComForce,
    SIGNAL(sig_connect(bool)), this, SLOT(OnSensorConnected(bool)));
    connect(ui->cbox_fre, SIGNAL(currentIndexChanged(int)), this,
    SLOT(OnFrequenceChange(int)));
}

void MainWindow::UIInit()
{
    mCurveDisplayEMG[0].LoadWidget(ui->vlo_0);
    mCurveDisplayEMG[1].LoadWidget(ui->vlo_1);
    mCurveDisplayEMG[2].LoadWidget(ui->vlo_2);
    mCurveDisplayEMG[3].LoadWidget(ui->vlo_3);
    mCurveDisplayEMG[4].LoadWidget(ui->vlo_4);
    mCurveDisplayEMG[5].LoadWidget(ui->vlo_5);
    mCurveDisplayEMG[6].LoadWidget(ui->vlo_6);
    mCurveDisplayEMG[7].LoadWidget(ui->vlo_7);
    mCurveDisplaySensor[0].LoadWidget(ui->vlo_8);
    mCurveDisplaySensor[1].LoadWidget(ui->vlo_9);
    mCurveDisplaySensor[2].LoadWidget(ui->vlo_10);
    mCurveDisplaySensor[3].LoadWidget(ui->vlo_11);
    mCurveDisplaySensor[4].LoadWidget(ui->vlo_12);
    mCurveDisplaySensor[5].LoadWidget(ui->vlo_13);

    for(int i = 0; i < 8; i++)
    {
        mCurveDisplayEMG[i].SetAxisRange(0, WINDOW_SIZE, 0, 260);
        mCurveDisplayEMG[i].SetAxisTickCount(3, 3);
        mCurveDisplayEMG[i].SetTitle(QString("通道")+QString::number(i+1));
    }

    for(int i = 0; i < 3; i++)
    {
        mCurveDisplaySensor[i].SetAxisRange(0, WINDOW_SIZE, -100, 100);
        mCurveDisplaySensor[i].SetAxisTickCount(3, 3);
    }
    for(int i = 3; i < 6; i++)
    {
        mCurveDisplaySensor[i].SetAxisRange(0, WINDOW_SIZE, -18, 18);
        mCurveDisplaySensor[i].SetAxisTickCount(3, 3);
    }
    mCurveDisplaySensor[0].SetTitle("Fx");
    mCurveDisplaySensor[1].SetTitle("Fy");
    mCurveDisplaySensor[2].SetTitle("Fz");
    mCurveDisplaySensor[3].SetTitle("Mx");
    mCurveDisplaySensor[4].SetTitle("My");
    mCurveDisplaySensor[5].SetTitle("Mz");

    ui->cbox_fre->addItem("100Hz");
    ui->cbox_fre->addItem("200Hz");
    ui->cbox_fre->addItem("500Hz");
    ui->cbox_fre->setCurrentIndex(1);
    ui->pb_scan->setEnabled(false);
    ui->pb_link->setEnabled(false);
    ui->cbox_fre->setEnabled(false);
}

void MainWindow::RegisterListener()
{
    GF_RET_CODE retCode = GF_RET_CODE::GF_SUCCESS;
    retCode = mHub->registerListener(mListener);
    ui->pte_info->appendPlainText("Hub Initialing...");
}

void MainWindow::OnButtonScan()
{
    ui->pte_info->appendPlainText("Start Scanning...");
    mHub->startScan();
    ui->pb_link->setEnabled(false);
    mIsDeviceFound = false;
}

void MainWindow::OnButtonLink()
{
    ui->pte_info->appendPlainText("Start Linking...");
    QString str = ui->cbox_fre->currentText();
    int fre = str.left(str.indexOf('H')).toInt();
    mListener->connectDevice(mDeviceName,
                             GFListener::EMG_DATA_BITS_8,
                             (GFListener::EMG_DATA_RATE)fre,
                             GFListener::ACC_DATA_RATE_50,
                             GFListener::GYRO_DATA_RATE_50,
                             GFListener::MAG_DATA_RATE_5,
                             GFListener::QUAT_DATA_RATE_50);
    ui->pb_link->setEnabled(false);
}

void MainWindow::OnButtonSave()
{
    if(mIsSaving)
    {
        ui->pb_test->setText("Start Save");
        mIsSaving = false;
        mSaveEgn.CloseFile();
    }
    else
    {
        ui->pb_test->setText("Stop Save");
        mSaveEgn.OpenFile();
        mIsSaving = true;
    }
}

void MainWindow::OnButtonGuiling()
{
    if(!mSensor.Clear())
        QMessageBox::information(this, "提示", "归零失败", QMessageBox::Ok);
}

void MainWindow::OnButtonTest()
{
    static int num = 0;
    ui->pte_info->appendPlainText("Test");

    if(num == 0)
        mSaveEgn.OpenFile();

    for(int i = 0; i < 8; i++)
        mSaveEgn.AddNewDataEmg(i, num);

    for(int i = 0; i < 6; i++)
        mSaveEgn.AddNewDataSensor(i, num + 1);

    mSaveEgn.IncNum();
    QString str("num=");
    str += QString::number(mSaveEgn.GetNum());
    ui->pte_info->appendPlainText(str);
    num++;

    if(num == 5)
        mSaveEgn.SaveData();
}

void MainWindow::OnHubReady()
{
    mIsHubReady = true;
    ui->pte_info->appendPlainText("Hub Ready!");
    ui->pb_scan->setEnabled(true);
}

void MainWindow::OnData(QVector<uint8_t> data)
{
    if (data.size() == 128/*8bit ADC*/ || data.size() == 64/*12bit ADC*/)
    {
        int times = data.size() / 8;

        for(int i = 0; i < times; i++)
        {
            for (int n = 0; n < 8; n++)
            {
                //int raw = (rawData[i*CHNUM+n] + rawData[(i+1)*CHNUM+n]) / 2;
                int raw = data[i * 8 + n];
                mCurveDisplayEMG[n].AddNewData(raw);

                if(mIsSaving)
                    mSaveEgn.AddNewDataEmg(n, raw);
            }

            if(mIsSaving)
                mSaveEgn.IncNum();
        }

        if(mIsSensorConnect)
        {
            mSensor.GetForceStruct();

            for(int i = 0; i < 6; i++)
            {
                mCurveDisplaySensor[i].AddNewData(mSensor.GetForce(i));

                if(mIsSaving)
                    mSaveEgn.AddNewDataSensor(i, mSensor.GetForce(i));
            }

            if(mIsSaving)
                mSaveEgn.SaveData();
        }
    }
}

void MainWindow::OnConnected()
{
    ui->pte_info->appendPlainText("On Connected!");
    mIsDeviceConnected = true;
}

void MainWindow::OnDisconnected()
{
    ui->pte_info->appendPlainText("On Disconnected!");
    mIsDeviceConnected = false;
}

void MainWindow::OnSettingFailed()
{
    ui->pte_info->appendPlainText("On SettingFailed!");
}

void MainWindow::OnDeviceFound(QString devName, unsigned int rssi)
{
    ui->pte_info->appendPlainText(devName + ",rssi=" + QString::number(rssi));
    mDeviceName = devName;
    mIsDeviceFound = true;
    mHub->stopScan();
}

void MainWindow::OnScanFinished()
{
    ui->pte_info->appendPlainText(QString("On ScanFinished!"));
    ui->pb_link->setEnabled(true);
    ui->cbox_fre->setEnabled(true);

    if(mIsDeviceFound)
        ui->pb_link->setEnabled(true);
}

void MainWindow::OnSensorConnected(bool is_connect)
{
    mIsSensorConnect = is_connect;

    if(mIsSensorConnect)
    {
        mSensor.AttachSerialport(mComForce.GetSerialPort());
        mSensor.Initialize();
    }
}

void MainWindow::OnFrequenceChange(int index)
{
    QString str = ui->cbox_fre->currentText();
    int fre = str.left(str.indexOf('H')).toInt();
    mFrePeriod = 200 / fre;
}

void MainWindow::closeEvent(QCloseEvent* event)
{
    if(mIsDeviceConnected)
        mListener->disconnectDevice();

    event->accept();
}

