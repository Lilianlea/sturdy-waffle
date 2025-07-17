#include "curvedisplay.h"

CurveDisplay::CurveDisplay()
{
    //图表初始化设置
    m_chartview = new QChartView();
    m_chart = new QChart();
    m_lineseries = new QLineSeries();
    m_axis_x = new QValueAxis();
    m_axis_y = new QValueAxis();
    m_chart->setTheme(QChart::ChartThemeDark);
    m_chart->legend()->hide();
    m_chart->addSeries(m_lineseries);
    m_chart->setAxisX(m_axis_x, m_lineseries);
    m_chart->setAxisY(m_axis_y, m_lineseries);
    m_chartview->setChart(m_chart);
}

CurveDisplay::~CurveDisplay()
{
    m_chartview->deleteLater();
    m_chart->deleteLater();
    m_lineseries->deleteLater();
    m_axis_x->deleteLater();
    m_axis_y->deleteLater();
}

void CurveDisplay::LoadWidget(QLayout* target)
{
    target->addWidget(m_chartview);
}

void CurveDisplay::SetTitle(const QString& title)
{
    m_chart->setTitle(title);
}

void CurveDisplay::SetAxisRange(int xmin, int xmax, int ymin, int ymax)
{
    m_axis_x->setRange(xmin, xmax);
    m_axis_y->setRange(ymin, ymax);
}

void CurveDisplay::SetAxisTickCount(int xcount, int ycount)
{
    m_axis_x->setTickCount(xcount);
    m_axis_y->setTickCount(ycount);
}


void CurveDisplay::AddNewData(qreal data)
{
    if(m_data.count() >= (int)(m_axis_x->max() - m_axis_x->min() + 1))
        m_data.removeFirst();

    for(int i = 0; i < m_data.count(); i++)
        m_data[i].setX(m_data.at(i).x() - 1);

    m_data.append(QPointF(m_axis_x->max(), data));
    m_lineseries->replace(m_data);
}

void CurveDisplay::ClearSeries()
{
    m_data.clear();
    m_lineseries->replace(m_data);
}

























