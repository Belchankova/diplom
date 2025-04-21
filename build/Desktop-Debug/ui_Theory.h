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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Theory
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QPushButton *TheoryHistButton;
    QPushButton *TheoryGipoButton;
    QPushButton *TheoryGiperButton;
    QPushButton *TheoryGlazaButton;
    QPushButton *TheoryXEButton;
    QPushButton *TheorySportButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Theory)
    {
        if (Theory->objectName().isEmpty())
            Theory->setObjectName("Theory");
        Theory->resize(782, 484);
        Theory->setStyleSheet(QString::fromUtf8("background-color: rgb(113, 121, 171);\n"
""));
        horizontalLayout_2 = new QHBoxLayout(Theory);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        TheoryHistButton = new QPushButton(Theory);
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

        formLayout->setWidget(0, QFormLayout::LabelRole, TheoryHistButton);

        TheoryGipoButton = new QPushButton(Theory);
        TheoryGipoButton->setObjectName("TheoryGipoButton");
        sizePolicy.setHeightForWidth(TheoryGipoButton->sizePolicy().hasHeightForWidth());
        TheoryGipoButton->setSizePolicy(sizePolicy);
        TheoryGipoButton->setMinimumSize(QSize(150, 150));
        TheoryGipoButton->setMaximumSize(QSize(150, 150));
        TheoryGipoButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix1/gipo.PNG);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, TheoryGipoButton);

        TheoryGiperButton = new QPushButton(Theory);
        TheoryGiperButton->setObjectName("TheoryGiperButton");
        sizePolicy.setHeightForWidth(TheoryGiperButton->sizePolicy().hasHeightForWidth());
        TheoryGiperButton->setSizePolicy(sizePolicy);
        TheoryGiperButton->setMinimumSize(QSize(150, 150));
        TheoryGiperButton->setMaximumSize(QSize(150, 150));
        TheoryGiperButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix1/giper.PNG);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, TheoryGiperButton);

        TheoryGlazaButton = new QPushButton(Theory);
        TheoryGlazaButton->setObjectName("TheoryGlazaButton");
        sizePolicy.setHeightForWidth(TheoryGlazaButton->sizePolicy().hasHeightForWidth());
        TheoryGlazaButton->setSizePolicy(sizePolicy);
        TheoryGlazaButton->setMinimumSize(QSize(150, 150));
        TheoryGlazaButton->setMaximumSize(QSize(150, 150));
        TheoryGlazaButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix1/glaza.PNG);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, TheoryGlazaButton);

        TheoryXEButton = new QPushButton(Theory);
        TheoryXEButton->setObjectName("TheoryXEButton");
        sizePolicy.setHeightForWidth(TheoryXEButton->sizePolicy().hasHeightForWidth());
        TheoryXEButton->setSizePolicy(sizePolicy);
        TheoryXEButton->setMinimumSize(QSize(150, 150));
        TheoryXEButton->setMaximumSize(QSize(150, 150));
        TheoryXEButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix1/hleb.PNG);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, TheoryXEButton);

        TheorySportButton = new QPushButton(Theory);
        TheorySportButton->setObjectName("TheorySportButton");
        sizePolicy.setHeightForWidth(TheorySportButton->sizePolicy().hasHeightForWidth());
        TheorySportButton->setSizePolicy(sizePolicy);
        TheorySportButton->setMinimumSize(QSize(150, 150));
        TheorySportButton->setMaximumSize(QSize(150, 150));
        TheorySportButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 20px;\n"
"background-image: url(:/new/prefix1/sport.PNG);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, TheorySportButton);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(Theory);

        QMetaObject::connectSlotsByName(Theory);
    } // setupUi

    void retranslateUi(QWidget *Theory)
    {
        Theory->setWindowTitle(QCoreApplication::translate("Theory", "Form", nullptr));
        TheoryHistButton->setText(QString());
        TheoryGipoButton->setText(QString());
        TheoryGiperButton->setText(QString());
        TheoryGlazaButton->setText(QString());
        TheoryXEButton->setText(QString());
        TheorySportButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Theory: public Ui_Theory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEORY_H
