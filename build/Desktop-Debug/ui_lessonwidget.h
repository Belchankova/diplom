/********************************************************************************
** Form generated from reading UI file 'lessonwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LESSONWIDGET_H
#define UI_LESSONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LessonWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *backPushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *LessonWidget)
    {
        if (LessonWidget->objectName().isEmpty())
            LessonWidget->setObjectName("LessonWidget");
        LessonWidget->resize(681, 564);
        verticalLayout = new QVBoxLayout(LessonWidget);
        verticalLayout->setObjectName("verticalLayout");
        textBrowser = new QTextBrowser(LessonWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(textBrowser);

        frame = new QFrame(LessonWidget);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("border: none;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        backPushButton = new QPushButton(frame);
        backPushButton->setObjectName("backPushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backPushButton->sizePolicy().hasHeightForWidth());
        backPushButton->setSizePolicy(sizePolicy);
        backPushButton->setMinimumSize(QSize(60, 30));
        backPushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix3/Untitled_design-removebg-preview.png);\n"
"background-color: rgb(255, 120, 0);\n"
"border-radius: 10px;\n"
"pressed: rgb(255, 163, 72);\n"
""));

        horizontalLayout->addWidget(backPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(frame);


        retranslateUi(LessonWidget);

        QMetaObject::connectSlotsByName(LessonWidget);
    } // setupUi

    void retranslateUi(QWidget *LessonWidget)
    {
        LessonWidget->setWindowTitle(QCoreApplication::translate("LessonWidget", "Form", nullptr));
        backPushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LessonWidget: public Ui_LessonWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LESSONWIDGET_H
