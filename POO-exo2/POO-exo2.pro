TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -L /amuhome/l17002876/POO-exo2/ -lUtil

SOURCES += \
        main.cpp \
    CException.cpp \
    IEditable.cpp

HEADERS += \
    CException.h \
    CstCodErr.h \
    IEditable.h
