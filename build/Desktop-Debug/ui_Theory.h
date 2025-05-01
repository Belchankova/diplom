/********************************************************************************
** Form generated from reading UI file 'Theory.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEORY_H
#define UI_THEORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Theory
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *menuPage;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QFormLayout *formLayout_3;
    QPushButton *TheoryHistButton;
    QPushButton *TheoryGiperButton;
    QPushButton *TheoryGlazaButton;
    QPushButton *TheoryXEButton;
    QPushButton *TheorySportButton;
    QPushButton *TheoryGipoButton;

    void setupUi(QWidget *Theory)
    {
        if (Theory->objectName().isEmpty())
            Theory->setObjectName("Theory");
        Theory->resize(782, 986);
        Theory->setStyleSheet(QString::fromUtf8("background-color: rgb(113, 121, 171);\n"
""));
        verticalLayout = new QVBoxLayout(Theory);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(Theory);
        stackedWidget->setObjectName("stackedWidget");
        menuPage = new QWidget();
        menuPage->setObjectName("menuPage");
        verticalLayout_2 = new QVBoxLayout(menuPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_2 = new QFrame(menuPage);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("border:none;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        formLayout_3 = new QFormLayout(frame_2);
        formLayout_3->setObjectName("formLayout_3");
        TheoryHistButton = new QPushButton(frame_2);
        TheoryHistButton->setObjectName("TheoryHistButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TheoryHistButton->sizePolicy().hasHeightForWidth());
        TheoryHistButton->setSizePolicy(sizePolicy);
        TheoryHistButton->setMinimumSize(QSize(150, 150));
        TheoryHistButton->setMaximumSize(QSize(150, 150));
        TheoryHistButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix1/hist.PNG);"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, TheoryHistButton);

        TheoryGiperButton = new QPushButton(frame_2);
        TheoryGiperButton->setObjectName("TheoryGiperButton");
        sizePolicy.setHeightForWidth(TheoryGiperButton->sizePolicy().hasHeightForWidth());
        TheoryGiperButton->setSizePolicy(sizePolicy);
        TheoryGiperButton->setMinimumSize(QSize(150, 150));
        TheoryGiperButton->setMaximumSize(QSize(150, 150));
        TheoryGiperButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix1/giper.PNG);"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, TheoryGiperButton);

        TheoryGlazaButton = new QPushButton(frame_2);
        TheoryGlazaButton->setObjectName("TheoryGlazaButton");
        sizePolicy.setHeightForWidth(TheoryGlazaButton->sizePolicy().hasHeightForWidth());
        TheoryGlazaButton->setSizePolicy(sizePolicy);
        TheoryGlazaButton->setMinimumSize(QSize(150, 150));
        TheoryGlazaButton->setMaximumSize(QSize(150, 150));
        TheoryGlazaButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix1/glaza.PNG);"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, TheoryGlazaButton);

        TheoryXEButton = new QPushButton(frame_2);
        TheoryXEButton->setObjectName("TheoryXEButton");
        sizePolicy.setHeightForWidth(TheoryXEButton->sizePolicy().hasHeightForWidth());
        TheoryXEButton->setSizePolicy(sizePolicy);
        TheoryXEButton->setMinimumSize(QSize(150, 150));
        TheoryXEButton->setMaximumSize(QSize(150, 150));
        TheoryXEButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix1/hleb.PNG);"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, TheoryXEButton);

        TheorySportButton = new QPushButton(frame_2);
        TheorySportButton->setObjectName("TheorySportButton");
        sizePolicy.setHeightForWidth(TheorySportButton->sizePolicy().hasHeightForWidth());
        TheorySportButton->setSizePolicy(sizePolicy);
        TheorySportButton->setMinimumSize(QSize(150, 150));
        TheorySportButton->setMaximumSize(QSize(150, 150));
        TheorySportButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix1/sport.PNG);"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, TheorySportButton);

        TheoryGipoButton = new QPushButton(frame_2);
        TheoryGipoButton->setObjectName("TheoryGipoButton");
        sizePolicy.setHeightForWidth(TheoryGipoButton->sizePolicy().hasHeightForWidth());
        TheoryGipoButton->setSizePolicy(sizePolicy);
        TheoryGipoButton->setMinimumSize(QSize(150, 150));
        TheoryGipoButton->setMaximumSize(QSize(150, 150));
        TheoryGipoButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix1/gipo.PNG);"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, TheoryGipoButton);


        verticalLayout_2->addWidget(frame_2, 0, Qt::AlignmentFlag::AlignHCenter);

        stackedWidget->addWidget(menuPage);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(Theory);

        QMetaObject::connectSlotsByName(Theory);
    } // setupUi

    void retranslateUi(QWidget *Theory)
    {
        Theory->setWindowTitle(QCoreApplication::translate("Theory", "Form", nullptr));
        TheoryHistButton->setText(QString());
        TheoryGiperButton->setText(QString());
        TheoryGlazaButton->setText(QString());
        TheoryXEButton->setText(QString());
        TheorySportButton->setText(QString());
        TheoryGipoButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Theory: public Ui_Theory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEORY_H
