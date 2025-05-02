/*#include "History.h"
#include "ui_History.h"

History::History(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::History)
{
    ui->setupUi(this);
}

History::~History()
{
    delete ui;
}*/
#include "History.h"
#include "ui_History.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QTableWidgetItem>
#include <QDebug>
/*#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChart>
#include <QtCharts/QDateTimeAxis>
#include <QtCharts/QValueAxis>
#include <QDateTime>
using namespace QtCharts;*/

History::History(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::History)
{
    ui->setupUi(this);

    // Настройка таблицы
    ui->diaryList->setColumnCount(5);
    ui->diaryList->setHorizontalHeaderLabels({"Дата", "Сахар", "ХЕ", "Инсулин", "Еда"});
    ui->diaryList->setEditTriggers(QAbstractItemView::NoEditTriggers); // запрет редактирования
    ui->diaryList->setSelectionBehavior(QAbstractItemView::SelectRows); // выбор целыми строками
    ui->diaryList->setSelectionMode(QAbstractItemView::SingleSelection);

    loadHistory();
}

History::~History()
{
    delete ui;
}

void History::loadHistory()
{
    QSqlQuery query("SELECT created_at, sugar, he, insulin, food FROM diary_entries ORDER BY created_at DESC");

    if (!query.isActive()) {
        qDebug() << "Ошибка выполнения запроса:" << query.lastError().text();
        return;
    }

    ui->diaryList->setRowCount(0); // очищаем таблицу

    int row = 0;
    while (query.next()) {
        ui->diaryList->insertRow(row);
        for (int col = 0; col < 5; ++col) {
            ui->diaryList->setItem(row, col, new QTableWidgetItem(query.value(col).toString()));
        }
        ++row;
    }

    ui->diaryList->resizeColumnsToContents(); // авторазмер колонок
}
