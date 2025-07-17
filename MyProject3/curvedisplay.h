#ifndef CURVEDISPLAY_H
#define CURVEDISPLAY_H

#include <QtCharts>
#include <QLayout>


class CurveDisplay
{
public:
    CurveDisplay();
    ~CurveDisplay();
    //测试接口


private:
    QList<QPointF> m_data;

    QLineSeries* m_lineseries;
    QChart* m_chart;
    QChartView* m_chartview;
    QValueAxis* m_axis_x;
    QValueAxis* m_axis_y;

public:
    //外部接口
    void LoadWidget(QLayout* layout);
    //设置标题
    void SetTitle(const QString& title);
    //坐标轴设置
    void SetAxisRange(int xmin = 0, int xmax = 30, int ymin = 0, int ymax = 4200);
    void SetAxisTickCount(int xcount, int ycount);
    //加入新数据
    void AddNewData(qreal data);
    //清空数据
    void ClearSeries();
};

#endif // CURVEDISPLAY_H
