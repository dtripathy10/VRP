#-------------------------------------------------
#
# Project created by QtCreator 2014-08-07T13:45:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VRP
TEMPLATE = app


SOURCES += main.cpp\
        app.cpp \
    dialog.cpp

HEADERS  += app.h \
    dialog.h

FORMS    += app.ui \
    dialog.ui

MOC_DIR = ../.obj/