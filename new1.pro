TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -ludev

SOURCES += main.cpp \
    CKeyCode.cpp \
    CPeripherals.cpp

HEADERS += \
    CKeyCode.h \
    CPeripherals.h

