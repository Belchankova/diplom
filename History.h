#ifndef HISTORY_H
#define HISTORY_H

#include <QWidget>

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
    void buildSugarChart(int userId);
};

#endif // HISTORY_H
