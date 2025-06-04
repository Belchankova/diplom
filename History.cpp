#include "History.h"
#include "ui_History.h"
#include "LoginWindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QTableWidgetItem>
#include <QDebug>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChart>
#include <QtCharts/QValueAxis>
#include <QtCharts/QDateTimeAxis>
#include <QDateTime>

//QT_CHARTS_USE_NAMESPACE

History::History(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::History)
{
    ui->setupUi(this);

    // Настройка таблицы
    ui->diaryList->setColumnCount(5);
    ui->diaryList->setHorizontalHeaderLabels({"Дата", "Сахар", "ХЕ", "Инсулин", "Еда"});
    ui->diaryList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->diaryList->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->diaryList->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->diaryList->horizontalHeader()->setStretchLastSection(true);
    ui->diaryList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    loadHistory();
}

History::~History()
{
    delete ui;
}

void History::loadHistory()
{
    QString username = LoginWindow::currentUsername();
    QSqlQuery userQuery;
    userQuery.prepare("SELECT id FROM users WHERE username = :username");
    userQuery.bindValue(":username", username);
    if (!userQuery.exec() || !userQuery.next()) {
        qDebug() << "Не удалось найти ID пользователя.";
        return;
    }
    int userId = userQuery.value(0).toInt();

    QSqlQuery query;
    query.prepare("SELECT created_at, sugar, he, insulin, food "
                  "FROM diary_entries WHERE user_id = :user_id ORDER BY created_at DESC");
    query.bindValue(":user_id", userId);
    query.exec();

    ui->diaryList->setRowCount(0);

    int row = 0;
    while (query.next()) {
        ui->diaryList->insertRow(row);
        for (int col = 0; col < 5; ++col) {
            QString raw = query.value(col).toString();
            if (col == 0) {
                // Парсим ISO-строку в QDateTime
                QDateTime dt = QDateTime::fromString(raw, Qt::ISODate);
                // И выводим в формате "дд.ММ.гггг ЧЧ:мм"
                raw = dt.toString("dd.MM.yyyy HH:mm");
            }
            ui->diaryList->setItem(row, col, new QTableWidgetItem(raw));
        }
        ++row;
    }

    ui->diaryList->resizeColumnsToContents();
    buildSugarChart(userId);
}

void History::reload()
{
    loadHistory();
}

void History::buildSugarChart(int userId)
{
    QLineSeries *series = new QLineSeries();

    QSqlQuery query;
    query.prepare("SELECT created_at, sugar FROM diary_entries WHERE user_id = :user_id ORDER BY created_at ASC");
    query.bindValue(":user_id", userId);
    query.exec();

    while (query.next()) {
        QDateTime timestamp = QDateTime::fromString(query.value(0).toString(), Qt::ISODate);
        double sugar = query.value(1).toDouble();

        if (sugar > 0.0) { // исключаем нули
            series->append(timestamp.toMSecsSinceEpoch(), sugar);
        }
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
    axisY->setRange(0.0, axisY->max()); // минимальное значение — 0.0
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);
}
