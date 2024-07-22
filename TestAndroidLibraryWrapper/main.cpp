// Copyright 2024 ESRI
//
// All rights reserved under the copyright laws of the United States
// and applicable international laws, treaties, and conventions.
//
// You may freely redistribute and use this sample code, with or
// without modification, provided you include the original copyright
// notice and use restrictions.
//
// See the Sample code usage restrictions document for further information.
//

#include "TestAndroidLibraryWrapper.h"

#include <QDir>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

//------------------------------------------------------------------------------


int main(int argc, char *argv[])
{
  QGuiApplication app(argc, argv);

  qmlRegisterType<TestAndroidLibraryWrapper>("TestAndroidLibraryWrapper", 1, 0, "TestAndroidLibraryWrapper");

  QQmlApplicationEngine engine;

  engine.addImportPath(QDir(QCoreApplication::applicationDirPath()).filePath("qml"));

  engine.load(QUrl("qrc:/qml/main.qml"));

  return app.exec();
}

//------------------------------------------------------------------------------
