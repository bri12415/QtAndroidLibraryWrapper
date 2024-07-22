QT += core gui

TEMPLATE = lib

DEFINES += QtAndroidLibraryWrapper_LIBRARY

CONFIG += c++17

SOURCES += \
    QtAndroidLibraryWrapper.cpp

HEADERS += \
    QtAndroidLibraryWrapper_global.h \
    QtAndroidLibraryWrapper.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}

!isEmpty(target.path): INSTALLS += target
