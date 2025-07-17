#include "saveegn.h"

SaveEgn::SaveEgn(QString str): mEmgData{0}, mSensorData{0}
{
    mFileName = str;
    mNum = 0;
}

bool SaveEgn::OpenFile()
{
    mFile.setFileName(mFileName);
    return mFile.open(QIODevice::Append | QIODevice::Text);
}

void SaveEgn::CloseFile()
{
    mFile.close();
}

void SaveEgn::AddNewDataEmg(int index, float data)
{
    if(mNum < MAX_AUTOSAVE_NUM)
        mEmgData[index][mNum] = data;
}

void SaveEgn::AddNewDataSensor(int index, float data)
{
    mSensorData[index] = data;
}

void SaveEgn::IncNum()
{
    if(mNum < MAX_AUTOSAVE_NUM)
        mNum++;
}

void SaveEgn::DataPackage()
{
    mStrSave = "";

    for(int i = 0; i < 8; i++)
    {
        mStrSave += QString::number(mEmgData[i][0]);

        for(int j = 1; j < mNum; j++)
        {
            mStrSave += " ";
            mStrSave += QString::number(mEmgData[i][j]);
        }

        mStrSave += "\n";
    }

    mStrSave += QString::number(mSensorData[0]);

    for(int j = 1; j < 6; j++)
    {
        mStrSave += " ";
        mStrSave += QString::number(mSensorData[j]);
    }

    mStrSave += "\n\n";
}

//void SaveEgn::AddNewData(float* data)
//{
//    for(int i = 0; i < 8; i++)
//        mEmgData[i][mDataNum] = data[i];

//    for(int i = 0; i < 6; i++)
//        mSensorData[i][mDataNum] = data[i + 8];

//    mDataNum++;

//    if(mDataNum == MAX_AUTOSAVE_NUM)
//    {
//        SaveData();

//        for(int i = 0; i < 8; i++)
//            for(int j = 0; j < mWndSize - 1; j++)
//                mEmgData[i][j] = mEmgData[i][MAX_AUTOSAVE_NUM - mWndSize + j + 1];

//        for(int i = 0; i < 6; i++)
//            for(int j = 0; j < mWndSize - 1; j++)
//                mSensorData[i][j] = mSensorData[i][MAX_AUTOSAVE_NUM - mWndSize + j + 1];

//        mDataNum = mWndSize - 1;
//    }
//}

void SaveEgn::SaveData()
{
    DataPackage();
    mFile.write(mStrSave.toUtf8());
    mNum = 0;
}




