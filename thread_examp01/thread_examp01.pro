TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11
CONFIG += lpthread

QMAKE_CXXFLAGS += -std=c++11 -lpthread
LIBS += -pthread

SOURCES += \
    thread_examp01.cpp

include(deployment.pri)
qtcAddDeployment()

