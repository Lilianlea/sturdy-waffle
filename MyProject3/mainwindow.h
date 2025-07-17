#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <HubManager.h>
#include "gflistener.h"
#include "gfhubthread.h"
#include "curvedisplay.h"
#include "CSensor.h"
#include "commegn.h"
#include "saveegn.h"

using namespace gf;

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow* ui;
    //使用说明
    bool is_read;
    //肌电臂环
    CurveDisplay mCurveDisplayEMG[8];
    std::shared_ptr<Hub> mHub;
    std::shared_ptr<GFHubThread> mHubThread;
    std::shared_ptr<GFListener> mListener;
    bool mIsHubReady;
    QString mDeviceName;
    bool mIsDeviceFound;
    bool mIsDeviceConnected;
    int mFrePointer;
    int mFrePeriod;
    //压力传感器
    CurveDisplay mCurveDisplaySensor[6];
    CommEgn mComForce;
    CSensor mSensor;
    bool mIsSensorConnect;
    //保存模块
    SaveEgn mSaveEgn;
    bool mIsSaving;

private:
    //成员初始化
    void MemberInit();
    //连接信号与槽
    void ConnectAll();
    //UI初始化
    void UIInit();
    //初始化过程
    void RegisterListener();

private slots:
    //窗口关闭
    void closeEvent(QCloseEvent* event);
    void OnButtonScan();
    void OnButtonLink();
    void OnButtonSave();
    void OnButtonGuiling();
    void OnButtonTest();
    void OnHubReady();
    void OnData(QVector<uint8_t> data);
    void OnConnected();
    void OnDisconnected();
    void OnSettingFailed();
    void OnDeviceFound(QString devName, unsigned int rssi);
    void OnScanFinished();
    void OnSensorConnected(bool is_connect);
    //频率切换
    void OnFrequenceChange(int index);
};
#endif // MAINWINDOW_H
