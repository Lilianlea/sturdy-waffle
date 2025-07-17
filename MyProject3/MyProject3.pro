QT       += core gui qml charts serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += \
    $$PWD/inc \
    $$PWD/inc/utils

LIBS += $$PWD/lib/gforce32.lib\
    $$PWD/lib/gforce64.lib

SOURCES += \
    CSensor.cpp \
    commegn.cpp \
    curvedisplay.cpp \
    gfhubthread.cpp \
    gflistener.cpp \
    main.cpp \
    mainwindow.cpp \
    saveegn.cpp

HEADERS += \
    CSensor.h \
    commegn.h \
    curvedisplay.h \
    gfhubthread.h \
    gflistener.h \
    mainwindow.h \
    saveegn.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
