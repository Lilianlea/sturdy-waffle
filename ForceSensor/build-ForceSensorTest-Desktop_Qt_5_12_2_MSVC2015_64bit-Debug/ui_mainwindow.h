/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBoxForcesPara;
    QGroupBox *groupBox_Fx;
    QLabel *label_4;
    QLabel *label_value_fx;
    QGroupBox *groupBox_Fy;
    QLabel *label_5;
    QLabel *label_value_fy;
    QGroupBox *groupBox_Fz;
    QLabel *label_7;
    QLabel *label_value_fz;
    QGroupBox *groupBox_Mx;
    QLabel *label_value_mx;
    QLabel *label_9;
    QGroupBox *groupBox_My;
    QLabel *label_11;
    QLabel *label_value_my;
    QGroupBox *groupBox_Mz;
    QLabel *label_13;
    QLabel *label_value_mz;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow{background :rgb(40,44,52)}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBoxForcesPara = new QGroupBox(centralwidget);
        groupBoxForcesPara->setObjectName(QString::fromUtf8("groupBoxForcesPara"));
        groupBoxForcesPara->setGeometry(QRect(10, 30, 771, 271));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        groupBoxForcesPara->setFont(font);
        groupBoxForcesPara->setStyleSheet(QString::fromUtf8("QGroupBox{ color :rgb(255,255,255);border-style:solid; border-color:rgb(255,255,255);border-width:1px;}"));
        groupBoxForcesPara->setAlignment(Qt::AlignCenter);
        groupBox_Fx = new QGroupBox(groupBoxForcesPara);
        groupBox_Fx->setObjectName(QString::fromUtf8("groupBox_Fx"));
        groupBox_Fx->setGeometry(QRect(80, 60, 265, 40));
        groupBox_Fx->setStyleSheet(QString::fromUtf8("QGroupBox{border:none}"));
        label_4 = new QLabel(groupBox_Fx);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 130, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(15);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel { color : rgb(255,255,255);background:rgb(76,76,76) }"));
        label_4->setAlignment(Qt::AlignCenter);
        label_value_fx = new QLabel(groupBox_Fx);
        label_value_fx->setObjectName(QString::fromUtf8("label_value_fx"));
        label_value_fx->setGeometry(QRect(130, 0, 130, 40));
        label_value_fx->setFont(font1);
        label_value_fx->setStyleSheet(QString::fromUtf8("QLabel {background:rgb(255,255,255) }"));
        label_value_fx->setAlignment(Qt::AlignCenter);
        groupBox_Fy = new QGroupBox(groupBoxForcesPara);
        groupBox_Fy->setObjectName(QString::fromUtf8("groupBox_Fy"));
        groupBox_Fy->setGeometry(QRect(80, 133, 265, 40));
        groupBox_Fy->setStyleSheet(QString::fromUtf8("QGroupBox{border:none}"));
        label_5 = new QLabel(groupBox_Fy);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(-1, 0, 130, 40));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("QLabel { color : rgb(255,255,255);background:rgb(76,76,76) }"));
        label_5->setAlignment(Qt::AlignCenter);
        label_value_fy = new QLabel(groupBox_Fy);
        label_value_fy->setObjectName(QString::fromUtf8("label_value_fy"));
        label_value_fy->setGeometry(QRect(130, 0, 130, 40));
        label_value_fy->setFont(font1);
        label_value_fy->setStyleSheet(QString::fromUtf8("QLabel {background:rgb(255,255,255) }"));
        label_value_fy->setAlignment(Qt::AlignCenter);
        groupBox_Fz = new QGroupBox(groupBoxForcesPara);
        groupBox_Fz->setObjectName(QString::fromUtf8("groupBox_Fz"));
        groupBox_Fz->setGeometry(QRect(80, 205, 265, 40));
        groupBox_Fz->setStyleSheet(QString::fromUtf8("QGroupBox{border:none}"));
        label_7 = new QLabel(groupBox_Fz);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(-1, 0, 130, 40));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("QLabel { color : rgb(255,255,255);background:rgb(76,76,76) }"));
        label_7->setAlignment(Qt::AlignCenter);
        label_value_fz = new QLabel(groupBox_Fz);
        label_value_fz->setObjectName(QString::fromUtf8("label_value_fz"));
        label_value_fz->setGeometry(QRect(130, 0, 130, 40));
        label_value_fz->setFont(font1);
        label_value_fz->setStyleSheet(QString::fromUtf8("QLabel {background:rgb(255,255,255) }"));
        label_value_fz->setAlignment(Qt::AlignCenter);
        groupBox_Mx = new QGroupBox(groupBoxForcesPara);
        groupBox_Mx->setObjectName(QString::fromUtf8("groupBox_Mx"));
        groupBox_Mx->setGeometry(QRect(420, 60, 265, 40));
        groupBox_Mx->setStyleSheet(QString::fromUtf8("QGroupBox{border:none}"));
        label_value_mx = new QLabel(groupBox_Mx);
        label_value_mx->setObjectName(QString::fromUtf8("label_value_mx"));
        label_value_mx->setGeometry(QRect(130, 0, 130, 40));
        label_value_mx->setFont(font1);
        label_value_mx->setStyleSheet(QString::fromUtf8("QLabel {background:rgb(255,255,255) }"));
        label_value_mx->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(groupBox_Mx);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 0, 130, 40));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("QLabel { color : rgb(255,255,255);background:rgb(76,76,76) }"));
        label_9->setAlignment(Qt::AlignCenter);
        groupBox_My = new QGroupBox(groupBoxForcesPara);
        groupBox_My->setObjectName(QString::fromUtf8("groupBox_My"));
        groupBox_My->setGeometry(QRect(420, 133, 265, 40));
        groupBox_My->setStyleSheet(QString::fromUtf8("QGroupBox{border:none}"));
        label_11 = new QLabel(groupBox_My);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(-10, 0, 141, 40));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("QLabel { color : rgb(255,255,255);background:rgb(76,76,76) }"));
        label_11->setAlignment(Qt::AlignCenter);
        label_value_my = new QLabel(groupBox_My);
        label_value_my->setObjectName(QString::fromUtf8("label_value_my"));
        label_value_my->setGeometry(QRect(130, 0, 130, 40));
        label_value_my->setFont(font1);
        label_value_my->setStyleSheet(QString::fromUtf8("QLabel {background:rgb(255,255,255) }"));
        label_value_my->setAlignment(Qt::AlignCenter);
        groupBox_Mz = new QGroupBox(groupBoxForcesPara);
        groupBox_Mz->setObjectName(QString::fromUtf8("groupBox_Mz"));
        groupBox_Mz->setGeometry(QRect(420, 205, 265, 40));
        groupBox_Mz->setStyleSheet(QString::fromUtf8("QGroupBox{border:none}"));
        label_13 = new QLabel(groupBox_Mz);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 0, 130, 40));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("QLabel { color : rgb(255,255,255);background:rgb(76,76,76) }"));
        label_13->setAlignment(Qt::AlignCenter);
        label_value_mz = new QLabel(groupBox_Mz);
        label_value_mz->setObjectName(QString::fromUtf8("label_value_mz"));
        label_value_mz->setGeometry(QRect(130, 0, 130, 40));
        label_value_mz->setFont(font1);
        label_value_mz->setStyleSheet(QString::fromUtf8("QLabel {background:rgb(255,255,255) }"));
        label_value_mz->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(groupBoxForcesPara);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 771, 35));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(255,255,255);background-color:rgb(76,76,76);border-style:solid; border-color:rgb(255,255,255);border-width:1px;}"));
        label_6->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 390, 180, 70));
        QFont font2;
        font2.setPointSize(20);
        pushButton->setFont(font2);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 390, 180, 70));
        pushButton_2->setFont(font2);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 500, 80, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBoxForcesPara->setTitle(QString());
        groupBox_Fx->setTitle(QString());
        label_4->setText(QApplication::translate("MainWindow", "Fx", nullptr));
        label_value_fx->setText(QApplication::translate("MainWindow", "0.0N", nullptr));
        groupBox_Fy->setTitle(QString());
        label_5->setText(QApplication::translate("MainWindow", "Fy", nullptr));
        label_value_fy->setText(QApplication::translate("MainWindow", "0.0N", nullptr));
        groupBox_Fz->setTitle(QString());
        label_7->setText(QApplication::translate("MainWindow", "Fz", nullptr));
        label_value_fz->setText(QApplication::translate("MainWindow", "0.0N", nullptr));
        groupBox_Mx->setTitle(QString());
        label_value_mx->setText(QApplication::translate("MainWindow", "0.0Nm", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Mx", nullptr));
        groupBox_My->setTitle(QString());
        label_11->setText(QApplication::translate("MainWindow", "My", nullptr));
        label_value_my->setText(QApplication::translate("MainWindow", "0.0Nm", nullptr));
        groupBox_Mz->setTitle(QString());
        label_13->setText(QApplication::translate("MainWindow", "Mz", nullptr));
        label_value_mz->setText(QApplication::translate("MainWindow", "0.0Nm", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Forces & Moments", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "testsave", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
