#include "commegn.h"
#include <QtSerialPort/QSerialPortInfo>

void CommEgn::ConnectAll() const
{
    connect(m_pushbutton, SIGNAL(clicked()), this, SLOT(OnButtonConnect()));
}

CommEgn::CommEgn()
{
    m_serialport = nullptr;
    m_combobox = nullptr;
    m_label = nullptr;
    m_label_info = nullptr;
    m_pushbutton = nullptr;
    m_gbox = nullptr;
    m_grid = nullptr;
    m_hbox = nullptr;
    m_baudrate = 460800;
}

CommEgn::~CommEgn()
{
    if(m_serialport != nullptr)
    {
        if(m_serialport->isOpen())
        {
            m_serialport->clear();
            m_serialport->close();
        }

        m_serialport->deleteLater();
    }

    if (m_combobox != nullptr) m_combobox->deleteLater();

    if (m_label != nullptr) m_label->deleteLater();

    if (m_label_info != nullptr) m_label_info->deleteLater();

    if (m_pushbutton != nullptr) m_pushbutton->deleteLater();

    if (m_gbox != nullptr) m_gbox->deleteLater();

    if (m_grid != nullptr) m_grid->deleteLater();

    if (m_hbox != nullptr) m_hbox->deleteLater();
}

void CommEgn::Load(QWidget* widget)
{
    m_gbox = new QGroupBox(m_str_name + "串口连接");
    m_combobox = new QComboBox();
    m_label = new QLabel(m_str_name + "串口号");
    m_label_info = new QLabel("未连接");
    m_pushbutton = new QPushButton("连接" + m_str_name);
    QList<QSerialPortInfo> list = QSerialPortInfo::availablePorts();

    foreach(const QSerialPortInfo& info, list)
    {
        m_combobox->addItem(info.portName() + ":" + info.description());
    }

    m_grid = new QGridLayout();
    m_grid->addWidget(m_label,      0, 0,  1,  1);
    m_grid->addWidget(m_combobox,   0, 1,  1,  1);
    m_grid->addWidget(m_pushbutton, 1, 0,  1, -1);
    m_grid->addWidget(m_label_info, 2, 0, -1, -1, Qt::AlignLeft | Qt::AlignTop);
    m_grid->setSpacing(10);
    m_gbox->setLayout(m_grid);
    m_hbox = new QHBoxLayout();
    m_hbox->addWidget(m_gbox);
    widget->setLayout(m_hbox);
    ConnectAll();
}

//slots:
void CommEgn::OnButtonConnect()
{
    QString str;

    if(m_serialport == nullptr)
    {
        str = m_combobox->currentText();
        m_serialport = new QSerialPort();
        m_serialport->setPortName(str.left(str.indexOf(':')));

        if(m_serialport->open(QIODevice::ReadWrite))
        {
            m_serialport->setBaudRate(m_baudrate);
            m_serialport->setDataBits(QSerialPort::Data8);
            m_serialport->setStopBits(QSerialPort::OneStop);
            m_serialport->setParity(QSerialPort::NoParity);
            m_serialport->setFlowControl(QSerialPort::NoFlowControl);
            str = m_str_name + "打开成功";
            m_pushbutton->setText("断开" + m_str_name);
            emit sig_connect(true);
        }
        else
        {
            m_serialport->deleteLater();
            m_serialport = nullptr;
            str = m_str_name + "打开失败";
        }

        m_label_info->setText(str);
    }
    else
    {
        if(m_serialport->isOpen())
        {
            m_serialport->clear();
            m_serialport->close();
            m_serialport->deleteLater();
            m_serialport = nullptr;
            str = m_str_name + "关闭成功";
            emit sig_connect(false);
        }
        else
        {
            str = m_str_name + "已关闭";
        }

        m_label_info->setText(str);
        m_pushbutton->setText("连接" + m_str_name);
    }
}
