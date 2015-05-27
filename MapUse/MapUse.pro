TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

CONFIG += c++11

SOURCES += \
    map_useful_main.cpp

include(deployment.pri)
qtcAddDeployment()

