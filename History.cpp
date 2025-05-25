
#include "History.h"
#include "ui_History.h"
#include "LoginWindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QTableWidgetItem>
#include <QDebug>
/*#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChart>
#include <QtCharts/QValueAxis>
#include <QtCharts/QDateTimeAxis>*/
#include <QDateTime>
#include <QVBoxLayout>
#include <QMessageBox>


History::History(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::History)
{
    ui->setupUi(this);
    connect(ui->deleteButton, &QPushButton::clicked, this, &History::onDeleteClicked);


    ui->diaryList->setColumnCount(6);
    ui->diaryList->setHorizontalHeaderLabels({"ID", "Дата", "Сахар", "ХЕ", "Инсулин", "Еда"});
    ui->diaryList->setColumnHidden(0, true); // Скрыть колонку ID


    for (int i = 1; i < 5; ++i) {
        ui->diaryList->horizontalHeader()->setSectionResizeMode(i, QHeaderView::Interactive);
    }

    ui->diaryList->horizontalHeader()->setSectionResizeMode(5, QHeaderView::Stretch);

    ui->diaryList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->diaryList->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->diaryList->setSelectionMode(QAbstractItemView::SingleSelection);



    ui->diaryList->resizeRowsToContents();
    loadHistory();
}

History::~History()
{
    delete ui;
}

void History::loadHistory()
{ qDebug() << "loadHistory() called";
    QSqlQuery query;
    query.prepare("SELECT id, created_at, sugar, he, insulin, food FROM diary_entries "
                  "WHERE username = :username ORDER BY created_at DESC");
    query.bindValue(":username", LoginWindow::currentUsername());
    if (!query.exec()) {
        qDebug() << "Ошибка выполнения запроса:" << query.lastError().text();
        return;
    }

    ui->diaryList->clear();
    ui->diaryList->setRowCount(0);
    ui->diaryList->setColumnCount(6);
    ui->diaryList->setHorizontalHeaderLabels({"ID", "Дата", "Сахар", "ХЕ", "Инсулин", "Еда"});
    ui->diaryList->setColumnHidden(0, true);
    ui->diaryList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    int row = 0;
    while (query.next()) {
        ui->diaryList->insertRow(row);
        for (int col = 0; col < 6; ++col) {
            QString text = query.value(col).toString();
            if (col == 1) {
                QDateTime dt = QDateTime::fromString(text, Qt::ISODate);
                text = dt.toString("dd.MM.yyyy HH:mm");
            }
            ui->diaryList->setItem(row, col, new QTableWidgetItem(text));
        }
        ++row;
    }


    ui->diaryList->resizeRowsToContents();
    buildSugarChart();
}



void History::reload() {
    loadHistory();
}
void History::buildSugarChart() {
    QLineSeries *series = new QLineSeries();

    QSqlQuery query;
    query.prepare("SELECT created_at, sugar FROM diary_entries "
                  "WHERE username = :username ORDER BY created_at ASC");
    query.bindValue(":username", LoginWindow::currentUsername());
    query.exec();


    while (query.next()) {
        QDateTime timestamp = QDateTime::fromString(query.value(0).toString(), Qt::ISODate);
        double sugar = query.value(1).toDouble();
        series->append(timestamp.toMSecsSinceEpoch(), sugar);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Уровень сахара");

    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setFormat("dd.MM HH:mm");
    axisX->setTitleText("Время");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis;
    axisY->setTitleText("Сахар (ммоль/л)");
    axisY->setLabelFormat("%.1f");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);
}

void History::onDeleteClicked()
{
    int row = ui->diaryList->currentRow();

    if (row < 0) {
        QMessageBox::warning(this, "Удаление", "Выберите запись для удаления.");
        return;
    }

    QString idStr = ui->diaryList->item(row, 0)->text();

    QMessageBox::StandardButton reply = QMessageBox::question(
        this, "Подтвердите удаление", "Вы уверены, что хотите удалить эту запись?",
        QMessageBox::Yes | QMessageBox::No
        );

    if (reply == QMessageBox::Yes) {
        QSqlQuery query;
        query.prepare("DELETE FROM diary_entries WHERE id = :id");
        query.bindValue(":id", idStr.toInt());

        if (!query.exec()) {
            QMessageBox::critical(this, "Ошибка", "Не удалось удалить запись: " + query.lastError().text());
            return;
        }

        ui->diaryList->removeRow(row);
        buildSugarChart(); // обновить график
    }
}
