#ifndef CSENSOR_H
#define CSENSOR_H



#include <QtSerialPort>


class CSensor
{
private:
    QSerialPort* m_serialport;

    uint8_t m_force_get[4];
    uint8_t m_return[28];
    float m_force[6];
    float m_force_init[6];


public:
    CSensor();
    //~CSensor();

    //挂载串口
    void AttachSerialport(QSerialPort* serialport)
    {
        m_serialport = serialport;
    }
    //初始化
    void Initialize();
    //归零
    bool Clear();
    //力获取
    bool GetForceStruct();
    float GetForce(int index, bool needclear = true)
    {
        if(!needclear)
            return m_force[index];
        else
            return m_force[index] - m_force_init[index];
    }
};

#endif // CSENSOR_H
