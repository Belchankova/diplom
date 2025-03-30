/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *diary;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QWidget *sugar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *he;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *insulin;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QWidget *food;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *history;
    QWidget *teory;
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget_2;
    QWidget *mainTab;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_9;
    QGridLayout *gridLayout;
    QPushButton *teoryGipoButton;
    QPushButton *teoryZrenieButton;
    QPushButton *teorySportButton;
    QPushButton *teoryHistButton;
    QPushButton *teoryHEButton;
    QPushButton *teoryGiperButton;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_11;
    QWidget *widget_2;
    QSpacerItem *horizontalSpacer_12;
    QWidget *histTab;
    QVBoxLayout *verticalLayout_7;
    QTextEdit *textEdit_2;
    QPushButton *histBackButton;
    QWidget *heTab;
    QVBoxLayout *verticalLayout_9;
    QTextEdit *textEdit_3;
    QPushButton *heBackButton;
    QWidget *gipoTab;
    QVBoxLayout *verticalLayout_10;
    QTextEdit *textEdit_4;
    QPushButton *gipoBackButton;
    QWidget *giperTab;
    QVBoxLayout *verticalLayout_11;
    QTextEdit *textEdit_5;
    QPushButton *giperBackButton;
    QWidget *glazaTab;
    QVBoxLayout *verticalLayout_12;
    QTextEdit *textEdit_6;
    QPushButton *zrenieBackButton;
    QWidget *sportTab;
    QVBoxLayout *verticalLayout_13;
    QTextEdit *textEdit_7;
    QPushButton *sportBackButton;
    QWidget *profile;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout;
    QPushButton *diaryButton;
    QPushButton *historyButton;
    QPushButton *teoryButton;
    QPushButton *profileButton;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(413, 961);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(320, 480));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix3/free-icon-squirrel-1864480.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(412, 915));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 109, 168);\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(391, 751));
        tabWidget->setStyleSheet(QString::fromUtf8("border-color: rgba(191, 64, 64, 0);"));
        diary = new QWidget();
        diary->setObjectName("diary");
        verticalLayout_8 = new QVBoxLayout(diary);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_2 = new QSpacerItem(198, 228, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        sugar = new QWidget(diary);
        sugar->setObjectName("sugar");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sugar->sizePolicy().hasHeightForWidth());
        sugar->setSizePolicy(sizePolicy1);
        sugar->setMinimumSize(QSize(359, 40));
        sugar->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);\n"
"border-radius: 20px;"));
        layoutWidget = new QWidget(sugar);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 331, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(25);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout_2->addWidget(sugar);

        he = new QWidget(diary);
        he->setObjectName("he");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(he->sizePolicy().hasHeightForWidth());
        he->setSizePolicy(sizePolicy2);
        he->setMinimumSize(QSize(359, 40));
        he->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);\n"
"border-radius: 20px;"));
        layoutWidget1 = new QWidget(he);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 10, 331, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(47);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName("lineEdit_2");
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout_2->addWidget(he);

        insulin = new QWidget(diary);
        insulin->setObjectName("insulin");
        sizePolicy2.setHeightForWidth(insulin->sizePolicy().hasHeightForWidth());
        insulin->setSizePolicy(sizePolicy2);
        insulin->setMinimumSize(QSize(359, 40));
        insulin->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);\n"
"border-radius: 20px;"));
        layoutWidget2 = new QWidget(insulin);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 10, 331, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget2);
        lineEdit_3->setObjectName("lineEdit_3");
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(lineEdit_3);


        verticalLayout_2->addWidget(insulin);

        food = new QWidget(diary);
        food->setObjectName("food");
        sizePolicy2.setHeightForWidth(food->sizePolicy().hasHeightForWidth());
        food->setSizePolicy(sizePolicy2);
        food->setMinimumSize(QSize(359, 80));
        food->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);\n"
"border-radius: 20px;"));
        layoutWidget3 = new QWidget(food);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 9, 331, 61));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setSpacing(40);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        textEdit = new QTextEdit(layoutWidget3);
        textEdit->setObjectName("textEdit");
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMinimumSize(QSize(264, 55));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"  border-radius: 0px;"));

        horizontalLayout_5->addWidget(textEdit);


        verticalLayout_2->addWidget(food);


        horizontalLayout_9->addLayout(verticalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        saveButton = new QPushButton(diary);
        saveButton->setObjectName("saveButton");
        sizePolicy1.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy1);
        saveButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.373848, y1:0.648, x2:0.384, y2:1, stop:0 rgba(192, 191, 188, 255), stop:1 rgba(116, 106, 106, 255));\n"
""));

        horizontalLayout_6->addWidget(saveButton);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_3 = new QSpacerItem(70, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        widget = new QWidget(diary);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(100);
        sizePolicy3.setVerticalStretch(100);
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);
        widget->setMinimumSize(QSize(200, 200));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/IMG_2185.PNG);"));

        horizontalLayout_7->addWidget(widget);

        horizontalSpacer_4 = new QSpacerItem(90, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);


        verticalLayout_8->addLayout(verticalLayout_3);

        tabWidget->addTab(diary, QString());
        history = new QWidget();
        history->setObjectName("history");
        tabWidget->addTab(history, QString());
        teory = new QWidget();
        teory->setObjectName("teory");
        verticalLayout_6 = new QVBoxLayout(teory);
        verticalLayout_6->setObjectName("verticalLayout_6");
        tabWidget_2 = new QTabWidget(teory);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setStyleSheet(QString::fromUtf8("border-color: rgba(191, 64, 64, 0);\n"
"border-radius: 10px;"));
        mainTab = new QWidget();
        mainTab->setObjectName("mainTab");
        verticalLayout_4 = new QVBoxLayout(mainTab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_4);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        teoryGipoButton = new QPushButton(mainTab);
        teoryGipoButton->setObjectName("teoryGipoButton");
        sizePolicy1.setHeightForWidth(teoryGipoButton->sizePolicy().hasHeightForWidth());
        teoryGipoButton->setSizePolicy(sizePolicy1);
        teoryGipoButton->setMinimumSize(QSize(150, 150));
        teoryGipoButton->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix2/gipo.PNG);"));

        gridLayout->addWidget(teoryGipoButton, 1, 0, 1, 1);

        teoryZrenieButton = new QPushButton(mainTab);
        teoryZrenieButton->setObjectName("teoryZrenieButton");
        sizePolicy1.setHeightForWidth(teoryZrenieButton->sizePolicy().hasHeightForWidth());
        teoryZrenieButton->setSizePolicy(sizePolicy1);
        teoryZrenieButton->setMinimumSize(QSize(150, 150));
        teoryZrenieButton->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix2/glaza.PNG);"));

        gridLayout->addWidget(teoryZrenieButton, 2, 0, 1, 1);

        teorySportButton = new QPushButton(mainTab);
        teorySportButton->setObjectName("teorySportButton");
        sizePolicy1.setHeightForWidth(teorySportButton->sizePolicy().hasHeightForWidth());
        teorySportButton->setSizePolicy(sizePolicy1);
        teorySportButton->setMinimumSize(QSize(150, 150));
        teorySportButton->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix2/sport.PNG);"));

        gridLayout->addWidget(teorySportButton, 2, 1, 1, 1);

        teoryHistButton = new QPushButton(mainTab);
        teoryHistButton->setObjectName("teoryHistButton");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(200);
        sizePolicy4.setVerticalStretch(200);
        sizePolicy4.setHeightForWidth(teoryHistButton->sizePolicy().hasHeightForWidth());
        teoryHistButton->setSizePolicy(sizePolicy4);
        teoryHistButton->setMinimumSize(QSize(150, 150));
        teoryHistButton->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix2/hist.PNG);\n"
""));

        gridLayout->addWidget(teoryHistButton, 0, 0, 1, 1);

        teoryHEButton = new QPushButton(mainTab);
        teoryHEButton->setObjectName("teoryHEButton");
        sizePolicy4.setHeightForWidth(teoryHEButton->sizePolicy().hasHeightForWidth());
        teoryHEButton->setSizePolicy(sizePolicy4);
        teoryHEButton->setMinimumSize(QSize(150, 150));
        teoryHEButton->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix2/hleb.PNG);"));

        gridLayout->addWidget(teoryHEButton, 0, 1, 1, 1);

        teoryGiperButton = new QPushButton(mainTab);
        teoryGiperButton->setObjectName("teoryGiperButton");
        sizePolicy1.setHeightForWidth(teoryGiperButton->sizePolicy().hasHeightForWidth());
        teoryGiperButton->setSizePolicy(sizePolicy1);
        teoryGiperButton->setMinimumSize(QSize(150, 150));
        teoryGiperButton->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix2/giper.PNG);"));

        gridLayout->addWidget(teoryGiperButton, 1, 1, 1, 1);


        horizontalLayout_11->addLayout(gridLayout);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalSpacer_11 = new QSpacerItem(70, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);

        widget_2 = new QWidget(mainTab);
        widget_2->setObjectName("widget_2");
        sizePolicy4.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy4);
        widget_2->setMinimumSize(QSize(200, 200));
        widget_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/IMG_2185.PNG);"));

        horizontalLayout_12->addWidget(widget_2);

        horizontalSpacer_12 = new QSpacerItem(90, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);


        verticalLayout_4->addLayout(horizontalLayout_12);

        tabWidget_2->addTab(mainTab, QString());
        histTab = new QWidget();
        histTab->setObjectName("histTab");
        verticalLayout_7 = new QVBoxLayout(histTab);
        verticalLayout_7->setObjectName("verticalLayout_7");
        textEdit_2 = new QTextEdit(histTab);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));
        textEdit_2->setReadOnly(true);
        textEdit_2->setOverwriteMode(true);

        verticalLayout_7->addWidget(textEdit_2);

        histBackButton = new QPushButton(histTab);
        histBackButton->setObjectName("histBackButton");
        sizePolicy1.setHeightForWidth(histBackButton->sizePolicy().hasHeightForWidth());
        histBackButton->setSizePolicy(sizePolicy1);
        histBackButton->setMinimumSize(QSize(50, 20));
        histBackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 0);"));

        verticalLayout_7->addWidget(histBackButton);

        tabWidget_2->addTab(histTab, QString());
        heTab = new QWidget();
        heTab->setObjectName("heTab");
        verticalLayout_9 = new QVBoxLayout(heTab);
        verticalLayout_9->setObjectName("verticalLayout_9");
        textEdit_3 = new QTextEdit(heTab);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));
        textEdit_3->setReadOnly(true);

        verticalLayout_9->addWidget(textEdit_3);

        heBackButton = new QPushButton(heTab);
        heBackButton->setObjectName("heBackButton");
        sizePolicy1.setHeightForWidth(heBackButton->sizePolicy().hasHeightForWidth());
        heBackButton->setSizePolicy(sizePolicy1);
        heBackButton->setMinimumSize(QSize(50, 20));
        heBackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 0);"));

        verticalLayout_9->addWidget(heBackButton);

        tabWidget_2->addTab(heTab, QString());
        gipoTab = new QWidget();
        gipoTab->setObjectName("gipoTab");
        verticalLayout_10 = new QVBoxLayout(gipoTab);
        verticalLayout_10->setObjectName("verticalLayout_10");
        textEdit_4 = new QTextEdit(gipoTab);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));
        textEdit_4->setReadOnly(true);

        verticalLayout_10->addWidget(textEdit_4);

        gipoBackButton = new QPushButton(gipoTab);
        gipoBackButton->setObjectName("gipoBackButton");
        sizePolicy1.setHeightForWidth(gipoBackButton->sizePolicy().hasHeightForWidth());
        gipoBackButton->setSizePolicy(sizePolicy1);
        gipoBackButton->setMinimumSize(QSize(50, 20));
        gipoBackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 0);"));

        verticalLayout_10->addWidget(gipoBackButton);

        tabWidget_2->addTab(gipoTab, QString());
        giperTab = new QWidget();
        giperTab->setObjectName("giperTab");
        verticalLayout_11 = new QVBoxLayout(giperTab);
        verticalLayout_11->setObjectName("verticalLayout_11");
        textEdit_5 = new QTextEdit(giperTab);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));
        textEdit_5->setReadOnly(true);

        verticalLayout_11->addWidget(textEdit_5);

        giperBackButton = new QPushButton(giperTab);
        giperBackButton->setObjectName("giperBackButton");
        sizePolicy1.setHeightForWidth(giperBackButton->sizePolicy().hasHeightForWidth());
        giperBackButton->setSizePolicy(sizePolicy1);
        giperBackButton->setMinimumSize(QSize(50, 20));
        giperBackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 0);"));

        verticalLayout_11->addWidget(giperBackButton);

        tabWidget_2->addTab(giperTab, QString());
        glazaTab = new QWidget();
        glazaTab->setObjectName("glazaTab");
        verticalLayout_12 = new QVBoxLayout(glazaTab);
        verticalLayout_12->setObjectName("verticalLayout_12");
        textEdit_6 = new QTextEdit(glazaTab);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));
        textEdit_6->setReadOnly(true);

        verticalLayout_12->addWidget(textEdit_6);

        zrenieBackButton = new QPushButton(glazaTab);
        zrenieBackButton->setObjectName("zrenieBackButton");
        sizePolicy1.setHeightForWidth(zrenieBackButton->sizePolicy().hasHeightForWidth());
        zrenieBackButton->setSizePolicy(sizePolicy1);
        zrenieBackButton->setMinimumSize(QSize(50, 20));
        zrenieBackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 0);"));

        verticalLayout_12->addWidget(zrenieBackButton);

        tabWidget_2->addTab(glazaTab, QString());
        sportTab = new QWidget();
        sportTab->setObjectName("sportTab");
        verticalLayout_13 = new QVBoxLayout(sportTab);
        verticalLayout_13->setObjectName("verticalLayout_13");
        textEdit_7 = new QTextEdit(sportTab);
        textEdit_7->setObjectName("textEdit_7");
        textEdit_7->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));
        textEdit_7->setReadOnly(true);

        verticalLayout_13->addWidget(textEdit_7);

        sportBackButton = new QPushButton(sportTab);
        sportBackButton->setObjectName("sportBackButton");
        sizePolicy1.setHeightForWidth(sportBackButton->sizePolicy().hasHeightForWidth());
        sportBackButton->setSizePolicy(sizePolicy1);
        sportBackButton->setMinimumSize(QSize(50, 20));
        sportBackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 120, 0);"));

        verticalLayout_13->addWidget(sportBackButton);

        tabWidget_2->addTab(sportTab, QString());

        verticalLayout_6->addWidget(tabWidget_2);

        tabWidget->addTab(teory, QString());
        profile = new QWidget();
        profile->setObjectName("profile");
        tabWidget->addTab(profile, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_8 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        diaryButton = new QPushButton(centralwidget);
        diaryButton->setObjectName("diaryButton");
        diaryButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(diaryButton->sizePolicy().hasHeightForWidth());
        diaryButton->setSizePolicy(sizePolicy1);
        diaryButton->setMinimumSize(QSize(90, 41));
        diaryButton->setBaseSize(QSize(90, 41));
        diaryButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 120, 0);\n"
"QPushButton::hover {\n"
"	background-color: rgb(255, 163, 72);};\n"
"QPushButton :: pressed {\n"
"	background-color: rgb(230, 97, 0);\n"
"};\n"
"border-color: none;\n"
""));

        horizontalLayout->addWidget(diaryButton);

        historyButton = new QPushButton(centralwidget);
        historyButton->setObjectName("historyButton");
        sizePolicy1.setHeightForWidth(historyButton->sizePolicy().hasHeightForWidth());
        historyButton->setSizePolicy(sizePolicy1);
        historyButton->setMinimumSize(QSize(90, 41));
        historyButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 120, 0);\n"
"QPushButton::hover {\n"
"	background-color: rgb(255, 163, 72);};\n"
"QPushButton :: pressed {\n"
"	background-color: rgb(230, 97, 0);\n"
"};\n"
"border-color: none;"));

        horizontalLayout->addWidget(historyButton);

        teoryButton = new QPushButton(centralwidget);
        teoryButton->setObjectName("teoryButton");
        sizePolicy1.setHeightForWidth(teoryButton->sizePolicy().hasHeightForWidth());
        teoryButton->setSizePolicy(sizePolicy1);
        teoryButton->setMinimumSize(QSize(90, 41));
        teoryButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 120, 0);\n"
"QPushButton::hover {\n"
"	background-color: rgb(255, 163, 72);};\n"
"QPushButton :: pressed {\n"
"	background-color: rgb(230, 97, 0);\n"
"};\n"
"border-color: none;"));

        horizontalLayout->addWidget(teoryButton);

        profileButton = new QPushButton(centralwidget);
        profileButton->setObjectName("profileButton");
        sizePolicy1.setHeightForWidth(profileButton->sizePolicy().hasHeightForWidth());
        profileButton->setSizePolicy(sizePolicy1);
        profileButton->setMinimumSize(QSize(90, 41));
        profileButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 120, 0);\n"
"QPushButton::hover {\n"
"	background-color: rgb(255, 163, 72);};\n"
"QPushButton :: pressed {\n"
"	background-color: rgb(230, 97, 0);\n"
"};\n"
"border-color: none;"));

        horizontalLayout->addWidget(profileButton);


        horizontalLayout_10->addLayout(horizontalLayout);

        horizontalSpacer_7 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 413, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DiaBelka", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\260\321\205\320\260\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\245\320\225", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\201\321\203\320\273\320\270\320\275", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\225\320\264\320\260", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(diary), QCoreApplication::translate("MainWindow", "\320\224\320\275\320\265\320\262\320\275\320\270\320\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(history), QCoreApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217", nullptr));
        teoryGipoButton->setText(QString());
        teoryZrenieButton->setText(QString());
        teorySportButton->setText(QString());
        teoryHistButton->setText(QString());
        teoryHEButton->setText(QString());
        teoryGiperButton->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(mainTab), QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\264\320\265\320\273\321\213", nullptr));
        textEdit_2->setMarkdown(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\272 \321\201\320\262\320\270\320\264\320\265\321\202\320\265\320\273\321\214\321\201\321\202\320\262\321\203\320\265\321\202 \321\200\321\203\320\272\320\276\320\277\320\270\321\201\320\270 \320\264\321\200\320\265\320\262\320\275\320\270\321\205 \320\265\320\263\320\270\320\277\321\202\321\217\320\275 \320\270 \320\277\321\200\320\265\320\264\320\260\320\275\320\270\321\217 \320\263\321\200\320\265\320\272\320\276\320\262 \320\270 \321\200\320\270\320\274\320\273\321\217\320\275, \320\276\n"
"\321\201\320\260\321\205\320\260\321\200\320\275\320\276\320\274 \320\264\320\270\320\260\320\261\320\265\321\202\320\265 \320\261\321\213\320\273\320\276 \320\270\320\267\320\262\320\265\321\201\321\202\320\275\320\276 \320\261\320\276\320\273\320\265\320\265 3000 \320\273\320\265\321\202 \320\275\320\260\320\267\320\260\320\264. \320\225\321\211\321\221 \321\202\320\276\320\263\320\264\320\260 \320\262\321\200\320\260\321\207\320\270 \320\267\320\260\320\274\320\265\321\202\320\270\320\273\320\270,"
                        "\n"
"\321\207\321\202\320\276 \320\265\321\201\321\202\321\214 \320\273\321\216\320\264\320\270, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\262\320\275\320\265\320\267\320\260\320\277\320\275\320\276 \320\276\321\207\320\265\320\275\321\214 \320\261\321\213\321\201\321\202\321\200\320\276 \321\205\321\203\320\264\320\265\321\216\321\202, \321\201\320\273\320\260\320\261\320\265\321\216\321\202, \321\207\320\260\321\201\321\202\320\276 \320\274\320\276\321\207\320\260\321\202\321\201\321\217. \320\230,\n"
"\320\275\320\265\321\201\320\274\320\276\321\202\321\200\321\217 \320\275\320\260 \321\202\320\276, \321\207\321\202\320\276 \320\276\320\275\320\270 \320\276\321\207\320\265\320\275\321\214 \320\274\320\275\320\276\320\263\320\276 \320\277\321\214\321\216\321\202, \320\276\320\275\320\270 \320\261\321\213\321\201\321\202\321\200\320\276 \321\201\321\202\320\260\320\275\320\276\320\262\321\217\321\202\321\201\321\217 \320\262\321\213\321\201\320\276\321\205\321\210\320\270\320\265 \320\272\320"
                        "\260\320\272\n"
"\320\264\320\265\321\200\320\265\320\262\321\214\321\217.\n"
"\n"
"\320\242\320\260\320\272 \320\272\320\260\320\272 \321\200\320\260\320\275\321\214\321\210\320\265 \320\265\321\211\321\221 \320\275\320\265 \320\261\321\213\320\273\320\276 \320\261\320\276\320\273\321\214\320\275\320\270\321\206 \320\270 \320\274\320\275\320\276\320\263\320\270\321\205 \320\261\320\276\320\273\321\214\320\275\321\213\321\205 \320\273\320\265\321\207\320\270\320\273\320\270 \320\261\321\200\320\276\320\264\321\217\321\207\320\270\320\265 \320\273\320\265\320\272\320\260\321\200\320\270 \320\277\320\276\320\264\n"
"\320\276\321\202\320\272\321\200\321\213\321\202\321\213\320\274 \320\275\320\265\320\261\320\276\320\274 \320\275\320\260 \321\200\321\213\320\275\320\276\321\207\320\275\320\276\320\271 \320\277\320\273\320\276\321\211\320\260\320\264\320\270, \320\264\321\200\320\265\320\262\320\275\320\270\320\265 \320\262\321\200\320\260\321\207\320\265\320\262\320\260\321\202\320\265\320\273\320\270 \320\267\320"
                        "\260\320\274\320\265\321\202\320\270\320\273\320\270, \321\207\321\202\320\276 \320\275\320\260\320\264 \320\274\320\276\321\207\320\276\320\271\n"
"\320\261\320\276\320\273\321\214\320\275\321\213\321\205 \320\264\320\270\320\260\320\261\320\265\321\202\320\276\320\274 \320\273\320\265\321\202\320\260\320\265\321\202 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\276 \320\274\321\203\321\205 \320\270 \320\276\321\201. \321\200\320\260\320\275\321\214\321\210\320\265 \321\206\320\265\320\273\320\270\321\202\320\265\320\273\320\270 \320\262 \320\277\320\265\321\200\320\262\321\203\321\216 \320\276\321\207\320\265\321\200\320\265\320\264\321\214 \320\277\320\276\n"
"\320\274\320\276\321\207\320\265 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\321\217\320\273\320\270 \321\207\320\265\320\274 \320\261\320\276\320\273\320\265\320\275 \321\207\320\265\320\273\320\276\320\262\320\265\320\272. \320\222\320\276\321\202 \320\270 \320\276\320\261\321\201\320\273\320\265\320\264\321\203\321"
                        "\217 \321\215\321\202\320\270\321\205 \320\261\320\276\320\273\321\214\320\275\321\213\321\205: \320\276\320\275\320\270 \320\277\321\200\320\276\320\261\320\276\320\262\320\260\320\273\320\270\n"
"\320\274\320\276\321\207\321\203 \320\275\320\260 \320\262\320\272\321\203\321\201. \320\220 \320\277\320\276\321\201\320\272\320\276\320\273\321\214\320\272\321\203 \320\274\320\276\321\207\320\260 \320\276\320\272\320\260\320\267\321\213\320\262\320\260\320\273\320\260\321\201\321\214 \321\201\320\273\320\260\320\264\320\272\320\276\320\271, \320\276\320\275\320\270 \320\275\320\260\320\267\320\262\320\260\320\273\320\270 \321\215\321\202\321\203 \320\261\320\276\320\273\320\265\320\267\320\275\321\214\n"
"\"Diabetes mellitus\", \321\207\321\202\320\276 \320\276\320\267\320\275\320\260\321\207\320\260\320\273\320\276 \"\321\201\320\273\320\260\320\264\320\272\320\270\320\271 \320\272\320\260\320\272 \320\274\321\221\320\264 \320\277\321\200\320\276\321\202\320\276\320\272\". \320\235\320\276 \321\202\320\276\320\263"
                        "\320\264\320\260 \320\265\321\211\321\221 \320\275\320\265\n"
"\320\261\321\213\320\273\320\276 \320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276\321\201\321\202\320\270 \320\273\320\265\321\207\320\270\321\202\321\214 \321\215\321\202\321\203 \320\261\320\276\320\273\320\265\320\267\320\275\321\214. \n"
"\n"
"\320\224\320\276 1922 \320\263\320\276\320\264\320\260 \321\203 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\276\320\267\320\260\320\262\320\270\321\201\320\270\320\274\321\213\321\205 \320\264\320\270\320\260\320\261\320\265\321\202\320\270\320\272\320\276\320\262 \320\275\320\265 \320\261\321\213\320\273\320\276 \321\210\320\260\320\275\321\201\320\276\320\262 \320\262\321\213\320\266\320\270\321\202\321\214. \320\233\320\270\321\210\321\214 \320\276\321\201\320\265\320\275\321\214\321\216\n"
"1921 \320\263\320\276\320\264\320\260 \320\262 \320\242\320\276\321\200\320\276\320\275\321\202\320\276 (\320\232\320\260\320\275\320\260\320\264\320\260) \320\274\320\276\320\273\320"
                        "\276\320\264\320\276\320\271 \320\262\321\200\320\260\321\207 \320\270 \321\201\321\202\321\203\320\264\320\265\320\275\321\202 \320\274\320\265\320\264\320\270\321\206\320\270\320\275\321\201\320\272\320\276\320\263\320\276 \320\270\320\275\321\201\321\202\320\270\321\202\321\203\321\202\320\260\n"
"(\320\264\320\276\320\272\321\202\320\276\321\200\320\260 \320\221\321\215\321\201\321\202 \320\270 \320\221\320\260\320\275\321\202\320\270\320\275\320\263) \321\201\321\202\320\260\320\273\320\270 \320\272\320\276\320\273\320\276\321\202\321\214 \321\201\320\276\320\261\320\260\320\272\320\265 \320\277\320\276 \320\272\320\273\320\270\321\207\320\272\320\265 \320\227\320\270\320\267\320\270 (\320\241\321\214\321\216\320\267\320\270) \320\262\320\265\321\211\320\265\321\201\321\202\320\262\320\276,\n"
"\320\272\320\276\321\202\320\276\321\200\320\276\320\265 \320\264\320\276\320\261\321\213\320\262\320\260\320\273\320\270 \320\270\320\267 \320\277\320\276\320\264\320\266\320\265\320\273\321\203\320\264\320\276\321"
                        "\207\320\275\320\276\320\271 \320\266\320\265\320\273\320\265\320\267\321\213 \321\202\320\265\320\273\321\217\321\202, \320\275\320\260\320\267\320\262\320\260\320\275\320\275\321\213\320\271 \320\270\320\274\320\270 \320\277\320\276\320\267\320\266\320\265 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\276\320\274.\n"
"\320\241\321\214\321\216\320\267\320\270 \321\203\320\264\320\260\320\273\320\270\320\273\320\270 \320\277\320\276\320\264\320\266\320\265\320\273\321\203\320\264\320\276\321\207\320\275\321\203\321\216 \320\266\320\265\320\273\320\265\320\267\321\203, \320\270 \320\276\320\275\320\260 \320\267\320\260\320\261\320\276\320\273\320\265\320\273\320\260 \320\264\320\270\320\260\320\261\320\265\321\202\320\276\320\274. \321\202\320\260\320\272 \320\272\320\260\320\272 \320\262\320\265\321\211\320\265\321\201\321\202\320\262\320\276,\n"
"\320\275\320\260\320\267\321\213\320\262\320\260\320\265\320\274\320\276\320\265 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\276\320\274"
                        ", \320\277\320\276\320\275\320\270\320\266\320\260\320\273\320\276 \321\203 \320\241\321\214\321\216\320\267\320\270 \321\201\320\260\321\205\320\260\321\200 \320\262 \320\272\321\200\320\276\320\262\320\270, \320\270\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\321\202\320\265\320\273\320\270 \320\276\321\202\320\262\320\260\320\266\320\270\320\273\320\270\321\201\321\214\n"
"\320\262 \321\217\320\275\320\262\320\260\321\200\320\265 1922 \320\263\320\276\320\264\320\260 \320\270\321\201\320\277\321\200\320\276\320\261\320\276\320\262\320\260\321\202\321\214 \321\215\321\202\320\276\321\202 \320\274\320\265\321\202\320\276\320\264 \320\275\320\260 14-\320\273\320\265\321\202\320\275\320\265\320\274 \320\274\320\260\320\273\321\214\321\207\320\270\320\272\320\265 \320\233\320\265\320\276\320\275\320\260\321\200\320\264\320\265\n"
"\320\242\320\276\320\274\321\201\320\276\320\275\320\265, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\276\321\207\320\265\320\275\321\214 \321\201"
                        "\320\270\320\273\321\214\320\275\320\276 \320\277\320\276\321\205\321\203\320\264\320\265\320\273 \320\270 \320\262\321\213\321\201\320\276\321\205, \320\262\321\201\320\265 \320\264\321\203\320\274\320\260\320\273\320\270, \321\207\321\202\320\276 \320\276\320\275 \321\201\320\272\320\276\321\200\320\276 \321\203\320\274\321\200\321\221\321\202.\n"
"\320\221\320\273\320\260\320\263\320\276\320\264\320\260\321\200\321\217 \320\262\320\262\320\265\320\264\321\221\320\275\320\275\320\276\320\274\321\203 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\321\203, \320\264\320\276\320\261\321\213\321\202\320\276\320\274\321\203 \320\270\320\267 \320\277\320\276\320\264\320\266\320\265\320\273\321\203\320\264\320\276\321\207\320\275\320\276\320\271 \320\266\320\265\320\273\320\265\320\267\321\213 \320\261\321\213\320\272\320\260, \320\274\320\260\320\273\321\214\321\207\320\270\320\272\n"
"\320\262\321\213\320\266\320\270\320\273 \320\270 \321\207\320\265\321\200\320\265\320\267 \320\275\320\265\320\272\321\202"
                        "\320\276\321\200\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 \321\201\321\202\320\260\320\273 \320\275\320\260\320\261\320\270\321\200\320\260\321\202\321\214 \320\262 \320\262\320\265\321\201\320\265. \320\243\321\201\320\277\320\265\321\210\320\275\320\276\320\265 \320\273\320\265\321\207\320\265\320\275\320\270\320\265 \320\264\320\270\320\260\320\261\320\265\321\202\320\260 \320\277\321\200\320\270\n"
"\320\277\320\276\320\274\320\276\321\211\320\270 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\260 \320\261\321\213\320\273\320\276 \321\201\320\265\320\275\321\201\320\260\321\206\320\270\320\265\320\271 \320\262 \320\274\320\265\320\264\320\270\321\206\320\270\320\275\320\265, \320\262\321\201\320\272\320\276\321\200\320\265 \321\215\321\202\320\276 \321\201\321\202\320\260\320\273\320\276 \320\270\320\267\320\262\320\265\321\201\321\202\320\275\320\276 \320\262\320\276 \320\262\321\201\321\221\320\274\n"
"\320\274\320\270\321\200\320\265 \320\270 \320\277\320\276\320\274\320\276"
                        "\320\263\320\260\320\273\320\276 \320\262\321\213\320\266\320\270\320\262\320\260\321\202\321\214 \320\261\320\276\320\273\321\214\320\275\321\213\320\274 \320\264\320\270\320\260\320\261\320\265\321\202\320\276\320\274.\n"
"\n"
"\320\242\320\276\320\273\321\214\320\272\320\276 \320\262 1936 \320\263\320\276\320\264\321\203 \320\245\320\260\320\263\320\265\320\264\320\276\321\200\320\275\320\276\320\274 \320\261\321\213\320\273 \320\270\320\267\320\276\320\261\321\200\320\265\321\202\321\221\320\275 \320\277\320\265\321\200\320\262\321\213\320\271 \320\261\320\260\320\267\320\260\320\273\321\214\320\275\321\213\320\271 \320\270\320\275\321\201\321\203\320\273\320\270\320\275. \320\222 1941\n"
"\320\263\320\276\320\264\321\203 \321\204\320\270\321\200\320\274\320\260 \320\220\320\274\320\265\321\201 \321\201\321\202\320\260\320\273\320\260 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\321\214 \320\277\320\265\321\200\320\262\321\213\320\265 \321\202\320\265\321\201\321\202-\320"
                        "\277\320\276\320\273\320\276\321\201\320\272\320\270 \320\264\320\273\321\217 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217 \321\201\320\260\321\205\320\260\321\200\320\260 \320\262\n"
"\320\274\320\276\321\207\320\265. \320\230 \320\273\320\270\321\210\321\214 \321\207\320\265\321\200\320\265\320\267 20 \320\273\320\265\321\202 \321\215\321\202\320\260 \320\266\320\265 \321\204\320\270\321\200\320\274\320\260 \320\275\320\260\321\207\320\260\320\273\320\260 \320\262\321\213\320\277\321\203\321\201\320\272\320\260\321\202\321\214 \320\277\320\265\321\200\320\262\321\213\320\265 \321\202\320\265\321\201\321\202-\320\277\320\276\320\273\320\276\321\201\320\272\320\270 \320\264\320\273\321\217\n"
"\320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217 \321\201\320\260\321\205\320\260\321\200\320\260 \320\262 \320\272\321\200\320\276\320\262\320\270 (1964)\n"
"\n"
"\320\241 1982 \320\263\320\276\320\264\320\260, \320\275\320\260\321\200\321\217\320\264\321\203 \321\201 "
                        "\320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\276\320\274, \320\264\320\276\320\261\321\213\320\262\320\260\320\265\320\274\321\213\320\274 \320\270\320\267 \320\277\320\276\320\264\320\266\320\265\320\273\321\203\320\264\320\276\321\207\320\275\320\276\320\271 \320\266\320\265\320\273\320\265\320\267\321\213 \320\266\320\270\320\262\320\276\321\202\320\275\321\213\321\205,\n"
"\321\201\321\202\320\260\320\273 \320\264\320\276\321\201\321\202\321\203\320\277\320\265\320\275 \321\202\320\260\320\272\320\266\320\265 \320\263\320\265\320\275\320\265\320\270\321\207\320\265\321\201\320\272\320\270 \321\201\320\270\320\275\321\202\320\265\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \321\207\320\265\320\273\320\276\320\262\320\265\321\207\320\265\321\201\320\272\320\270\320\271\n"
"\320\270\320\275\321\201\321\203\320\273\320\275(\321\205\321\203\320\274\320\260\320\275\320\270\320\275\321\201\321\203\320\273\320\270\320\275). \320\237\321\200\320\270 \320\277\320\276"
                        "\320\274\320\276\320\267\320\270 \320\261\320\260\320\272\321\202\320\265\321\200\320\270\320\271 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\321\217\321\202 \320\270\320\275\321\201\321\203\320\273\320\270\320\275 \320\270\320\273\320\270 \320\277\321\200\320\265\320\262\321\200\320\260\321\211\320\260\321\216\321\202\n"
"\321\201\320\262\320\270\320\275\320\276\320\271 \320\270\320\275\321\201\321\203\320\273\320\270\320\275 \320\262 \321\207\320\265\320\273\320\276\320\262\320\265\321\207\320\265\321\201\320\272\320\270\320\271).\n"
"\n"
"", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\232\320\260\320\272 \321\201\320\262\320\270\320\264\320\265\321\202\320\265\320\273\321\214\321\201\321\202\320\262\321\203\320\265\321\202 \321\200\321\203\320\272\320\276\320\277\320\270\321\201\320\270 \320\264\321\200\320\265\320\262\320\275\320\270\321\205 \320\265\320\263\320\270\320\277\321\202\321\217\320\275 \320\270 \320\277\321\200\320\265\320\264\320\260\320\275\320\270\321\217 \320"
                        "\263\321\200\320\265\320\272\320\276\320\262 \320\270 \321\200\320\270\320\274\320\273\321\217\320\275, \320\276 \321\201\320\260\321\205\320\260\321\200\320\275\320\276\320\274 \320\264\320\270\320\260\320\261\320\265\321\202\320\265 \320\261\321\213\320\273\320\276 \320\270\320\267\320\262\320\265\321\201\321\202\320\275\320\276 \320\261\320\276\320\273\320\265\320\265 3000 \320\273\320\265\321\202 \320\275\320\260\320\267\320\260\320\264. \320\225\321\211\321\221 \321\202\320\276\320\263\320\264\320\260 \320\262\321\200\320\260\321\207\320\270 \320\267\320\260\320\274\320\265\321\202\320\270\320\273\320\270, \321\207\321\202\320\276 \320\265\321\201\321\202\321\214 \320\273\321\216\320\264\320\270, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\262\320\275\320\265\320\267\320\260\320\277\320\275\320\276 \320\276\321\207\320\265\320\275\321\214 \320\261\321\213\321\201\321\202\321\200\320\276 \321\205\321\203\320\264\320\265\321\216\321\202, \321\201\320\273\320\260\320\261\320\265\321\216\321"
                        "\202, \321\207\320\260\321\201\321\202\320\276 \320\274\320\276\321\207\320\260\321\202\321\201\321\217. \320\230, \320\275\320\265\321\201\320\274\320\276\321\202\321\200\321\217 \320\275\320\260 \321\202\320\276, \321\207\321\202\320\276 \320\276\320\275\320\270 \320\276\321\207\320\265\320\275\321\214 \320\274\320\275\320\276\320\263\320\276 \320\277\321\214\321\216\321\202, \320\276\320\275\320\270 \320\261\321\213\321\201\321\202\321\200\320\276 \321\201\321\202\320\260\320\275\320\276\320\262\321\217\321\202\321\201\321\217 \320\262\321\213\321\201\320\276\321\205\321\210\320\270\320\265 \320\272\320\260\320\272 \320\264\320\265\321\200\320\265\320\262\321\214\321\217.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\242\320\260\320\272 \320\272\320\260\320\272 \321\200\320\260\320\275\321\214\321\210\320\265 \320\265\321\211\321\221 \320\275\320\265 \320\261\321\213\320\273\320\276 \320\261\320\276\320\273\321\214\320\275"
                        "\320\270\321\206 \320\270 \320\274\320\275\320\276\320\263\320\270\321\205 \320\261\320\276\320\273\321\214\320\275\321\213\321\205 \320\273\320\265\321\207\320\270\320\273\320\270 \320\261\321\200\320\276\320\264\321\217\321\207\320\270\320\265 \320\273\320\265\320\272\320\260\321\200\320\270 \320\277\320\276\320\264 \320\276\321\202\320\272\321\200\321\213\321\202\321\213\320\274 \320\275\320\265\320\261\320\276\320\274 \320\275\320\260 \321\200\321\213\320\275\320\276\321\207\320\275\320\276\320\271 \320\277\320\273\320\276\321\211\320\260\320\264\320\270, \320\264\321\200\320\265\320\262\320\275\320\270\320\265 \320\262\321\200\320\260\321\207\320\265\320\262\320\260\321\202\320\265\320\273\320\270 \320\267\320\260\320\274\320\265\321\202\320\270\320\273\320\270, \321\207\321\202\320\276 \320\275\320\260\320\264 \320\274\320\276\321\207\320\276\320\271 \320\261\320\276\320\273\321\214\320\275\321\213\321\205 \320\264\320\270\320\260\320\261\320\265\321\202\320\276\320\274 \320\273\320\265\321\202\320\260\320"
                        "\265\321\202 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\276 \320\274\321\203\321\205 \320\270 \320\276\321\201. \321\200\320\260\320\275\321\214\321\210\320\265 \321\206\320\265\320\273\320\270\321\202\320\265\320\273\320\270 \320\262 \320\277\320\265\321\200\320\262\321\203\321\216 \320\276\321\207\320\265\321\200\320\265\320\264\321\214 \320\277\320\276 \320\274\320\276\321\207\320\265 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\321\217\320\273\320\270 \321\207\320\265\320\274 \320\261\320\276\320\273\320\265\320\275 \321\207\320\265\320\273\320\276\320\262\320\265\320\272. \320\222\320\276\321\202 \320\270 \320\276\320\261\321\201\320\273\320\265\320\264\321\203\321\217 \321\215\321\202\320\270\321\205 \320\261\320\276\320\273\321\214\320\275\321\213\321\205: \320\276\320\275\320\270 \320\277\321\200\320\276\320\261\320\276\320\262\320\260\320\273\320\270 \320\274\320\276\321\207\321\203 \320\275\320\260 \320\262\320\272\321\203\321\201. \320\220 \320\277\320\276\321\201"
                        "\320\272\320\276\320\273\321\214\320\272\321\203 \320\274\320\276\321\207\320\260 \320\276\320\272\320\260\320\267\321\213\320\262\320\260\320\273\320\260\321\201\321\214 \321\201\320\273\320\260\320\264\320\272\320\276\320\271, \320\276\320\275\320\270 \320\275\320\260\320\267\320\262\320\260\320\273\320\270 \321\215\321\202\321\203 \320\261\320\276\320\273\320\265\320\267\320\275\321\214 &quot;Diabetes mellitus&quot;, \321\207\321\202\320\276 \320\276\320\267\320\275\320\260\321\207\320\260\320\273\320\276 &quot;\321\201\320\273\320\260\320\264\320\272\320\270\320\271 \320\272\320\260\320\272 \320\274\321\221\320\264 \320\277\321\200\320\276\321\202\320\276\320\272&quot;. \320\235\320\276 \321\202\320\276\320\263\320\264\320\260 \320\265\321\211\321\221 \320\275\320\265 \320\261\321\213\320\273\320\276 \320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276\321\201\321\202\320\270 \320\273\320\265\321\207\320\270\321\202\321\214 \321\215\321\202\321\203 \320\261\320\276\320\273\320\265\320\267\320\275"
                        "\321\214. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\224\320\276 1922 \320\263\320\276\320\264\320\260 \321\203 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\276\320\267\320\260\320\262\320\270\321\201\320\270\320\274\321\213\321\205 \320\264\320\270\320\260\320\261\320\265\321\202\320\270\320\272\320\276\320\262 \320\275\320\265 \320\261\321\213\320\273\320\276 \321\210\320\260\320\275\321\201\320\276\320\262 \320\262\321\213\320\266\320\270\321\202\321\214. \320\233\320\270\321\210\321\214 \320\276\321\201\320\265\320\275\321\214\321\216 1921 \320\263\320\276\320\264\320\260 \320\262 \320\242\320\276\321\200\320\276\320\275\321\202\320\276 (\320\232\320\260\320\275\320\260\320\264\320\260) \320\274\320\276\320\273\320\276\320\264\320\276\320\271 \320\262\321\200\320\260\321\207 \320\270 \321\201\321\202\321\203\320\264\320\265\320\275\321\202 \320\274\320\265\320\264\320\270\321\206\320\270\320\275\321\201"
                        "\320\272\320\276\320\263\320\276 \320\270\320\275\321\201\321\202\320\270\321\202\321\203\321\202\320\260 (\320\264\320\276\320\272\321\202\320\276\321\200\320\260 \320\221\321\215\321\201\321\202 \320\270 \320\221\320\260\320\275\321\202\320\270\320\275\320\263) \321\201\321\202\320\260\320\273\320\270 \320\272\320\276\320\273\320\276\321\202\321\214 \321\201\320\276\320\261\320\260\320\272\320\265 \320\277\320\276 \320\272\320\273\320\270\321\207\320\272\320\265 \320\227\320\270\320\267\320\270 (\320\241\321\214\321\216\320\267\320\270) \320\262\320\265\321\211\320\265\321\201\321\202\320\262\320\276, \320\272\320\276\321\202\320\276\321\200\320\276\320\265 \320\264\320\276\320\261\321\213\320\262\320\260\320\273\320\270 \320\270\320\267 \320\277\320\276\320\264\320\266\320\265\320\273\321\203\320\264\320\276\321\207\320\275\320\276\320\271 \320\266\320\265\320\273\320\265\320\267\321\213 \321\202\320\265\320\273\321\217\321\202, \320\275\320\260\320\267\320\262\320\260\320\275\320\275\321\213\320\271 \320\270"
                        "\320\274\320\270 \320\277\320\276\320\267\320\266\320\265 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\276\320\274. \320\241\321\214\321\216\320\267\320\270 \321\203\320\264\320\260\320\273\320\270\320\273\320\270 \320\277\320\276\320\264\320\266\320\265\320\273\321\203\320\264\320\276\321\207\320\275\321\203\321\216 \320\266\320\265\320\273\320\265\320\267\321\203, \320\270 \320\276\320\275\320\260 \320\267\320\260\320\261\320\276\320\273\320\265\320\273\320\260 \320\264\320\270\320\260\320\261\320\265\321\202\320\276\320\274. \321\202\320\260\320\272 \320\272\320\260\320\272 \320\262\320\265\321\211\320\265\321\201\321\202\320\262\320\276, \320\275\320\260\320\267\321\213\320\262\320\260\320\265\320\274\320\276\320\265 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\276\320\274, \320\277\320\276\320\275\320\270\320\266\320\260\320\273\320\276 \321\203 \320\241\321\214\321\216\320\267\320\270 \321\201\320\260\321\205\320\260\321\200 \320\262 \320\272\321\200\320\276\320\262\320\270"
                        ", \320\270\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\321\202\320\265\320\273\320\270 \320\276\321\202\320\262\320\260\320\266\320\270\320\273\320\270\321\201\321\214 \320\262 \321\217\320\275\320\262\320\260\321\200\320\265 1922 \320\263\320\276\320\264\320\260 \320\270\321\201\320\277\321\200\320\276\320\261\320\276\320\262\320\260\321\202\321\214 \321\215\321\202\320\276\321\202 \320\274\320\265\321\202\320\276\320\264 \320\275\320\260 14-\320\273\320\265\321\202\320\275\320\265\320\274 \320\274\320\260\320\273\321\214\321\207\320\270\320\272\320\265 \320\233\320\265\320\276\320\275\320\260\321\200\320\264\320\265 \320\242\320\276\320\274\321\201\320\276\320\275\320\265, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\276\321\207\320\265\320\275\321\214 \321\201\320\270\320\273\321\214\320\275\320\276 \320\277\320\276\321\205\321\203\320\264\320\265\320\273 \320\270 \320\262\321\213\321\201\320\276\321\205, \320\262\321\201\320\265 \320\264\321\203\320\274\320\260\320\273\320"
                        "\270, \321\207\321\202\320\276 \320\276\320\275 \321\201\320\272\320\276\321\200\320\276 \321\203\320\274\321\200\321\221\321\202. \320\221\320\273\320\260\320\263\320\276\320\264\320\260\321\200\321\217 \320\262\320\262\320\265\320\264\321\221\320\275\320\275\320\276\320\274\321\203 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\321\203, \320\264\320\276\320\261\321\213\321\202\320\276\320\274\321\203 \320\270\320\267 \320\277\320\276\320\264\320\266\320\265\320\273\321\203\320\264\320\276\321\207\320\275\320\276\320\271 \320\266\320\265\320\273\320\265\320\267\321\213 \320\261\321\213\320\272\320\260, \320\274\320\260\320\273\321\214\321\207\320\270\320\272 \320\262\321\213\320\266\320\270\320\273 \320\270 \321\207\320\265\321\200\320\265\320\267 \320\275\320\265\320\272\321\202\320\276\321\200\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 \321\201\321\202\320\260\320\273 \320\275\320\260\320\261\320\270\321\200\320\260\321\202\321\214 \320\262 \320\262\320\265\321\201\320\265. \320\243\321"
                        "\201\320\277\320\265\321\210\320\275\320\276\320\265 \320\273\320\265\321\207\320\265\320\275\320\270\320\265 \320\264\320\270\320\260\320\261\320\265\321\202\320\260 \320\277\321\200\320\270 \320\277\320\276\320\274\320\276\321\211\320\270 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\260 \320\261\321\213\320\273\320\276 \321\201\320\265\320\275\321\201\320\260\321\206\320\270\320\265\320\271 \320\262 \320\274\320\265\320\264\320\270\321\206\320\270\320\275\320\265, \320\262\321\201\320\272\320\276\321\200\320\265 \321\215\321\202\320\276 \321\201\321\202\320\260\320\273\320\276 \320\270\320\267\320\262\320\265\321\201\321\202\320\275\320\276 \320\262\320\276 \320\262\321\201\321\221\320\274 \320\274\320\270\321\200\320\265 \320\270 \320\277\320\276\320\274\320\276\320\263\320\260\320\273\320\276 \320\262\321\213\320\266\320\270\320\262\320\260\321\202\321\214 \320\261\320\276\320\273\321\214\320\275\321\213\320\274 \320\264\320\270\320\260\320\261\320\265\321\202\320\276\320\274.</p>\n"
"<p st"
                        "yle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\242\320\276\320\273\321\214\320\272\320\276 \320\262 1936 \320\263\320\276\320\264\321\203 \320\245\320\260\320\263\320\265\320\264\320\276\321\200\320\275\320\276\320\274 \320\261\321\213\320\273 \320\270\320\267\320\276\320\261\321\200\320\265\321\202\321\221\320\275 \320\277\320\265\321\200\320\262\321\213\320\271 \320\261\320\260\320\267\320\260\320\273\321\214\320\275\321\213\320\271 \320\270\320\275\321\201\321\203\320\273\320\270\320\275. \320\222 1941 \320\263\320\276\320\264\321\203 \321\204\320\270\321\200\320\274\320\260 \320\220\320\274\320\265\321\201 \321\201\321\202\320\260\320\273\320\260 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\321\214 \320\277\320\265\321\200\320\262\321\213\320\265 \321\202\320\265\321\201\321\202-\320\277\320\276\320\273\320\276\321\201\320\272\320\270 \320\264\320\273\321\217 \320\270\320\267\320\274\320\265\321\200"
                        "\320\265\320\275\320\270\321\217 \321\201\320\260\321\205\320\260\321\200\320\260 \320\262 \320\274\320\276\321\207\320\265. \320\230 \320\273\320\270\321\210\321\214 \321\207\320\265\321\200\320\265\320\267 20 \320\273\320\265\321\202 \321\215\321\202\320\260 \320\266\320\265 \321\204\320\270\321\200\320\274\320\260 \320\275\320\260\321\207\320\260\320\273\320\260 \320\262\321\213\320\277\321\203\321\201\320\272\320\260\321\202\321\214 \320\277\320\265\321\200\320\262\321\213\320\265 \321\202\320\265\321\201\321\202-\320\277\320\276\320\273\320\276\321\201\320\272\320\270 \320\264\320\273\321\217 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217 \321\201\320\260\321\205\320\260\321\200\320\260 \320\262 \320\272\321\200\320\276\320\262\320\270 (1964)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241 1982 \320\263\320\276\320\264\320\260, \320\275\320\260\321\200\321\217\320\264\321\203 \321\201 \320\270"
                        "\320\275\321\201\321\203\320\273\320\270\320\275\320\276\320\274, \320\264\320\276\320\261\321\213\320\262\320\260\320\265\320\274\321\213\320\274 \320\270\320\267 \320\277\320\276\320\264\320\266\320\265\320\273\321\203\320\264\320\276\321\207\320\275\320\276\320\271 \320\266\320\265\320\273\320\265\320\267\321\213 \320\266\320\270\320\262\320\276\321\202\320\275\321\213\321\205, \321\201\321\202\320\260\320\273 \320\264\320\276\321\201\321\202\321\203\320\277\320\265\320\275 \321\202\320\260\320\272\320\266\320\265 \320\263\320\265\320\275\320\265\320\270\321\207\320\265\321\201\320\272\320\270 \321\201\320\270\320\275\321\202\320\265\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \321\207\320\265\320\273\320\276\320\262\320\265\321\207\320\265\321\201\320\272\320\270\320\271 \320\270\320\275\321\201\321\203\320\273\320\275(\321\205\321\203\320\274\320\260\320\275\320\270\320\275\321\201\321\203\320\273\320\270\320\275). \320\237\321\200\320\270 \320\277\320\276\320\274\320\276"
                        "\320\267\320\270 \320\261\320\260\320\272\321\202\320\265\321\200\320\270\320\271 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\321\217\321\202 \320\270\320\275\321\201\321\203\320\273\320\270\320\275 \320\270\320\273\320\270 \320\277\321\200\320\265\320\262\321\200\320\260\321\211\320\260\321\216\321\202 \321\201\320\262\320\270\320\275\320\276\320\271 \320\270\320\275\321\201\321\203\320\273\320\270\320\275 \320\262 \321\207\320\265\320\273\320\276\320\262\320\265\321\207\320\265\321\201\320\272\320\270\320\271).</p></body></html>", nullptr));
        histBackButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(histTab), QCoreApplication::translate("MainWindow", "\320\270\321\201\321\202\320\276\321\200\320\270\321\217 \320\264\320\270\320\260\320\261\320\265\321\202\320\260", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\224\320\273\321\217 \321\205\320\276\321\200\320\276\321\210\320\265\320\271 \320\272\320\276\320\274\320\277\320\265\320\275\321\201\320\260\321\206\320\270\320\270 \320\264\320\270\320\260\320\261\320\265\321\202\320\260 \320\262\320\260\320\266\320\265\320\275 \320\275\320\265 \321\202\320\276\320\273\321\214\320\272\320\276 \320\262\320\262\320\276\320\264\320\270\320\274\321\213\320\271 "
                        "\320\270\320\275\321\201\321\203\320\273\320\270\320\275, \320\275\320\276 \320\270 \321\203\321\207\321\221\321\202 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\260 \320\245\320\225 (\321\205\320\273\320\265\320\261\320\275\321\213\321\205 \320\265\320\264\320\270\320\275\320\270\321\206), \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\274\321\213 \321\203\320\277\320\276\321\202\321\200\320\265\320\261\320\273\321\217\320\265\320\274. \320\241 \320\277\320\270\321\202\320\260\320\275\320\270\320\265\320\274 \320\262 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\274 \320\277\320\276\321\201\321\202\321\203\320\277\320\260\321\216\321\202 \320\261\320\265\320\273\320\272\320\270, \320\266\320\270\321\200\321\213, \321\203\320\263\320\273\320\265\320\262\320\276\320\264\321\213, \320\262\320\270\321\202\320\260\320\274\320\270\320\275\321\213, \320\274\320\270\320\275\320\265\321\200\320\260\320\273\321\213 \320\275\320\265\320\276\320\261\321\205\320"
                        "\276\320\264\320\270\320\274\321\213\320\265 \320\264\320\273\321\217 \320\266\320\270\320\267\320\275\320\265\320\264\320\265\321\217\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\320\270 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260. \320\236\320\275\320\270 \320\264\320\276\320\273\320\266\320\275\321\213 \320\261\321\213\321\202\321\214 \320\262 \320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\320\276\320\274 \321\201\320\276\320\276\321\202\320\275\320\276\321\210\320\265\320\275\320\270\320\270.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\243\320\263\320\273\320\265\320\262\320\276\320\264\321\213 - \320\276\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272 \321\215\320\275\320\265\321\200\320\263\320\270\320\270. \320\222 \320\277\320\270\321\211\320\265\320\262\320\260\321\200\320\270"
                        "\321\202\320\265\320\273\321\214\320\275\320\276\320\274 \321\202\321\200\320\260\320\272\321\202\320\265 \321\203\320\263\320\273\320\265\320\262\320\276\320\264\321\213 \320\277\321\200\320\265\320\262\321\200\320\260\321\211\320\260\321\216\321\202\321\201\321\217 \320\262 \320\263\320\273\321\216\320\272\320\276\320\267\321\203 \320\270 \321\207\320\265\321\200\320\265\320\267 \321\201\321\202\320\265\320\275\320\272\321\203 \320\272\320\270\321\210\320\265\321\207\320\275\320\270\320\272\320\260 \320\277\321\200\320\276\321\201\320\260\321\207\320\270\320\262\320\260\321\216\321\202\321\201\321\217 \320\262 \320\272\321\200\320\276\320\262\321\214 \320\270 \320\267\320\260\321\202\320\265\320\274 \320\277\320\276\321\201\321\202\321\203\320\277\320\260\321\216\321\202 \320\262 \320\272\320\273\320\265\321\202\320\272\320\270 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\274\320\260, \320\263\320\264\320\265 \320\277\321\200\320\265\320\262\321\200\320\260\321\211\320\260\321\216\321\202\321"
                        "\201\321\217 \320\262 \321\215\320\275\320\265\321\200\320\263\320\270\321\216. \320\224\320\273\321\217 \321\202\320\276\320\263\320\276 \321\207\321\202\320\276\320\261\321\213 \320\263\320\273\321\216\320\272\320\276\320\267\320\260 \320\277\320\276\320\277\320\260\320\273\320\260 \320\262 \320\272\320\273\320\265\321\202\320\272\321\203, \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274 \320\270\320\275\321\201\321\203\320\273\320\270\320\275. \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\320\262\320\276\320\264\320\270\320\274\320\276\320\263\320\276 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\260 \320\272\320\276\321\200\320\276\321\202\320\272\320\276\320\263\320\276 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \320\267\320\260\320\262\320\270\321\201\320\270\321\202 \320\276\321\202 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\260 \321\203\320\263\320\273\320\265\320\262"
                        "\320\276\320\264\320\276\320\262, \320\277\320\276\320\273\321\203\321\207\320\260\320\265\320\274\321\213\321\205 \320\262\320\276 \320\262\321\200\320\265\320\274\321\217 \320\265\320\264\321\213. \320\224\320\273\321\217 \320\261\320\276\320\273\320\265\320\265 \320\273\320\265\320\263\320\272\320\276\320\263\320\276 \320\277\320\276\320\264\321\201\321\207\320\265\321\202\320\260 \320\277\320\276\321\202\321\200\320\265\320\261\320\273\320\265\320\275\320\275\321\213\321\205 \321\203\320\263\320\273\320\265\320\262\320\276\320\264\320\276\320\262 \320\261\321\213\320\273\320\276 \320\262\320\262\320\265\320\264\320\265\320\275\320\276 \320\277\320\276\320\275\321\217\321\202\320\270\320\265 \321\205\320\273\320\265\320\261\320\275\320\260\321\217 \320\265\320\264\320\270\320\275\320\270\321\206\320\260. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">1 \320\245\320\225 = 10-12 \320\263\321\200"
                        "\320\260\320\274\320\274 \321\203\320\263\320\273\320\265\320\262\320\276\320\264\320\276\320\262 \320\262 \320\273\321\216\320\261\320\276\320\274 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\265</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\321\200\320\260\320\267\320\273\320\270\321\207\320\260\321\216\321\202 \320\261\321\213\321\201\321\202\321\200\321\213\320\265 \320\270 \320\274\320\265\320\264\320\273\320\265\320\275\320\275\321\213\320\265 \320\245\320\225. \320\234\320\265\320\264\320\273\320\265\320\275\320\275\320\260\321\217 \320\245\320\225 - \321\215\321\202\320\276 \321\203\320\263\320\273\320\265\320\262\320\276\320\264\321\213, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\277\320\276\321\201\321\202\320\265\320\277\320\265\320\275\320\275\320\276 \320\277\320\276\320\262\321\213\321\210\320\260\321\216\321\202 \321\201\320\260\321\205\320\260\321\200 \320\262 \320\272\321"
                        "\200\320\276\320\262\320\270. \320\242\320\260\320\272\320\276\320\265 \321\201\320\262\320\276\320\271\321\201\321\202\320\262\320\276 \320\276\320\275\320\270 \320\277\321\200\320\270\320\276\320\261\321\200\320\265\321\202\320\260\321\216\321\202 \320\261\320\273\320\260\320\263\320\276\320\264\320\260\321\200\321\217 \320\266\320\270\321\200\320\260\320\274, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \321\201\320\276\320\264\320\265\321\200\320\266\320\260\321\202\321\201\321\217 \320\262 \321\215\321\202\320\276\320\274 \320\266\320\265 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\265. \320\235\320\260\320\277\321\200\320\270\320\274\320\265\321\200, \320\262 20 \320\263 \320\274\320\276\320\273\320\276\321\207\320\275\320\276\320\263\320\276 \321\210\320\276\320\272\320\276\320\273\320\260\320\264\320\260 \321\201\320\276\320\264\320\265\321\200\320\266\320\270\321\202\321\201\321\217 12 \320\263 \321\203\320\263\320\273\320\265\320\262\320\276\320\264\320\276\320\262 \320\270"
                        " 6 \320\263 \320\266\320\270\321\200\320\276\320\262. \320\241\320\273\320\265\320\264\320\276\320\262\320\260\321\202\320\265\320\273\321\214\320\275\320\276, \321\210\320\276\320\272\320\276\320\273\320\260\320\264 - \320\274\320\265\320\264\320\273\320\265\320\275\320\275\320\260\321\217 \320\245\320\225. \320\221\321\213\321\202\321\201\321\200\321\213\320\265 \320\245\320\225 \320\277\320\276\320\262\321\213\321\210\320\260\321\216\321\202 \321\201\320\260\321\205\320\260\321\200 \320\262 \320\272\321\200\320\276\320\262\320\270 \321\201\321\200\320\260\320\267\321\203 \320\266\320\265 - \321\215\321\202\320\276 \320\263\320\273\321\216\320\272\320\276\320\267\320\260, \321\204\321\200\321\203\320\272\321\202\321\213, \321\201\320\276\320\272 \320\270 \320\264\321\200. \320\277\321\200\320\276\320\264\321\203\320\272\321\202\321\213. \320\237\321\200\320\270 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270 \320\275\321\203\320\266\320\275\321\213 \320\261\321"
                        "\213\321\201\321\202\321\200\321\213\320\265 \320\245\320\225. \320\220 \320\262\320\276\321\202 \320\264\320\273\321\217 \320\277\320\276\320\267\320\264\320\275\320\265\320\263\320\276 \320\277\321\200\320\270\321\221\320\274\320\260 \320\277\320\270\321\211\320\270 \320\273\321\203\321\207\321\210\320\265 \320\261\321\200\320\260\321\202\321\214 \320\274\320\265\320\264\320\273\320\265\320\275\320\275\321\213\320\265 \320\245\320\225.</p></body></html>", nullptr));
        heBackButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(heTab), QCoreApplication::translate("MainWindow", "\321\205\320\265", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\223\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\321\217 - \321\215\321\202\320\276 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265, \320\272\320\276\321\202\320\276\321\200\320\276\320\265 \320\262\320\276\320\267\320\275\320\270\320\272\320\260\320\265\321\202 \320\277\321\200\320\270 \321\201\320\275\320\270\320\266\320\265\320\275"
                        "\320\270\320\270 \321\203\321\200\320\276\320\262\320\275\321\217 \320\263\320\273\321\216\320\272\320\276\320\267\321\213 \320\262 \320\272\321\200\320\276\320\262\320\270 (\321\206\320\265\320\273\321\214\320\275\320\260\321\217 \320\272\320\260\320\277\320\270\320\273\321\217\321\200\320\275\320\260\321\217 \320\272\321\200\320\276\320\262\321\214) \320\275\320\270\320\266\320\265 3,3 \320\274\320\274\320\276\320\273\321\214/\320\273. \320\232\320\273\320\265\321\202\320\272\320\270 \320\263\320\276\320\273\320\276\320\262\320\275\320\276\320\263\320\276 \320\274\320\276\320\267\320\263\320\260 \320\276\321\207\320\265\320\275\321\214 \321\207\321\203\320\262\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\321\213 \320\272 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270, \320\277\320\276\321\201\320\272\320\276\320\273\321\214\320\272\321\203 \320\275\320\265 \320\270\320\274\320\265\321\216\321\202 \320\267\320\260\320\277\320\260\321"
                        "\201\320\276\320\262 \320\263\320\273\321\216\320\272\320\276\320\267\321\213. \320\237\320\276\321\215\321\202\320\276\320\274\321\203 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\274 \320\260\320\272\321\202\320\270\320\262\320\275\320\276 \321\200\320\265\320\260\320\263\320\270\321\200\321\203\320\265\321\202 \320\275\320\260 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\321\216, \320\262\320\272\320\273\321\216\321\207\320\260\321\217 \320\267\320\260\321\211\320\270\321\202\320\275\321\213\320\265 \320\274\320\265\321\205\320\260\320\275\320\270\320\267\320\274\321\213. \320\247\320\265\320\273\320\276\320\262\320\265\320\272 \321\201 \320\264\320\270\320\260\320\261\320\265\321\202\320\276\320\274 \320\275\320\260\321\207\320\270\320\275\320\260\320\265\321\202 \320\276\321\211\321\203\321\211\320\260\321\202\321\214 \321\202\320\260\320\272 \320\275\320\260\320\267\321\213\320\262\320\260\320\265\320\274\321\213\320\265 \321\201\320\270\320\274"
                        "\320\277\321\202\320\276\320\274\321\213-\320\277\321\200\320\265\320\264\320\262\320\265\321\201\321\202\320\275\320\270\320\272\320\270, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \321\201\320\270\320\263\320\275\320\260\320\273\320\270\320\267\320\270\321\200\321\203\321\216\321\202, \321\207\321\202\320\276 \320\275\320\260\320\264\320\276 \320\277\321\200\320\265\320\264\320\277\321\200\320\270\320\275\321\217\321\202\321\214 \320\267\320\260\321\211\320\270\321\202\320\275\321\213\320\265 \320\274\320\265\321\200\321\213: \320\277\321\200\320\265\320\266\320\264\320\265 \320\262\321\201\320\265\320\263\320\276 \321\207\321\202\320\276-\320\275\320\270\320\261\321\203\320\264\321\214 \321\201\321\212\320\265\321\201\321\202\321\214. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\265\320\274 \321\201\320\270\320\274\320\277\321\202\320\276\320"
                        "\274\321\213-\320\277\321\200\320\265\320\264\320\262\320\265\321\201\321\202\320\275\320\270\320\272\320\270 \320\274\320\276\320\263\321\203\321\202 \320\270\321\201\321\207\320\265\320\267\320\260\321\202\321\214. \320\223\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\321\217, \320\272\320\276\321\202\320\276\321\200\320\260\321\217 \320\275\320\265 \321\201\320\276\320\277\321\200\320\276\320\262\320\276\320\266\320\264\320\260\320\265\321\202\321\201\321\217 \321\201\320\270\320\274\320\277\321\202\320\276\320\274\320\260\320\274\320\270-\320\277\321\200\320\265\320\264\320\262\320\265\321\201\321\202\320\275\320\270\320\272\320\260\320\274\320\270, \320\275\320\260\320\267\321\213\320\262\320\260\320\265\321\202\321\201\321\217 \320\261\320\265\321\201\321\201\320\270\320\274\320\277\321\202\320\276\320\274\320\275\320\276\320\271 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\265\320\271.</p>\n"
"<p style=\" margin-top:0px; "
                        "margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\320\270\320\274\320\277\321\202\320\276\320\274\321\213 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. \320\276\320\261\321\211\320\270\320\265, \320\262\321\213\320\267\320\262\320\260\320\275\320\275\321\213\320\265 \320\262\321\213\320\261\321\200\320\276\321\201\320\276\320\274 \321\201\321\202\321\200\320\265\321\201\321\201\320\276\320\262\321\213\321\205 \320\263\320\276\321\200\320\274\320\276\320\275\320\276\320\262 (\320\260\320\264\321\200\320\265\320\275\320\260\320\273\320\270\320\275\320\260, \320\272\320\276\321\200\321\202\320\270\320\267\320\276\320\273\320\260), \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\277\320\276\320\262\321\213\321\210\320\260\321\216\321\202 \320\263\320\273\321\216\320\272"
                        "\320\276\320\267\321\203 \320\262 \320\272\321\200\320\276\320\262\320\270 \320\262 \320\276\321\201\320\275\320\276\320\262\320\275\320\276\320\274 \320\267\320\260 \321\201\321\207\320\265\321\202 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \320\263\320\273\321\216\320\272\320\276\320\267\321\213 \320\270\320\267 \320\267\320\260\320\277\320\260\321\201\320\276\320\262 \320\277\320\265\321\207\320\265\320\275\320\270 (\321\200\320\260\321\201\320\277\320\260\320\264 \320\263\320\273\320\270\320\272\320\276\320\263\320\265\320\275\320\260). \320\236\320\275\320\270 \320\262\320\272\320\273\321\216\321\207\320\260\321\216\321\202 \321\207\321\203\320\262\321\201\321\202\320\262\320\276 \320\263\320\276\320\273\320\276\320\264\320\260, \320\264\321\200\320\276\320\266\321\214 \320\262 \321\202\320\265\320\273\320\265, \321\205\320\276\320\273\320\276\320\264\320\275\321\213\320\271 \320\277\320\276\321\202, \321\201\320\265\321\200\320\264\321\206\320\265\320\261\320\270\320\265\320"
                        "\275\320\270\320\265, \321\200\320\260\320\267\320\264\321\200\320\260\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214, \320\276\320\275\320\265\320\274\320\265\320\275\320\270\320\265 \320\263\321\203\320\261, \320\277\320\260\320\273\321\214\321\206\320\265\320\262;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. \321\201\320\262\321\217\320\267\320\260\320\275\320\275\321\213\320\265 \321\201 \320\277\321\200\320\270\320\267\320\275\320\260\320\272\320\260\320\274\320\270 &quot;\320\263\320\276\320\273\320\276\320\264\320\260\320\275\320\270\321\217&quot; \320\263\320\276\320\273\320\276\320\262\320\275\320\276\320\263\320\276 \320\274\320\276\320\267\320\263\320\260: \321\201\320\273\320\260\320\261\320\276\321\201\321\202\321\214, \320\263\320\276\320\273\320\276\320\262\320\276\320\272\321\200\321\203\320\266\320\265\320\275\320\270\320\265, \320\263\320\276\320\273\320\276\320\262\320"
                        "\275\320\260\321\217 \320\261\320\276\320\273\321\214, \320\275\320\260\321\200\321\203\321\210\320\265\320\275\320\270\320\265 \320\272\320\276\320\275\321\206\320\265\320\275\321\202\321\200\320\260\321\206\320\270\320\270, \321\201\321\202\321\200\320\260\320\275\320\275\320\276\320\265 \320\277\320\276\320\262\320\265\320\264\320\265\320\275\320\270\320\265, \321\201\320\277\321\203\321\202\320\260\320\275\320\275\320\276\321\201\321\202\321\214 \321\201\320\276\320\267\320\275\320\260\320\275\320\270\321\217, \320\277\321\200\320\270 \321\202\321\217\320\266\320\265\320\273\321\213\321\205 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\217\321\205 - \320\277\320\276\321\202\320\265\321\200\321\217 \321\201\320\276\320\267\320\275\320\260\320\275\320\270\321\217 \320\270 \321\201\321\203\320\264\320\276\321\200\320\276\320\263\320\270. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\235\320\260\320\270"
                        "\320\261\320\276\320\273\320\265\320\265 \321\207\320\260\321\201\321\202\321\213\320\274\320\270 \320\277\321\200\320\270\321\207\320\270\320\275\320\260\320\274\320\270 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270 \320\274\320\276\320\263\321\203\321\202 \320\261\321\213\321\202\321\214 \321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\265:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. \320\275\320\265\320\264\320\276\321\201\321\202\320\260\321\202\320\276\321\207\320\275\320\276\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 (\320\276\321\202\321\201\321\203\321\202\321\201\321\202\320\262\320\270\320\265) \320\277\321\200\320\270\320\275\321\217\321\202\320\276\320\271 \320\277\320\270\321\211\320\270;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0;"
                        " text-indent:0px;\">2. \321\204\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\275\320\260\320\263\321\200\321\203\320\267\320\272\320\270 \320\261\320\276\320\273\321\214\321\210\320\265 \320\276\320\261\321\213\321\207\320\275\320\276\320\263\320\276 - \320\277\320\276\321\201\320\273\320\265 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\321\213\321\205 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\271 \321\200\320\270\321\201\320\272 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270 \320\277\320\276\320\262\321\213\321\210\320\265\320\275 \320\262 \321\202\320\265\321\207\320\265\320\275\320\270\320\265 \320\262\321\201\320\265\320\263\320\276 \320\264\320\275\321\217 \320\270 \320\275\320\276\321\207\321\214\321\216;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. \321\201\320\273\320\270\321"
                        "\210\320\272\320\276\320\274 \320\261\320\276\320\273\321\214\321\210\320\260\321\217 \320\264\320\276\320\267\320\260 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\260;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. \320\262\321\213\320\261\321\200\320\260\320\275\320\276 \320\275\320\276\320\262\320\276\320\265 \320\274\320\265\321\201\321\202\320\276 \320\264\320\273\321\217 \320\270\320\275\321\212\320\265\320\272\321\206\320\270\320\271, \320\276\321\202\320\272\321\203\320\264\320\260 \320\270\320\275\321\201\321\203\320\273\320\270\320\275 \320\262\321\201\320\276\321\201\320\260\320\273\321\201\321\217 \320\261\321\213\321\201\321\202\321\200\320\265\320\265;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5. &quot;\320\274\321\203\321\202\320\275\321\213\320\271&quot; \320\270\320\275\321\201\321\203\320\273\320\270\320\275"
                        " \320\261\321\213\320\273 \320\277\320\273\320\276\321\205\320\276 \320\277\320\265\321\200\320\265\320\274\320\265\321\210\320\260\320\275;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. \320\270\320\267\320\274\320\265\320\275\320\270\320\273\320\260\321\201\321\214 \320\263\320\273\321\203\320\261\320\270\320\275\320\260 \320\270\320\275\321\212\320\265\320\272\321\206\320\270\320\270 (\321\203\320\272\320\276\320\273 \320\262 \320\274\321\213\321\210\321\206\321\203);</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">7. \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\321\217 \320\262\320\276\320\267\320\275\320\270\320\272\320\273\320\260 \321\207\320\265\321\200\320\265\320\267 \320\275\320\265\320\261\320\276\320\273\321\214\321\210\320\276\320\271 \320\277\321\200\320\276\320\274\320\265\320\266\321\203"
                        "\321\202\320\276\320\272 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 \320\277\320\276\321\201\320\273\320\265 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\265\320\271 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270, \320\272\320\276\321\202\320\276\321\200\320\260\321\217 \320\262\321\213\320\267\320\262\320\260\320\273\320\260 \320\270\321\201\321\202\320\276\321\211\320\265\320\275\320\270\320\265 \320\267\320\260\320\277\320\260\321\201\320\276\320\262 \320\263\320\273\321\216\320\272\320\276\320\267\321\213 \320\262 \320\277\320\265\321\207\320\265\320\275\320\270 \320\270 \320\275\320\270\320\262\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\273\320\260 \321\201\320\270\320\274\320\277\321\202\320\276\320\274\321\213-\320\277\321\200\320\265\320\264\320\262\320\265\321\201\321\202\320\275\320\270\320\272\320\270;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-b"
                        "lock-indent:0; text-indent:0px;\">8. \321\203\320\277\320\276\321\202\321\200\320\265\320\261\320\273\320\265\320\275\320\270\320\265 \320\260\320\273\320\272\320\276\320\263\320\276\320\273\321\217;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">9. \320\263\320\260\321\201\321\202\321\200\320\276\321\215\320\275\321\202\320\265\321\200\320\270\321\202 \320\270 \320\277\320\276\320\275\320\276\321\201;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">10. \320\277\321\200\320\270\321\221\320\274 \320\275\320\265\320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\273\320\265\320\272\320\260\321\200\321\201\321\202\320\262;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\237\321\200\320\260\320\262\320\270\320\273\320\260 \320"
                        "\273\320\265\321\207\320\265\320\275\320\270\321\217 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\237\321\200\320\260\320\262\320\270\320\273\320\276 1.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\320\270 \320\277\321\200\320\270\320\267\320\275\320\260\320\272\320\260\321\205 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270 \321\201\320\273\320\265\320\264\321\203\320\265\321\202 \320\277\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \320\263\320\273\321\216\320\272\320\276\320\267\321\213 \320\262 \320\272\321\200\320\276\320\262\320\270, \320\276\321\201\320"
                        "\276\320\261\320\265\320\275\320\275\320\276 \320\277\321\200\320\270 \320\264\320\265\320\272\320\276\320\274\320\277\320\265\320\275\321\201\320\260\321\206\320\270\320\270 \320\264\320\270\320\260\320\261\320\265\321\202\320\260, \320\262 \320\277\320\265\321\200\320\270\320\276\320\264 &quot;\320\275\320\265\321\201\321\202\320\260\320\261\320\270\320\273\321\214\320\275\321\213\321\205&quot; \321\201\320\260\321\205\320\260\321\200\320\276\320\262. \320\236\321\211\321\203\321\211\320\265\320\275\320\270\321\217 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270 \320\275\320\265 \320\262\321\201\320\265\320\263\320\264\320\260 \320\261\321\213\320\262\320\260\321\216\321\202 \320\277\321\200\320\270 \320\270\321\201\321\202\320\270\320\275\320\275\320\276 \320\275\320\270\320\267\320\272\320\270\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217\321\205. \320\236\320\275\320\270 \320\274\320\276\320\263\321\203\321\202 \320\262\320\276\320"
                        "\267\320\275\320\270\320\272\320\260\321\202\321\214 \320\264\320\260\320\266\320\265 \320\277\321\200\320\270 \321\203\321\200\320\276\320\262\320\275\320\265 \320\263\320\273\321\216\320\272\320\276\320\267\321\213 \320\262 \320\272\321\200\320\276\320\262\320\270 7 \320\274\320\274\320\276\320\273\321\214/\320\273, \320\265\321\201\320\273\320\270 \320\265\320\263\320\276 \321\201\320\275\320\270\320\266\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\320\270\320\267\320\276\321\210\320\273\320\276 \320\267\320\260 \320\272\320\276\321\200\320\276\321\202\320\272\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 \321\201 \320\262\321\213\321\201\320\276\320\272\320\270\321\205 \321\206\320\270\321\204\321\200, \320\275\320\260\320\277\321\200\320\270\320\274\320\265\321\200 18 \320\274\320\274\320\276\320\273\321\214/\320\273. \320\242\320\276\320\273\321\214\320\272\320\276 \320\277\321\200\320\270 \320\262\321\213\321\200\320\260\320\266\320\265\320\275\320\275\321\213\321\205 \321\201\320"
                        "\270\320\274\320\277\321\202\320\276\320\274\320\260\321\205 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270 \320\275\320\260\321\207\320\270\320\275\320\260\320\271\321\202\320\265 \320\265\321\201\321\202\321\214 \321\201\321\200\320\260\320\267\321\203 \320\261\320\265\320\267 \320\260\320\275\320\260\320\273\320\270\320\267\320\260 \320\270\320\267-\320\267\320\260 \321\200\320\270\321\201\320\272\320\260 \321\200\320\260\320\267\320\262\320\270\321\202\320\270\321\217 \321\202\321\217\320\266\320\265\320\273\320\276\320\271 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">\320\237\321\200\320\260\320\262\320\270\320\273\320\276 2. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; te"
                        "xt-indent:0px;\">\320\237\321\200\320\270 \321\203\321\200\320\276\320\262\320\275\320\265 \320\263\320\273\321\216\320\272\320\276\320\267\321\213 \320\262 \320\272\321\200\320\276\320\262\320\270 \320\274\320\265\320\275\320\265\320\265 3,3 \320\274\320\274\320\276\320\273\321\214/\320\273 \320\275\320\260\320\264\320\276 \321\201\321\212\320\265\321\201\321\202\321\214 &quot;\320\261\321\213\321\201\321\202\321\200\321\213\320\265&quot; \321\203\320\263\320\273\320\265\320\262\320\276\320\264\321\213 - \320\275\320\260 1 \320\245\320\225 (10-12 \320\263), \320\266\320\265\320\273\320\260\321\202\320\265\320\273\321\214\320\275\320\276 \320\262 \320\262\320\270\320\264\320\265 \321\202\320\260\320\261\320\273\320\265\321\202\320\276\320\272 \320\263\320\273\321\216\320\272\320\276\320\267\321\213, \320\270 \320\277\320\276\320\264\320\276\320\266\320\264\320\260\321\202\321\214 10-15 \320\274\320\270\320\275\321\203\321\202 (\321\207\321\202\320\276\320\261\321\213 \320\263\320\273\321\216\320\272\320\276\320"
                        "\267\320\260 \320\262\321\201\320\276\321\201\320\260\320\273\320\260\321\201\321\214). \320\225\321\201\320\273\320\270 \320\273\321\203\321\207\321\210\320\265 \320\275\320\265 \321\201\321\202\320\260\320\273\320\276 - \320\277\321\200\320\270\320\274\320\270\321\202\320\265 \321\202\321\203 \320\266\320\265 \320\264\320\276\320\267\321\203. \320\225\321\201\320\273\320\270 \320\263\320\273\321\216\320\272\320\276\320\267\320\260 3,3 - 4 \320\274\320\274\320\276\320\273\321\214/\320\273 \320\270 \321\201\320\270\320\274\320\277\321\202\320\276\320\274\321\213 \321\201\320\273\320\260\320\261\321\213\320\265, \320\274\320\276\320\266\320\275\320\276 \320\262\321\213\320\277\320\270\321\202\321\214 \320\277\320\276\320\273\321\201\321\202\320\260\320\272\320\260\320\275\320\260 \321\201\320\276\320\272\320\260 \320\270\320\273\320\270 \321\201\321\212\320\265\321\201\321\202\321\214 \321\204\321\200\321\203\320\272\321\202. \320\232\320\276\320\263\320\264\320\260 \320\263\320\273\321\216\320\272\320\276\320\267"
                        "\320\260 \320\262\321\201\320\276\321\201\321\221\321\202\321\201\321\217, \320\270 \321\201\320\270\320\274\320\277\321\202\320\276\320\274\321\213 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270 \321\201\321\202\320\260\320\275\321\203\321\202 \320\274\320\265\320\275\321\214\321\210\320\265, \320\275\320\260\320\264\320\276 \321\201\321\212\320\265\321\201\321\202\321\214 1 \320\245\320\225 &quot;\320\264\320\273\320\270\320\275\320\275\321\213\321\205&quot; \321\203\320\263\320\273\320\265\320\262\320\276\320\264\320\276\320\262 (\321\205\320\273\320\265\320\261, \320\277\320\265\321\207\320\265\320\275\321\214\320\265).</p></body></html>", nullptr));
        gipoBackButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(gipoTab), QCoreApplication::translate("MainWindow", "\320\263\320\270\320\277\320\276", nullptr));
        textEdit_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\225\321\201\320\273\320\270 \320\277\320\276\320\272\320\260\320\267\320\260\321\202\320\265\320\273\321\214 \321\201\320\260\321\205\320\260\321\200\320\260 \320\262 \320\272\321\200\320\276\320\262\320\270 \320\265\320\264\320\270\320\275\320\276\320\266\320\264\321\213 \320\277\320\276\320\262\321\213\321\201\320\270\320\273\321\201\321\217, \321\202\320\276 \320\263\320\276\320\262\320\276"
                        "\321\200\321\217\321\202 \320\276 \320\273\320\265\320\263\320\272\320\276\320\271 \320\263\320\270\320\277\320\265\321\200\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270. \320\225\321\201\320\273\320\270 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \321\201\320\260\321\205\320\260\321\200\320\260 \320\262 \320\272\321\200\320\276\320\262\320\270 \320\262\321\213\321\210\320\265 11,1 \320\274\320\274\320\276\320\273\321\214/\320\273 \320\270 \320\264\320\265\321\200\320\266\320\270\321\202\321\201\321\217 6-9 \321\207\320\260\321\201\320\276\320\262, \320\260 \320\262 \320\274\320\276\321\207\320\265 \320\275\320\265\321\202 \320\270\320\273\320\270 \320\276\320\264\320\270\320\275 + \320\260\321\206\320\265\321\202\320\276\320\275\320\260, \321\202\320\276 \320\263\320\276\320\262\320\276\321\200\321\217\321\202 \320\276 \321\201\321\200\320\265\320\264\320\275\320\265\320\271 \320\263\320\270\320\277\320\265\321\200\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270."
                        " \320\243\321\200\320\276\320\262\320\265\320\275\321\214 \321\201\320\260\321\205\320\260\321\200\320\260 \320\262 \320\272\321\200\320\276\320\262\320\270 13,3 \320\274\320\274\320\276\320\273\321\214/\320\273 \320\270 \320\262\321\213\321\210\320\265, \320\260 \320\262 \320\274\320\276\321\207\320\265 \320\260\321\206\320\265\321\202\320\276\320\275, \321\202\320\276 \321\215\321\202\320\276 \321\202\321\217\320\266\320\265\320\273\320\260\321\217 \320\263\320\270\320\277\320\265\321\200\320\263\320\273\320\270\320\272\320\265\320\274\320\270\321\217. \320\237\321\200\320\270\321\207\320\270\320\275\320\260\320\274\320\270 \320\263\320\270\320\277\320\265\321\200\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270 \320\274\320\276\320\263\321\203\321\202 \320\261\321\213\321\202\321\214:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. \320\275\320\260\321\200\321\203\321\210\320\265\320\275\320\270\320\265 \320\277"
                        "\320\270\321\202\320\260\320\275\320\270\321\217 (\321\203\320\277\320\276\321\202\321\200\320\265\320\261\320\273\320\265\320\275\320\276 \320\274\320\275\320\276\320\263\320\276 \321\203\320\263\320\273\320\265\320\262\320\276\320\264\320\276\320\262);</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. \320\261\320\276\320\273\320\265\320\267\320\275\321\214 (\320\270\320\275\321\204\320\265\320\272\321\206\320\270\321\217, \320\262\321\213\321\201\320\276\320\272\320\260\321\217 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \321\202\320\265\320\273\320\260);</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. \320\275\320\265\320\264\320\276\321\201\321\202\320\260\321\202\320\276\320\272 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\260;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px;"
                        " margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. \320\264\320\265\321\204\320\265\320\272\321\202 \321\210\320\277\321\200\320\270\321\206-\321\200\321\203\321\207\320\272\320\270;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5. \321\201\320\277\320\276\321\200\321\202\320\270\320\262\320\275\320\260\321\217 \320\270\320\273\320\270 \320\264\321\200\321\203\320\263\320\260\321\217 \320\264\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\260\321\217 \321\204\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\260\320\272\321\202\320\270\320\262\320\275\320\276\321\201\321\202\321\214;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. \320\277\321\200\320\270\321\221\320\274 \320\275\320\265\320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\273\320\265\320\272\320\260\321\200"
                        "\321\201\321\202\320\262; </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\320\270\320\267\320\275\320\260\320\272\320\270 \320\263\320\270\320\277\320\265\321\200\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. \321\207\320\260\321\201\321\202\320\276\320\265 \320\274\320\276\321\207\320\265\320\270\321\201\320\277\321\203\321\201\320\272\320\260\320\275\320\270\320\265;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. \321\201\320\270\320\273\321\214\320\275\320\260\321\217 \320\266\320\260\320\266\320\264\320\260;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. \320\277\320\276\321\202\320\265\321\200"
                        "\321\217 \320\262 \320\262\320\265\321\201\320\265;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. \321\201\320\273\320\260\320\261\320\276\321\201\321\202\321\214;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5. \321\201\321\203\321\205\320\276\321\201\321\202\321\214 \320\262\320\276 \321\200\321\202\321\203;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. \320\267\321\203\320\264;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\232\320\260\320\272 \320\273\320\270\320\272\320\262\320\270\320\264\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\263\320\270\320\277\320\265\321\200\320\263\320\273\320\270\320\272\320\265\320\274\320\270\321\216?</p>\n"
"<p style=\" "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1)\320\273\320\265\320\263\320\272\320\260\321\217 \320\263\320\270\320\277\320\265\321\200\320\263\320\273\320\270\320\272\320\265\320\274\320\270\321\217</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\320\270 \320\265\320\264\320\270\320\275\320\270\321\207\320\275\320\276\320\274 \320\277\320\276\320\262\321\213\321\210\320\265\320\275\320\270\320\270 \321\203\321\200\320\276\320\262\320\275\321\217 \321\201\320\260\321\205\320\260\321\200\320\260 \320\262 \320\272\321\200\320\276\320\262\320\270 \320\262\321\213 \320\262\320\262\320\276\320\264\320\270\321\202\320\265 \320\264\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \320\270\320\275\321\201\321\203\320\273\320\270\320\275 \320\272\320\276\321\200\320\276\321\202\320\272\320\276\320\263\320\276 \320"
                        "\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217, \320\277\320\276\320\273\321\214\320\267\321\203\321\217\321\201\321\214 \320\277\321\200\320\260\320\262\320\270\320\273\320\276\320\274 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\270 \320\270\320\273\320\270 \321\202\320\260\320\261\320\273\320\270\321\206\320\260\320\274\320\270 \320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\270.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2)\321\201\321\200\320\265\320\264\320\275\321\217\321\217 \320\263\320\270\320\277\320\265\321\200\320\263\320\273\320\270\320\272\320\265\320\274\320\270\321\217</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\224\320\265\320\271\321\201\321\202\320\262\320\276\320\262\320\260\321\202\321\214 \321\202"
                        "\320\260\320\272 \320\266\320\265, \320\272\320\260\320\272 \320\270 \320\277\321\200\320\270 \320\273\320\265\320\263\320\272\320\276\320\271 \320\263\320\270\320\277\320\265\321\200\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270, \320\275\320\276 \320\276\320\261\321\217\320\267\320\260\321\202\320\265\320\273\321\214\320\275\320\276, \320\277\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \321\201\320\260\321\205\320\260\321\200\320\260 \320\262 \320\272\321\200\320\276\320\262\320\270 \321\207\320\265\321\200\320\265\320\267 2-3 \321\207\320\260\321\201\320\260. \320\225\321\201\320\273\320\270 \320\276\320\275 \320\275\320\265 \320\277\321\200\320\270\321\210\321\221\320\273 \320\262 \320\275\320\276\321\200\320\274\321\203, \321\202\320\276 \320\277\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\321\200\320\260\320\262\320\270\320\273\320\276 \320\272\320\276\321\200\321\200\320\265\320\272"
                        "\321\202\320\270\321\200\320\276\320\262\320\272\320\270 \320\265\321\211\321\221 \321\200\320\260\320\267.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3) \321\202\321\217\320\266\320\265\320\273\320\260\321\217 \320\263\320\270\320\277\320\265\321\200\320\263\320\273\320\270\320\272\320\265\320\274\320\270\321\217</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\230\320\275\321\201\321\203\320\273\320\270\320\275\320\260 \320\275\320\265\320\264\320\276\321\201\321\202\320\260\321\202\320\276\321\207\320\275\320\276, \320\263\320\273\321\216\320\272\320\276\320\267\320\260 \320\275\320\265 \320\277\320\276\320\277\320\260\320\264\320\260\320\265\321\202 \320\262 \320\272\320\273\320\265\321\202\320\272\321\203. \320\241\320\260\321\205\320\260\321\200 \320\272\321\200\320\276\320\262\320\270 \321\200\320\260\321\201\321\202\321\221\321\202, \320"
                        "\260 \320\272\320\273\320\265\321\202\320\272\320\270 \320\262\321\213\320\275\321\203\320\266\320\264\320\265\320\275\321\213 \320\262\320\276\321\201\320\277\320\276\320\273\320\275\321\217\321\202\321\214 \321\215\320\275\320\265\321\200\320\263\320\270\321\216 \320\270\320\267 \320\266\320\270\321\200\320\276\320\262\321\213\321\205 \320\267\320\260\320\277\320\260\321\201\320\276\320\262. \320\237\321\200\320\270 \321\215\321\202\320\276\320\274 \320\277\321\200\320\270 \321\200\320\260\321\201\321\211\320\265\320\277\320\273\320\265\320\275\320\270\320\270 \320\266\320\270\321\200\320\276\320\262 \320\262 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\274\320\265 \320\276\320\261\321\200\320\260\320\267\321\203\321\216\321\202\321\201\321\217 \320\262\321\200\320\265\320\264\320\275\321\213\320\265 \320\262\320\265\321\211\320\265\321\201\321\202\320\262\320\260, \320\262 \321\207\320\260\321\201\321\202\320\275\320\276\321\201\321\202\320\270 \320\260\321\206\320\265\321\202\320\276\320\275"
                        ". \320\237\321\200\320\270 \320\275\320\265\321\201\320\262\320\276\320\265\320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\271 \321\200\320\265\320\260\320\272\321\206\320\270\320\270 \320\275\320\260 \320\260\321\206\320\265\321\202\320\276\320\275 \320\274\320\276\320\266\320\265\321\202 \321\200\320\260\320\267\320\262\320\270\320\262\320\260\321\202\321\214\321\201\321\217 \320\263\320\270\320\277\320\265\321\200\320\263\320\273\320\270\320\272\320\265\320\274\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\272\320\276\320\274\320\260, \320\272\320\276\321\202\320\276\321\200\320\260\321\217 \320\276\320\277\320\260\321\201\320\275\320\260 \320\264\320\273\321\217 \320\266\320\270\320\267\320\275\320\270. </p></body></html>", nullptr));
        giperBackButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(giperTab), QCoreApplication::translate("MainWindow", "\320\263\320\270\320\277\320\265\321\200", nullptr));
        textEdit_6->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\224\320\270\320\260\320\261\320\265\321\202 \342\200\224 \321\215\321\202\320\276 \321\205\321\200\320\276\320\275\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\267\320\260\320\261\320\276\320\273\320\265\320\262\320\260\320\275\320\270\320\265, \320\272\320\276\321\202\320\276\321\200\320\276\320\265 \320\274\320\276\320\266\320\265\321\202 \320\276\320\272\320\260\320\267\321"
                        "\213\320\262\320\260\321\202\321\214 \320\267\320\275\320\260\321\207\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\265 \320\262\320\273\320\270\321\217\320\275\320\270\320\265 \320\275\320\260 \320\267\320\264\320\276\321\200\320\276\320\262\321\214\320\265 \320\263\320\273\320\260\320\267. \320\222\321\213\321\201\320\276\320\272\320\270\320\271 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \321\201\320\260\321\205\320\260\321\200\320\260 \320\262 \320\272\321\200\320\276\320\262\320\270 \320\274\320\276\320\266\320\265\321\202 \320\277\321\200\320\270\320\262\320\265\321\201\321\202\320\270 \320\272 \321\200\320\260\320\267\320\273\320\270\321\207\320\275\321\213\320\274 \320\276\321\201\320\273\320\276\320\266\320\275\320\265\320\275\320\270\321\217\320\274, \320\262\320\272\320\273\321\216\321\207\320\260\321\217 \320\264\320\270\320\260\320\261\320\265\321\202\320\270\321\207\320\265\321\201\320\272\321\203\321\216 \321\200\320\265\321\202\320\270\320\275\320\276\320\277\320\260\321"
                        "\202\320\270\321\216, \320\272\320\260\321\202\320\260\321\200\320\260\320\272\321\202\321\203 \320\270 \320\263\320\273\320\260\321\203\320\272\320\276\320\274\321\203. \320\237\320\276\321\215\321\202\320\276\320\274\321\203 \320\267\320\260\320\261\320\276\321\202\320\260 \320\276 \320\267\321\200\320\265\320\275\320\270\320\270 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\262\320\260\320\266\320\275\320\276\320\271 \321\207\320\260\321\201\321\202\321\214\321\216 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\264\320\270\320\260\320\261\320\265\321\202\320\276\320\274. \320\222 \321\215\321\202\320\276\320\271 \321\201\321\202\320\260\321\202\321\214\320\265 \320\274\321\213 \321\200\320\260\321\201\321\201\320\274\320\276\321\202\321\200\320\270\320\274 \320\276\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \321\200\320\265\320\272\320\276\320\274\320\265\320\275\320\264\320\260\321\206\320\270\320\270 \320\277\320\276 \321\203\321\205"
                        "\320\276\320\264\321\203 \320\267\320\260 \320\263\320\273\320\260\320\267\320\260\320\274\320\270 \320\264\320\273\321\217 \320\273\321\216\320\264\320\265\320\271 \321\201 \320\264\320\270\320\260\320\261\320\265\321\202\320\276\320\274.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\236\320\264\320\275\320\270\320\274 \320\270\320\267 \321\201\320\260\320\274\321\213\321\205 \320\262\320\260\320\266\320\275\321\213\321\205 \321\210\320\260\320\263\320\276\320\262 \320\262 \320\267\320\260\320\261\320\276\321\202\320\265 \320\276 \320\267\321\200\320\265\320\275\320\270\320\270 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \321\200\320\265\320\263\321\203\320\273\321\217\321\200\320\275\320\276\320\265 \320\277\320\276\321\201\320\265\321\211\320"
                        "\265\320\275\320\270\320\265 \320\276\321\204\321\202\320\260\320\273\321\214\320\274\320\276\320\273\320\276\320\263\320\260. \320\240\320\265\320\272\320\276\320\274\320\265\320\275\320\264\321\203\320\265\321\202\321\201\321\217 \320\277\321\200\320\276\321\205\320\276\320\264\320\270\321\202\321\214 \320\276\320\261\321\201\320\273\320\265\320\264\320\276\320\262\320\260\320\275\320\270\320\265 \320\275\320\265 \321\200\320\265\320\266\320\265 \320\276\320\264\320\275\320\276\320\263\320\276 \321\200\320\260\320\267\320\260 \320\262 \320\263\320\276\320\264. \320\241\320\277\320\265\321\206\320\270\320\260\320\273\320\270\321\201\321\202 \321\201\320\274\320\276\320\266\320\265\321\202 \320\262\321\213\321\217\320\262\320\270\321\202\321\214 \321\200\320\260\320\275\320\275\320\270\320\265 \320\277\321\200\320\270\320\267\320\275\320\260\320\272\320\270 \320\276\321\201\320\273\320\276\320\266\320\275\320\265\320\275\320\270\320\271, \321\202\320\260\320\272\320\270\321\205 \320\272\320\260\320\272 \320\264"
                        "\320\270\320\260\320\261\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \321\200\320\265\321\202\320\270\320\275\320\276\320\277\320\260\321\202\320\270\321\217, \320\270 \320\277\321\200\320\265\320\264\320\273\320\276\320\266\320\270\321\202\321\214 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\321\203\321\216\321\211\320\265\320\265 \320\273\320\265\321\207\320\265\320\275\320\270\320\265.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\320\276\320\264\320\264\320\265\321\200\320\266\320\260\320\275\320\270\320\265 \321\203\321\200\320\276\320\262\320\275\321\217 \321\201\320\260\321\205\320\260\321\200\320\260 \320\262 \320\272\321\200\320\276\320\262\320\270 \320\262 \320\277\321\200\320\265\320\264\320\265\320\273\320\260\321\205 \320\275\320\276\321\200\320\274\321\213 \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\272\320\273\321\216"
                        "\321\207\320\265\320\262\321\213\320\274 \321\204\320\260\320\272\321\202\320\276\321\200\320\276\320\274 \320\264\320\273\321\217 \320\277\321\200\320\265\320\264\320\276\321\202\320\262\321\200\320\260\321\211\320\265\320\275\320\270\321\217 \320\276\321\201\320\273\320\276\320\266\320\275\320\265\320\275\320\270\320\271. \320\222\321\213\321\201\320\276\320\272\320\270\320\271 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \320\263\320\273\321\216\320\272\320\276\320\267\321\213 \320\274\320\276\320\266\320\265\321\202 \320\277\320\276\320\262\321\200\320\265\320\264\320\270\321\202\321\214 \320\272\321\200\320\276\320\262\320\265\320\275\320\276\321\201\320\275\321\213\320\265 \321\201\320\276\321\201\321\203\320\264\321\213 \320\262 \320\263\320\273\320\260\320\267\320\260\321\205, \321\207\321\202\320\276 \320\277\321\200\320\270\320\262\320\276\320\264\320\270\321\202 \320\272 \321\203\321\205\321\203\320\264\321\210\320\265\320\275\320\270\321\216 \320\267\321\200\320\265\320\275\320\270\321\217"
                        ". \320\241\320\273\320\265\320\264\321\203\320\265\321\202 \321\200\320\265\320\263\321\203\320\273\321\217\321\200\320\275\320\276 \320\277\321\200\320\276\320\262\320\265\321\200\321\217\321\202\321\214 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \321\201\320\260\321\205\320\260\321\200\320\260 \320\270 \321\201\320\276\320\261\320\273\321\216\320\264\320\260\321\202\321\214 \321\200\320\265\320\272\320\276\320\274\320\265\320\275\320\264\320\260\321\206\320\270\320\270 \320\262\321\200\320\260\321\207\320\260 \320\277\320\276 \320\264\320\270\320\265\321\202\320\265 \320\270 \321\204\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\276\320\271 \320\260\320\272\321\202\320\270\320\262\320\275\320\276\321\201\321\202\320\270.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\320\260\320\262\320\270\320\273\321\214\320\275\320\276\320\265 \320\277\320\270\321\202\320\260\320\275\320\270\320\265"
                        " \320\270\320\263\321\200\320\260\320\265\321\202 \320\262\320\260\320\266\320\275\321\203\321\216 \321\200\320\276\320\273\321\214 \320\262 \320\277\320\276\320\264\320\264\320\265\321\200\320\266\320\260\320\275\320\270\320\270 \320\267\320\264\320\276\321\200\320\276\320\262\321\214\321\217 \320\263\320\273\320\260\320\267. \320\240\320\265\320\272\320\276\320\274\320\265\320\275\320\264\321\203\320\265\321\202\321\201\321\217 \320\262\320\272\320\273\321\216\321\207\320\260\321\202\321\214 \320\262 \321\200\320\260\321\206\320\270\320\276\320\275 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\321\213, \320\261\320\276\320\263\320\260\321\202\321\213\320\265 \320\260\320\275\321\202\320\270\320\276\320\272\321\201\320\270\320\264\320\260\320\275\321\202\320\260\320\274\320\270, \320\262\320\270\321\202\320\260\320\274\320\270\320\275\320\260\320\274\320\270 C \320\270 E, \320\260 \321\202\320\260\320\272\320\266\320\265 \320\272\320\260\321\200\320\276\321\202\320\270\320\275\320\276\320\270\320\264"
                        "\320\260\320\274\320\270 (\320\275\320\260\320\277\321\200\320\270\320\274\320\265\321\200, \320\274\320\276\321\200\320\272\320\276\320\262\321\214, \321\210\320\277\320\270\320\275\320\260\321\202, \320\261\321\200\320\276\320\272\320\272\320\276\320\273\320\270). \320\236\320\274\320\265\320\263\320\260-3 \320\266\320\270\321\200\320\275\321\213\320\265 \320\272\320\270\321\201\320\273\320\276\321\202\321\213, \321\201\320\276\320\264\320\265\321\200\320\266\320\260\321\211\320\270\320\265\321\201\321\217 \320\262 \321\200\321\213\320\261\320\265, \321\202\320\260\320\272\320\266\320\265 \320\277\320\276\320\273\320\265\320\267\320\275\321\213 \320\264\320\273\321\217 \320\267\321\200\320\265\320\275\320\270\321\217.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\321\213\321\201\320\276\320\272\320\276\320\265 \320\260\321\200\321\202\320\265\321\200\320\270\320\260\320\273\321\214\320\275\320\276\320\265 \320\264\320"
                        "\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\274\320\276\320\266\320\265\321\202 \321\203\321\201\321\203\320\263\321\203\320\261\320\270\321\202\321\214 \320\277\321\200\320\276\320\261\320\273\320\265\320\274\321\213 \321\201\320\276 \320\267\321\200\320\265\320\275\320\270\320\265\320\274 \321\203 \320\264\320\270\320\260\320\261\320\265\321\202\320\270\320\272\320\276\320\262. \320\240\320\265\320\263\321\203\320\273\321\217\321\200\320\275\320\276 \320\277\321\200\320\276\320\262\320\265\321\200\321\217\320\271\321\202\320\265 \320\264\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\270 \321\201\320\273\320\265\320\264\321\203\320\271\321\202\320\265 \321\200\320\265\320\272\320\276\320\274\320\265\320\275\320\264\320\260\321\206\320\270\321\217\320\274 \320\262\321\200\320\260\321\207\320\260 \320\277\320\276 \320\265\320\263\320\276 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\216. \320\244\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\260\321\217 "
                        "\320\260\320\272\321\202\320\270\320\262\320\275\320\276\321\201\321\202\321\214, \321\201\320\261\320\260\320\273\320\260\320\275\321\201\320\270\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\265 \320\277\320\270\321\202\320\260\320\275\320\270\320\265 \320\270 \320\276\321\202\320\272\320\260\320\267 \320\276\321\202 \320\272\321\203\321\200\320\265\320\275\320\270\321\217 \320\274\320\276\320\263\321\203\321\202 \320\277\320\276\320\274\320\276\321\207\321\214 \320\277\320\276\320\264\320\264\320\265\321\200\320\266\320\270\320\262\320\260\321\202\321\214 \320\264\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\275\320\260 \320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\320\276\320\274 \321\203\321\200\320\276\320\262\320\275\320\265.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\320\276\320\273\320\275\320\265\321\207\320\275\321\213\320\265 \320\273\321\203\321\207\320\270"
                        " \320\274\320\276\320\263\321\203\321\202 \320\275\320\265\320\263\320\260\321\202\320\270\320\262\320\275\320\276 \321\201\320\272\320\260\320\267\320\260\321\202\321\214\321\201\321\217 \320\275\320\260 \320\267\320\264\320\276\321\200\320\276\320\262\321\214\320\265 \320\263\320\273\320\260\320\267. \320\235\320\276\321\201\320\270\321\202\320\265 \321\201\320\276\320\273\320\275\321\206\320\265\320\267\320\260\321\211\320\270\321\202\320\275\321\213\320\265 \320\276\321\207\320\272\320\270 \321\201 UV-\320\267\320\260\321\211\320\270\321\202\320\276\320\271, \320\272\320\276\320\263\320\264\320\260 \320\275\320\260\321\205\320\276\320\264\320\270\321\202\320\265\321\201\321\214 \320\275\320\260 \321\203\320\273\320\270\321\206\320\265, \320\276\321\201\320\276\320\261\320\265\320\275\320\275\320\276 \320\262 \321\201\320\276\320\273\320\275\320\265\321\207\320\275\321\213\320\265 \320\264\320\275\320\270. \320\255\321\202\320\276 \320\277\320\276\320\274\320\276\320\266\320\265\321\202 \320\267\320\260\321"
                        "\211\320\270\321\202\320\270\321\202\321\214 \320\263\320\273\320\260\320\267\320\260 \320\276\321\202 \320\262\321\200\320\265\320\264\320\275\320\276\320\263\320\276 \320\262\320\276\320\267\320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \321\203\320\273\321\214\321\202\321\200\320\260\321\204\320\270\320\276\320\273\320\265\321\202\320\276\320\262\320\276\320\263\320\276 \320\270\320\267\320\273\321\203\321\207\320\265\320\275\320\270\321\217 \320\270 \321\201\320\275\320\270\320\267\320\270\321\202\321\214 \321\200\320\270\321\201\320\272 \321\200\320\260\320\267\320\262\320\270\321\202\320\270\321\217 \320\272\320\260\321\202\320\260\321\200\320\260\320\272\321\202\321\213.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\225\321\201\320\273\320\270 \320\262\321\213 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\265\321\202\320\265 \320\272\320\276\320\275\321\202\320\260\320\272\321"
                        "\202\320\275\321\213\320\265 \320\273\320\270\320\275\320\267\321\213, \321\201\320\273\320\265\320\264\321\203\320\271\321\202\320\265 \320\277\321\200\320\260\320\262\320\270\320\273\320\260\320\274 \320\270\321\205 \321\203\321\205\320\276\320\264\320\260 \320\270 \320\263\320\270\320\263\320\270\320\265\320\275\321\213. \320\235\320\265 \320\267\320\260\320\261\321\213\320\262\320\260\320\271\321\202\320\265 \320\274\320\265\320\275\321\217\321\202\321\214 \320\273\320\270\320\275\320\267\321\213 \320\262 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\270\320\270 \321\201 \321\200\320\265\320\272\320\276\320\274\320\265\320\275\320\264\320\260\321\206\320\270\321\217\320\274\320\270 \320\270 \320\270\320\267\320\261\320\265\320\263\320\260\320\271\321\202\320\265 \320\275\320\276\321\210\320\265\320\275\320\270\321\217 \320\270\321\205 \320\264\320\276\320\273\321\214\321\210\320\265 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\275"
                        "\320\276\320\263\320\276 \321\201\321\200\320\276\320\272\320\260. \320\255\321\202\320\276 \320\277\320\276\320\274\320\276\320\266\320\265\321\202 \320\277\321\200\320\265\320\264\320\276\321\202\320\262\321\200\320\260\321\202\320\270\321\202\321\214 \320\270\320\275\321\204\320\265\320\272\321\206\320\270\320\270 \320\270 \320\264\321\200\321\203\320\263\320\270\320\265 \320\277\321\200\320\276\320\261\320\273\320\265\320\274\321\213 \321\201\320\276 \320\267\321\200\320\265\320\275\320\270\320\265\320\274.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\225\321\201\320\273\320\270 \320\262\321\213 \320\267\320\260\320\274\320\265\321\202\320\270\320\273\320\270 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\262 \320\267\321\200\320\265\320\275\320\270\320\270, \321\202\320\260\320\272\320\270\320\265 \320\272\320\260\320\272 \321\200\320\260\320\267\320\274\321\213\321\202\320\276\321\201\321"
                        "\202\321\214, \320\277\320\276\321\217\320\262\320\273\320\265\320\275\320\270\320\265 \302\253\320\277\320\273\320\260\320\262\320\260\321\216\321\211\320\270\321\205\302\273 \320\277\321\217\321\202\320\265\320\275 \320\270\320\273\320\270 \320\262\321\201\320\277\321\213\321\210\320\265\320\272 \321\201\320\262\320\265\321\202\320\260, \320\275\320\265\320\274\320\265\320\264\320\273\320\265\320\275\320\275\320\276 \320\276\320\261\321\200\320\260\321\202\320\270\321\202\320\265\321\201\321\214 \320\272 \320\262\321\200\320\260\321\207\321\203. \320\240\320\260\320\275\320\275\320\265\320\265 \320\262\320\274\320\265\321\210\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276 \320\274\320\276\320\266\320\265\321\202 \320\277\321\200\320\265\320\264\320\276\321\202\320\262\321\200\320\260\321\202\320\270\321\202\321\214 \321\201\320\265\321\200\321\214\320\265\320\267\320\275\321\213\320\265 \320\276\321\201\320\273\320\276\320\266\320\275\320\265\320\275\320\270\321\217.</p>\n"
"<p style"
                        "=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\227\320\260\320\261\320\276\321\202\320\260 \320\276 \320\267\321\200\320\265\320\275\320\270\320\270 \320\264\320\273\321\217 \320\273\321\216\320\264\320\265\320\271 \321\201 \320\264\320\270\320\260\320\261\320\265\321\202\320\276\320\274 \342\200\224 \321\215\321\202\320\276 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\201\320\275\321\213\320\271 \320\277\321\200\320\276\321\206\320\265\321\201\321\201, \320\262\320\272\320\273\321\216\321\207\320\260\321\216\321\211\320\270\320\271 \321\200\320\265\320\263\321\203\320\273\321\217\321\200\320\275\321\213\320\265 \320\276\320\261\321\201\320\273\320\265\320\264\320\276\320\262\320\260\320\275\320\270\321\217, \320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\214 \321\203\321\200\320\276\320\262\320\275\321\217 \321\201\320\260\321\205\320\260\321\200\320\260 \320\270 \320\260\321\200\321\202\320\265\321\200\320\270"
                        "\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \320\264\320\260\320\262\320\273\320\265\320\275\320\270\321\217, \320\267\320\264\320\276\321\200\320\276\320\262\320\276\320\265 \320\277\320\270\321\202\320\260\320\275\320\270\320\265 \320\270 \320\267\320\260\321\211\320\270\321\202\321\203 \320\263\320\273\320\260\320\267 \320\276\321\202 \320\262\321\200\320\265\320\264\320\275\321\213\321\205 \321\204\320\260\320\272\321\202\320\276\321\200\320\276\320\262. \320\241\320\273\320\265\320\264\321\203\321\217 \321\215\321\202\320\270\320\274 \321\200\320\265\320\272\320\276\320\274\320\265\320\275\320\264\320\260\321\206\320\270\321\217\320\274, \320\274\320\276\320\266\320\275\320\276 \320\267\320\275\320\260\321\207\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \321\201\320\275\320\270\320\267\320\270\321\202\321\214 \321\200\320\270\321\201\320\272 \320\276\321\201\320\273\320\276\320\266\320\275\320\265\320\275\320\270\320\271 \320\270 \321\201\320\276\321\205\321\200\320\260\320\275\320"
                        "\270\321\202\321\214 \320\267\321\200\320\265\320\275\320\270\320\265 \320\275\320\260 \320\264\320\276\320\273\320\263\320\270\320\265 \320\263\320\276\320\264\321\213. \320\235\320\265 \320\267\320\260\320\261\321\213\320\262\320\260\320\271\321\202\320\265 \320\276 \320\262\320\260\320\266\320\275\320\276\321\201\321\202\320\270 \320\276\320\261\321\211\320\265\320\275\320\270\321\217 \321\201 \320\262\321\200\320\260\321\207\320\276\320\274 \320\270 \321\201\320\276\320\261\320\273\321\216\320\264\320\265\320\275\320\270\321\217 \320\262\321\201\320\265\321\205 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271 \320\264\320\273\321\217 \320\277\320\276\320\264\320\264\320\265\321\200\320\266\320\260\320\275\320\270\321\217 \320\267\320\264\320\276\321\200\320\276\320\262\321\214\321\217 \320\263\320\273\320\260\320\267.</p></body></html>", nullptr));
        zrenieBackButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(glazaTab), QCoreApplication::translate("MainWindow", "\320\267\321\200\320\265\320\275\320\270\320\265", nullptr));
        textEdit_7->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\244\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\321\217 \321\201\320\275\320\270\320\266\320\260\321\216\321\202 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \320\263\320\273\321\216\320\272\320\276\320\267\321\213 \320\262 \320\272\321\200\320\276\320\262\320\270 \320\267\320\260 "
                        "\321\201\321\207\320\265\321\202 \320\277\320\276\320\262\321\213\321\210\320\265\320\275\320\270\321\217 \320\265\321\221 \320\277\320\276\321\202\321\200\320\265\320\261\320\273\320\265\320\275\320\270\321\217 \320\272\320\273\320\265\321\202\320\272\320\260\320\274\320\270 \320\274\321\213\321\210\321\206 (\320\277\320\276\320\262\321\213\321\210\320\260\320\265\321\202\321\201\321\217 \321\207\321\203\320\262\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\272\320\273\320\265\321\202\320\276\320\272 \320\272 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\321\203). \320\237\321\200\320\270 \320\264\320\276\321\201\321\202\320\260\321\202\320\276\321\207\320\275\320\276\320\274 \321\203\321\200\320\276\320\262\320\275\320\265 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\260 \320\262 \320\272\321\200\320\276\320\262\320\270 \320\274\320\276\320\266\320\265\321\202 \321\203\320\262\320\265\320\273\320\270\321\207\320\270\321"
                        "\202\321\214\321\201\321\217 \321\200\320\270\321\201\320\272 \320\263\320\270\320\277\320\276\320\263\320\273\320\270\320\272\320\265\320\274\320\270\320\270. \320\225\321\201\320\273\320\270 \320\266\320\265 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\260 \320\275\320\265 \321\205\320\262\320\260\321\202\320\260\320\265\321\202, \320\277\320\276\321\201\320\273\320\265 \321\204\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\270\321\205 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\271 \321\201\320\260\321\205\320\260\321\200 \320\262 \320\272\321\200\320\276\320\262\320\270 \320\274\320\276\320\266\320\265\321\202 \320\264\320\260\320\266\320\265 \320\277\320\276\320\262\321\213\321\201\320\270\321\202\321\214\321\201\321\217. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\320\265\321\200\320\265\320\264 \320\275\320\260\321\207\320\260\320\273\320\276\320\274"
                        " \321\204\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\270\321\205 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\271 \321\200\320\265\320\272\320\276\320\274\320\265\320\275\320\264\321\203\320\265\321\202\321\201\321\217:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. \320\237\320\273\320\260\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262\321\200\320\265\320\274\321\217 \320\270 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214 \320\275\320\260\320\263\321\200\321\203\320\267\320\272\320\270 \320\267\320\260\321\200\320\260\320\275\320\265\320\265, \321\207\321\202\320\276\320\261\321\213 \321\201\320\276\320\263\320\273\320\260\321\201\320\276\320\262\320\260\321\202\321\214 \320\265\321\221 \321\201 \320\277\321\200\320\270\321\221\320\274\320\276\320\274 \320\277\320\270\321\211\320\270 \320\270 \320"
                        "\270\320\275\321\212\320\265\320\272\321\206\320\270\320\265\320\271 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\260. \320\227\320\260\320\275\320\270\320\274\320\260\321\202\321\214\321\201\321\217 \321\201\320\277\320\276\321\200\321\202\320\276\320\274 \321\205\320\276\321\200\320\276\321\210\320\276 \320\262 \321\202\320\265\321\207\320\265\320\275\320\270\320\265 1-2 \321\207\320\260\321\201\320\260 \320\277\320\276\321\201\320\273\320\265 \320\262\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\260 \320\272\320\276\321\200\320\276\321\202\320\272\320\276\320\263\320\276 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217. \320\225\321\201\320\273\320\270 \320\266\320\265 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\260 \320\275\320\260\321\207\320\270\320\275\320\260\320\265\321\202\321\201\321\217 \321\207\320\265\321\200\320\265\320\267 3 \321\207\320\260\321\201\320\260, \321"
                        "\201\320\273\320\265\320\264\321\203\320\265\321\202 \320\264\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \320\277\320\276\320\265\321\201\321\202\321\214.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. \320\237\320\265\321\200\320\265\320\264 \320\275\320\260\321\207\320\260\320\273\320\276\320\274 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\270 \320\277\321\200\320\276\320\262\320\265\321\200\321\214\321\202\320\265 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \320\263\320\273\321\216\320\272\320\276\320\267\321\213 \320\262 \320\272\321\200\320\276\320\262\320\270. \320\237\321\200\320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\270 \320\274\320\265\320\275\320\265\320\265 5 \320\274\320\274\320\276\320\273\321\214/\320\273 - \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \321"
                        "\201\321\212\320\265\321\201\321\202\321\214 \321\203\320\263\320\273\320\265\320\262\320\276\320\264\321\213 (1-2 \320\245\320\225). \320\225\321\201\320\273\320\270 \320\277\321\200\320\270 \321\215\321\202\320\276\320\274 \320\265\321\201\321\202\321\214 &quot;\320\263\320\276\320\273\320\276\320\264\320\275\321\213\320\265&quot; \320\272\320\265\321\202\320\276\320\275\321\213 \320\262 \320\274\320\276\321\207\320\265 - \321\201\321\202\320\276\320\270\321\202 \320\277\320\276\320\264\320\276\320\266\320\264\320\260\321\202\321\214, \320\277\320\276\320\272\320\260 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \320\263\320\273\321\216\320\272\320\276\320\267\321\213 \320\275\320\265 \320\277\320\276\320\264\320\275\320\270\320\274\320\265\321\202\321\201\321\217. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. \320\237\321\200\320\270 \320\277\320\276\320\272\320\260\320\267\320\260\321\202\320\265\320\273\320\265"
                        " \321\201\320\260\321\205\320\260\321\200\320\260 \320\262 \320\272\321\200\320\276\320\262\320\270 \320\261\320\276\320\273\320\265\320\265 15 \320\274\320\274\320\276\320\273\321\214/\320\273 \320\277\321\200\320\276\320\262\320\265\321\200\321\214\321\202\320\265 \320\272\320\265\321\202\320\276\320\275\321\213. \320\225\321\201\320\273\320\270 \320\270\321\205 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \320\277\320\276\320\262\321\213\321\210\320\265\320\275, \321\202\320\276 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\262\320\262\320\265\321\201\321\202\320\270 0,05-0,1 \320\225\320\224/\320\272\320\263 \320\262\320\265\321\201\320\260 &quot;\320\272\320\276\321\200\320\276\321\202\320\272\320\276\320\263\320\276&quot; \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\260 \320\264\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \320\270 \320\277\320\276\320\264\320\276\320\266\320\264\320\260"
                        "\321\202\321\214 1-2 \321\207\320\260\321\201\320\260.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. \320\235\320\260 \320\272\320\260\320\266\320\264\321\213\320\265 30 \320\274\320\270\320\275\321\203\321\202 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\270 \320\222\320\260\320\274 \320\277\320\276\320\275\320\260\320\264\320\276\320\261\321\217\321\202\321\201\321\217 \320\264\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\276 1-2 \320\245\320\225. \320\222\320\276 \320\262\321\200\320\265\320\274\321\217 \320\270 \320\277\320\276\321\201\320\273\320\265 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\270 \320\276\320\261\321\217\320\267\320\260\321\202\320\265\320\273\321\214\320\275\320\276 \320\270\320\267\320\274\320\265\321\200\321\217\320\271\321\202\320\265 \321\201\320\260\321\205\320\260\321\200 \320\262 \320\272"
                        "\321\200\320\276\320\262\320\270, \321\207\321\202\320\276\320\261\321\213 \320\262\321\213\321\217\321\201\320\275\320\270\321\202\321\214 \321\201\320\262\320\276\321\216 \320\270\320\275\320\264\320\270\320\262\320\270\320\264\321\203\320\260\320\273\321\214\320\275\321\203\321\216 \320\277\320\276\321\202\321\200\320\265\320\261\320\275\320\276\321\201\321\202\321\214 \320\262 \321\203\320\263\320\273\320\265\320\262\320\276\320\264\320\260\321\205.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5. \320\241\320\273\320\265\320\264\321\203\320\265\321\202 \321\203\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214 \320\262\320\262\320\276\320\264\320\270\320\274\321\213\320\265 \320\277\320\276\321\201\320\273\320\265 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\270 \320\264\320\276\320\267\321\213 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\260 - \320\275\320\260 1"
                        "-2 \320\225\320\224 \320\277\320\265\321\200\320\265\320\264 \320\265\320\264\320\276\320\271 \320\270 \320\275\320\260 1-2 \320\225\320\224 \320\275\320\260 \320\275\320\276\321\207\321\214. \320\225\321\201\320\273\320\270 \320\222\321\213 \320\267\320\260\320\275\320\270\320\274\320\260\320\265\321\202\320\265\321\201\321\214 \321\201\320\277\320\276\321\200\321\202\320\276\320\274 \321\200\320\265\320\263\321\203\320\273\321\217\321\200\320\275\320\276, \321\202\320\276 \321\202\320\260\320\272\320\276\320\265 \321\201\320\275\320\270\320\266\320\265\320\275\320\270\320\265 \320\264\320\276\320\267\321\213 \320\274\320\276\320\266\320\265\321\202 \320\270 \320\275\320\265 \320\277\320\276\320\275\320\260\320\264\320\276\320\261\320\270\321\202\321\214\321\201\321\217.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. \320\225\321\201\320\273\320\270 \320\222\321\213 \321\205\320\276\321\202\320\270\321\202\320\265 \320\277\320"
                        "\276\321\205\321\203\320\264\320\265\321\202\321\214, \321\202\320\276 \320\262\320\274\320\265\321\201\321\202\320\276 \320\264\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\263\320\276 \320\277\321\200\320\270\321\221\320\274\320\260 \320\277\320\270\321\211\320\270 \321\201\320\273\320\265\320\264\321\203\320\265\321\202 \321\201\320\275\320\270\320\266\320\260\321\202\321\214 \320\262\320\262\320\276\320\264\320\270\320\274\321\203\321\216 \320\264\320\276\320\267\321\203 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\260.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        sportBackButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(sportTab), QCoreApplication::translate("MainWindow", "\321\201\320\277\320\276\321\200\321\202", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(teory), QCoreApplication::translate("MainWindow", "\320\242\320\265\320\276\321\200\320\270\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(profile), QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        diaryButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\275\320\265\320\262\320\275\320\270\320\272", nullptr));
        historyButton->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217", nullptr));
        teoryButton->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\276\321\200\320\270\321\217", nullptr));
        profileButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
