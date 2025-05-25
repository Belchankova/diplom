#ifndef HISTORY_H
#define HISTORY_H

#include <QWidget>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChart>
#include <QtCharts/QValueAxis>
#include <QtCharts/QDateTimeAxis>
//using namespace QtCharts;

namespace Ui {
class History;
}

class History : public QWidget
{
    Q_OBJECT

public:
    explicit History(QWidget *parent = nullptr);
    ~History();

public slots:
    void reload();


private:
    Ui::History *ui;
    void loadHistory();
    void buildSugarChart();
    void onDeleteClicked();

};

#endif // HISTORY_H
