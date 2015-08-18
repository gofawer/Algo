TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += \
    thread_mutex01.cpp

include(deployment.pri)
qtcAddDeployment()

