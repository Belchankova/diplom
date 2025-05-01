#pragma once

#include <QWidget>

namespace Ui {
    class LessonWidget;
}

class LessonWidget : public QWidget {
    Q_OBJECT
    Ui::LessonWidget *ui;

public:
    explicit LessonWidget(const QString& filePath, QWidget *parent = nullptr);
    ~LessonWidget();

private:
    void loadData(const QString& filePath);

private slots:
    void onBackButtonClicked();

signals:
    void backButtonClicked();
};
