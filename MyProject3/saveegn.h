#ifndef SAVEEGN_H
#define SAVEEGN_H

#define MAX_AUTOSAVE_NUM 16//时间窗口
#include <QString>
#include <QFile>

class SaveEgn
{
public:
    SaveEgn(QString str);

private:
    //文件名
    QString mFileName;
    QFile mFile;
    QString mStrSave;
    //数据
    float mEmgData[8][MAX_AUTOSAVE_NUM];
    float mSensorData[6];
    //数量
    int mNum;

public:
    //打开关闭文件
    bool OpenFile();
    void CloseFile();
    //添加数据
    void AddNewDataEmg(int index, float data);
    void AddNewDataSensor(int index, float data);
    void IncNum();
    //封装数据
    void DataPackage();
    //保存数据
    void SaveData();


    //测试
    int GetNum()const
    {
        return mNum;
    }
};

#endif // SAVEEGN_H
