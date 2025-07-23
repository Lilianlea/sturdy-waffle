#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "CSensor.h"

#include <QMainWindow>
#include <QtSerialPort>

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

    //六维力传感器
    CSensor csensor;

    QTimer* m_timer;
    QTimer* save_timer;


public slots:
    //更新力传感器数据
    void updateData();
    //保存力传感器数据
    void SaveData();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
};

#endif // MAINWINDOW_H
