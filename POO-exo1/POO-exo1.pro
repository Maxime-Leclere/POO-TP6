TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    CException.cpp \
    IEditable.cpp

HEADERS += \
    CException.h \
    CstCodErr.h \
    IEditable.h
