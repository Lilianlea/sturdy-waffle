/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vlo_0;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *vlo_1;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *vlo_2;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *vlo_3;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *vlo_4;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *vlo_5;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *vlo_6;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *vlo_7;
    QGroupBox *groupBox;
    QPushButton *pb_link;
    QPushButton *pb_scan;
    QPlainTextEdit *pte_info;
    QComboBox *cbox_fre;
    QGroupBox *gbox_force;
    QPushButton *pb_test;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *vlo_8;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *vlo_9;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *vlo_10;
    QWidget *verticalLayoutWidget_12;
    QVBoxLayout *vlo_11;
    QWidget *verticalLayoutWidget_13;
    QVBoxLayout *vlo_12;
    QWidget *verticalLayoutWidget_14;
    QVBoxLayout *vlo_13;
    QPushButton *pb_test_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1500, 750);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(310, 0, 281, 201));
        vlo_0 = new QVBoxLayout(verticalLayoutWidget);
        vlo_0->setObjectName("vlo_0");
        vlo_0->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(610, 0, 281, 201));
        vlo_1 = new QVBoxLayout(verticalLayoutWidget_2);
        vlo_1->setObjectName("vlo_1");
        vlo_1->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(1210, 0, 281, 201));
        vlo_2 = new QVBoxLayout(verticalLayoutWidget_3);
        vlo_2->setObjectName("vlo_2");
        vlo_2->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(910, 0, 281, 201));
        vlo_3 = new QVBoxLayout(verticalLayoutWidget_4);
        vlo_3->setObjectName("vlo_3");
        vlo_3->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(910, 220, 281, 201));
        vlo_4 = new QVBoxLayout(verticalLayoutWidget_5);
        vlo_4->setObjectName("vlo_4");
        vlo_4->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(310, 220, 281, 201));
        vlo_5 = new QVBoxLayout(verticalLayoutWidget_6);
        vlo_5->setObjectName("vlo_5");
        vlo_5->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_7 = new QWidget(centralwidget);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(610, 220, 281, 201));
        vlo_6 = new QVBoxLayout(verticalLayoutWidget_7);
        vlo_6->setObjectName("vlo_6");
        vlo_6->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_8 = new QWidget(centralwidget);
        verticalLayoutWidget_8->setObjectName("verticalLayoutWidget_8");
        verticalLayoutWidget_8->setGeometry(QRect(1210, 220, 281, 201));
        vlo_7 = new QVBoxLayout(verticalLayoutWidget_8);
        vlo_7->setObjectName("vlo_7");
        vlo_7->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 241, 401));
        pb_link = new QPushButton(groupBox);
        pb_link->setObjectName("pb_link");
        pb_link->setGeometry(QRect(120, 370, 111, 24));
        pb_scan = new QPushButton(groupBox);
        pb_scan->setObjectName("pb_scan");
        pb_scan->setGeometry(QRect(10, 370, 101, 24));
        pte_info = new QPlainTextEdit(groupBox);
        pte_info->setObjectName("pte_info");
        pte_info->setGeometry(QRect(10, 30, 221, 301));
        cbox_fre = new QComboBox(groupBox);
        cbox_fre->setObjectName("cbox_fre");
        cbox_fre->setGeometry(QRect(10, 340, 221, 24));
        gbox_force = new QGroupBox(centralwidget);
        gbox_force->setObjectName("gbox_force");
        gbox_force->setGeometry(QRect(0, 410, 241, 231));
        pb_test = new QPushButton(centralwidget);
        pb_test->setObjectName("pb_test");
        pb_test->setGeometry(QRect(0, 650, 80, 24));
        verticalLayoutWidget_9 = new QWidget(centralwidget);
        verticalLayoutWidget_9->setObjectName("verticalLayoutWidget_9");
        verticalLayoutWidget_9->setGeometry(QRect(310, 430, 171, 121));
        vlo_8 = new QVBoxLayout(verticalLayoutWidget_9);
        vlo_8->setObjectName("vlo_8");
        vlo_8->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_10 = new QWidget(centralwidget);
        verticalLayoutWidget_10->setObjectName("verticalLayoutWidget_10");
        verticalLayoutWidget_10->setGeometry(QRect(490, 430, 171, 121));
        vlo_9 = new QVBoxLayout(verticalLayoutWidget_10);
        vlo_9->setObjectName("vlo_9");
        vlo_9->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_11 = new QWidget(centralwidget);
        verticalLayoutWidget_11->setObjectName("verticalLayoutWidget_11");
        verticalLayoutWidget_11->setGeometry(QRect(670, 430, 171, 121));
        vlo_10 = new QVBoxLayout(verticalLayoutWidget_11);
        vlo_10->setObjectName("vlo_10");
        vlo_10->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_12 = new QWidget(centralwidget);
        verticalLayoutWidget_12->setObjectName("verticalLayoutWidget_12");
        verticalLayoutWidget_12->setGeometry(QRect(850, 430, 171, 121));
        vlo_11 = new QVBoxLayout(verticalLayoutWidget_12);
        vlo_11->setObjectName("vlo_11");
        vlo_11->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_13 = new QWidget(centralwidget);
        verticalLayoutWidget_13->setObjectName("verticalLayoutWidget_13");
        verticalLayoutWidget_13->setGeometry(QRect(1030, 430, 171, 121));
        vlo_12 = new QVBoxLayout(verticalLayoutWidget_13);
        vlo_12->setObjectName("vlo_12");
        vlo_12->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_14 = new QWidget(centralwidget);
        verticalLayoutWidget_14->setObjectName("verticalLayoutWidget_14");
        verticalLayoutWidget_14->setGeometry(QRect(1210, 430, 171, 121));
        vlo_13 = new QVBoxLayout(verticalLayoutWidget_14);
        vlo_13->setObjectName("vlo_13");
        vlo_13->setContentsMargins(0, 0, 0, 0);
        pb_test_2 = new QPushButton(centralwidget);
        pb_test_2->setObjectName("pb_test_2");
        pb_test_2->setGeometry(QRect(110, 650, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1500, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\350\202\214\347\224\265\350\207\202\347\216\257\346\216\247\345\210\266", nullptr));
        pb_link->setText(QCoreApplication::translate("MainWindow", "Link", nullptr));
        pb_scan->setText(QCoreApplication::translate("MainWindow", "Scan", nullptr));
        gbox_force->setTitle(QCoreApplication::translate("MainWindow", "\345\216\213\345\212\233\344\274\240\346\204\237\345\231\250\346\216\247\345\210\266", nullptr));
        pb_test->setText(QCoreApplication::translate("MainWindow", "Start Saving", nullptr));
        pb_test_2->setText(QCoreApplication::translate("MainWindow", "Zero", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
