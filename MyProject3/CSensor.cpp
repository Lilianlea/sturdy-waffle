#include "CSensor.h"

CSensor::CSensor(): m_force_init{0}
{
//    m_serialport = new QSerialPort("COM26"); //通过名字打开，可通过上面的list里查找
//    /*根据需求对串口进行进行配置*/
//    m_serialport->setBaudRate(460800);//配置波特率位
//    m_serialport->setDataBits(QSerialPort::Data8);//配置数据格式为8bit
//    m_serialport->setParity(QSerialPort::NoParity);//无校验位
//    m_serialport->setStopBits(QSerialPort::OneStop);//一个停止位
//    m_serialport->setFlowControl(QSerialPort::NoFlowControl);//不使用流控制
    m_force_get[0] = 0x49;
    m_force_get[1] = 0xAA;
    m_force_get[2] = 0x0D;
    m_force_get[3] = 0x0A;
}
//CSensor::~CSensor()
//{
//    m_serialport->close();
//    m_serialport->deleteLater();
//}

void CSensor::Initialize()
{
    uint8_t init[] = {0x51, 0x00, 0x0D, 0x0A};
    m_serialport->write((char*)init, sizeof(init));
}

bool CSensor::Clear()
{
    bool ret = GetForceStruct();

    if(ret)
        for(int i = 0; i < 6; i++)
            m_force_init[i] = GetForce(i, false);

    return ret;
}

bool CSensor::GetForceStruct()
{
    bool ret = false;
    bool wrong = false;
    float force[6];
    m_serialport->write((char*)m_force_get, sizeof(m_force_get));

    if(m_serialport->waitForReadyRead(200))
    {
        QByteArray ba = m_serialport->readAll();

        if(ba.length() == 28)
        {
            for(int i = 0; i < 28; i++)
                m_return[i] = (uint8_t)ba.at(i);

            for(int i = 0; i < 6; i++)
            {
                force[i] = *((float*)(m_return + 2 + 4 * i)) * 10;

                if(i <= 2)
                {
                    if((force[i] > 500) || (force[i] < -500))
                    {
                        wrong = true;
                        break;
                    }
                }
                else
                {
                    if((force[i] > 18) || (force[i] < -18))
                    {
                        wrong = true;
                        break;
                    }
                }
            }

            if(!wrong)
            {
                for(int i = 0; i < 6; i++)
                    m_force[i] = force[i];

                ret = true;
            }
        }
    }

    return ret;
}
