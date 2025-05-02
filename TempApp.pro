QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QT += sql

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Diary.cpp \
    History.cpp \
    Profile.cpp \
    Theory.cpp \
    lessonwidget.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Diary.h \
    History.h \
    Profile.h \
    Theory.h \
    lessonwidget.h \
    mainwindow.h

FORMS += \
    Diary.ui \
    History.ui \
    Profile.ui \
    Theory.ui \
    lessonwidget.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pictures.qrc \
    textfiles.qrc

