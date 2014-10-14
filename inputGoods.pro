#-------------------------------------------------
#
# Project created by QtCreator 2014-07-27T20:34:52
#
#-------------------------------------------------

QT       += core

QT +=gui
QT          += sql
QT += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = inputGoods
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    searchpost.cpp \
    dbsingl.cpp \
    listorg.cpp \
    params.cpp \
    vvsresult.cpp \
    vsite.cpp \
    Products/listelem.cpp \
    Products/products.cpp \
    tolatin.cpp

    tolatin.cpp

HEADERS  += mainwindow.h \
    searchpost.h \
    dbsingl.h \
    listorg.h \
    params.h \
    vvsresult.h \
    vsite.h \
    Products/listelem.h \
    Products/products.h \
    toLatin.h

    tolatin.h

FORMS    += mainwindow.ui \
        searchpost.ui
