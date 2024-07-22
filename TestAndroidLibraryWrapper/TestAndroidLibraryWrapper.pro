#-------------------------------------------------
#  Copyright 2024 ESRI
#
#  All rights reserved under the copyright laws of the United States
#  and applicable international laws, treaties, and conventions.
#
#  You may freely redistribute and use this sample code, with or
#  without modification, provided you include the original copyright
#  notice and use restrictions.
#
#  See the Sample code usage restrictions document for further information.
#-------------------------------------------------

TEMPLATE = app

CONFIG += c++17

QT += qml quick

TARGET = TestAndroidLibraryWrapper

HEADERS += \
    TestAndroidLibraryWrapper.h

SOURCES += \
    main.cpp \
    TestAndroidLibraryWrapper.cpp

INCLUDEPATH += ../

LIBS += -L/path/to/library -lQtAndroidLibraryWrapper_arm64-v8a

ANDROID_EXTRA_LIBS += /path/to/library/libQtAndroidLibraryWrapper_arm64-v8a.so

RESOURCES += \
    qml/qml.qrc

#-------------------------------------------------------------------------------

