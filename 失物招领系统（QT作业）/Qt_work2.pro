#-------------------------------------------------
#
# Project created by QtCreator 2022-06-12T17:17:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QT_work2
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    from.cpp \
    release.cpp \
    release_2.cpp \
    release_3.cpp \
    person_interface.cpp \
    lost.cpp \
    find_t.cpp

HEADERS  += widget.h \
    from.h \
    release.h \
    release_2.h \
    release_3.h \
    person_interface.h \
    lost.h \
    find_t.h

FORMS    += widget.ui \
    from.ui \
    release.ui \
    release_2.ui \
    release_3.ui \
    person_interface.ui

RESOURCES += \
    picture.qrc
