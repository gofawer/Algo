TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    SkyMap_main.cpp

include(deployment.pri)
qtcAddDeployment()

