QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

PKGCONFIG += protobuf

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp
