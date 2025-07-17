#ifndef COMMEGN_H
#define COMMEGN_H

#include <QtSerialPort/QSerialPort>
#include <QWidget>
#include <QComboBox>
#include <QLabel>
#include <QPushButton>
#include <QGridLayout>
#include <QGroupBox>


class CommEgn: public QObject
{
    Q_OBJECT

private:

    QString m_str_name;
    qint32 m_baudrate;

    QSerialPort* m_serialport;

    QComboBox* m_combobox;
    QLabel* m_label;
    QLabel* m_label_info;
    QPushButton* m_pushbutton;

    QGroupBox* m_gbox;
    QGridLayout* m_grid;
    QHBoxLayout* m_hbox;

private:
    void ConnectAll() const;

public:

    CommEgn();
    ~CommEgn();

    void SetDeviceName(QString str)
    {
        m_str_name = str;
    }
    void SetBaudRate(qint32 baudrate)
    {
        m_baudrate = baudrate;
    }
    QSerialPort* GetSerialPort()
    {
        return m_serialport;
    }
    void SetButtonEnable(bool enable)
    {
        m_pushbutton->setEnabled(enable);
    }

    void Load(QWidget* widget);

signals:
    void sig_connect(bool is_connect);

public slots:
    void OnButtonConnect();
};

#endif // COMMEGN_H
