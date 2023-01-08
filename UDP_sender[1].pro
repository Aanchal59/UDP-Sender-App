QT       += core gui xml network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET    = UDP_Sender
TEMPLATE  = app

DESTDIR = $$_PRO_FILE_PWD_
CONFIG += object_parallel_to_source

HEADERS += \
    UI.h

SOURCES += \
    UI.cpp \
    main.cpp

FORMS += \
    UI.ui
