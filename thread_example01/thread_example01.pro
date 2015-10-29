TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

QMAKE_CXXFLAGS += -lpthread
LIBS += -lpthread

SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()

