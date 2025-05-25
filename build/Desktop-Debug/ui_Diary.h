/********************************************************************************
** Form generated from reading UI file 'Diary.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIARY_H
#define UI_DIARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Diary
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QTextEdit *sugar;
    QTextEdit *he;
    QTextEdit *insulin;
    QTextEdit *food;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *save;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QWidget *logo;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Diary)
    {
        if (Diary->objectName().isEmpty())
            Diary->setObjectName("Diary");
        Diary->resize(782, 484);
        Diary->setStyleSheet(QString::fromUtf8("background-color: rgb(113, 121, 171);"));
        verticalLayout_2 = new QVBoxLayout(Diary);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 68, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(118, 48, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        sugar = new QTextEdit(Diary);
        sugar->setObjectName("sugar");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sugar->sizePolicy().hasHeightForWidth());
        sugar->setSizePolicy(sizePolicy);
        sugar->setMinimumSize(QSize(300, 40));
        sugar->setMaximumSize(QSize(16777215, 40));
        sugar->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::ArrowCursor)));
        sugar->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);\n"
"border-radius: 20px;\n"
"padding-top: 5px;"));

        verticalLayout->addWidget(sugar);

        he = new QTextEdit(Diary);
        he->setObjectName("he");
        sizePolicy.setHeightForWidth(he->sizePolicy().hasHeightForWidth());
        he->setSizePolicy(sizePolicy);
        he->setMinimumSize(QSize(300, 40));
        he->setMaximumSize(QSize(16777215, 40));
        he->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);\n"
"border-radius: 20px;\n"
"padding-top: 5px;"));

        verticalLayout->addWidget(he);

        insulin = new QTextEdit(Diary);
        insulin->setObjectName("insulin");
        sizePolicy.setHeightForWidth(insulin->sizePolicy().hasHeightForWidth());
        insulin->setSizePolicy(sizePolicy);
        insulin->setMinimumSize(QSize(300, 40));
        insulin->setMaximumSize(QSize(16777215, 40));
        insulin->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);\n"
"border-radius: 20px;\n"
"padding-top: 5px;"));

        verticalLayout->addWidget(insulin);

        food = new QTextEdit(Diary);
        food->setObjectName("food");
        sizePolicy.setHeightForWidth(food->sizePolicy().hasHeightForWidth());
        food->setSizePolicy(sizePolicy);
        food->setMinimumSize(QSize(300, 40));
        food->setMaximumSize(QSize(16777215, 40));
        food->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);\n"
"border-radius: 20px;\n"
"padding-top: 5px;"));

        verticalLayout->addWidget(food);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(118, 48, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        save = new QPushButton(Diary);
        save->setObjectName("save");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(save->sizePolicy().hasHeightForWidth());
        save->setSizePolicy(sizePolicy1);
        save->setStyleSheet(QString::fromUtf8("/*QPushButton{ background-color: rgb(76, 175, 80);\n"
"color: white;\n"
"border: none;\n"
"border-radius: 8px;\n"
"padding : 8px 16 px;\n"
"font-size: 16 px;}\n"
"QPushButton: hover {\n"
"	background-color: rgb(69, 160, 73);}\n"
"QPushButton: pressed {\n"
"	background-color: rgb(62, 142, 65);}\n"
"text-align: center;*/\n"
"QPushButton{ background-color: rgb(76, 175, 80);\n"
"color: black;}"));

        horizontalLayout_2->addWidget(save);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        logo = new QWidget(Diary);
        logo->setObjectName("logo");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy2);
        logo->setMinimumSize(QSize(300, 100));
        logo->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/new/prefix3/IMG_4398-removebg-preview.png);"));

        horizontalLayout_3->addWidget(logo);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 56, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(Diary);

        QMetaObject::connectSlotsByName(Diary);
    } // setupUi

    void retranslateUi(QWidget *Diary)
    {
        Diary->setWindowTitle(QCoreApplication::translate("Diary", "Form", nullptr));
        sugar->setPlaceholderText(QCoreApplication::translate("Diary", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \320\263\320\273\321\216\320\272\320\276\320\267\321\213", nullptr));
        he->setPlaceholderText(QCoreApplication::translate("Diary", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\245\320\225", nullptr));
        insulin->setPlaceholderText(QCoreApplication::translate("Diary", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\270\320\275\321\201\321\203\320\273\320\270\320\275\320\260", nullptr));
        food->setPlaceholderText(QCoreApplication::translate("Diary", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\203\320\277\320\276\321\202\321\200\320\265\320\261\320\273\321\217\320\265\320\274\321\213\320\265 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\321\213", nullptr));
        save->setText(QCoreApplication::translate("Diary", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Diary: public Ui_Diary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIARY_H
