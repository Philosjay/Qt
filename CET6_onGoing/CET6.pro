#-------------------------------------------------
#
# Project created by QtCreator 2017-05-07T10:31:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CET6
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Stu.cpp \
    searchpage.cpp \
    editpage.cpp \
    editwizard.cpp \
    listdialog.cpp \
    infodialog.cpp \
    calcudialog.cpp \
    adddialog.cpp \
    setwritingdialog.cpp

HEADERS  += mainwindow.h \
    CET6.h \
    Stu.h \
    searchpage.h \
    editpage.h \
    editwizard.h \
    listdialog.h \
    infodialog.h \
    calcudialog.h \
    adddialog.h \
    setwritingdialog.h

FORMS    += mainwindow.ui \
    searchpage.ui \
    editpage.ui \
    editwizard.ui \
    listdialog.ui \
    infodialog.ui \
    calcudialog.ui \
    adddialog.ui \
    setwritingdialog.ui

RESOURCES += \
    icon.qrc

DISTFILES += \
    ../../www.ico.la_89909ee08938cc372ff9f1cb1399e218_128X128.ico


RC_FILE = 1.rc
