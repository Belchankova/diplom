/********************************************************************************
** Form generated from reading UI file 'RegisterWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLineEdit *loginRegister;
    QLineEdit *passwordRegister;
    QLineEdit *confirmPasswordRegister;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *registerButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(800, 600);
        RegisterWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(113, 121, 171);"));
        verticalLayout_2 = new QVBoxLayout(RegisterWindow);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label = new QLabel(RegisterWindow);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 163, 72);\n"
"border-color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        loginRegister = new QLineEdit(RegisterWindow);
        loginRegister->setObjectName("loginRegister");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginRegister->sizePolicy().hasHeightForWidth());
        loginRegister->setSizePolicy(sizePolicy1);
        loginRegister->setMinimumSize(QSize(300, 40));
        loginRegister->setMaximumSize(QSize(16777215, 40));
        loginRegister->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
""));

        verticalLayout->addWidget(loginRegister);

        passwordRegister = new QLineEdit(RegisterWindow);
        passwordRegister->setObjectName("passwordRegister");
        sizePolicy1.setHeightForWidth(passwordRegister->sizePolicy().hasHeightForWidth());
        passwordRegister->setSizePolicy(sizePolicy1);
        passwordRegister->setMinimumSize(QSize(300, 40));
        passwordRegister->setMaximumSize(QSize(16777215, 40));
        passwordRegister->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
""));

        verticalLayout->addWidget(passwordRegister);

        confirmPasswordRegister = new QLineEdit(RegisterWindow);
        confirmPasswordRegister->setObjectName("confirmPasswordRegister");
        sizePolicy1.setHeightForWidth(confirmPasswordRegister->sizePolicy().hasHeightForWidth());
        confirmPasswordRegister->setSizePolicy(sizePolicy1);
        confirmPasswordRegister->setMinimumSize(QSize(300, 40));
        confirmPasswordRegister->setMaximumSize(QSize(16777215, 40));
        confirmPasswordRegister->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 10px;"));
        confirmPasswordRegister->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(confirmPasswordRegister);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        registerButton = new QPushButton(RegisterWindow);
        registerButton->setObjectName("registerButton");
        registerButton->setStyleSheet(QString::fromUtf8("QPushButton{ background-color: rgb(255, 163, 72);\n"
"color: black;}"));

        horizontalLayout_2->addWidget(registerButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        widget = new QWidget(RegisterWindow);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(300, 100));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix3/IMG_4398-removebg-preview.png);"));

        horizontalLayout_4->addWidget(widget);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 124, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QWidget *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "DiaBelka", nullptr));
        label->setText(QCoreApplication::translate("RegisterWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        loginRegister->setPlaceholderText(QCoreApplication::translate("RegisterWindow", "\320\232\320\260\320\272 \320\222\320\260\321\201 \320\267\320\276\320\262\321\203\321\202?", nullptr));
        passwordRegister->setPlaceholderText(QCoreApplication::translate("RegisterWindow", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\275\320\260\320\264\321\221\320\266\320\275\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        confirmPasswordRegister->setPlaceholderText(QCoreApplication::translate("RegisterWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        registerButton->setText(QCoreApplication::translate("RegisterWindow", "\320\223\320\276\321\202\320\276\320\262\320\276!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
