#include "QtAndroidLibraryWrapper.h"
#include <QJniObject>
#include <QObject>
#include <QCoreApplication>
#include <QtConcurrent/QtConcurrent>

QtAndroidLibraryWrapper::QtAndroidLibraryWrapper()
{
}

void QtAndroidLibraryWrapper::testFunction()
{
  qDebug() << "QtAndroidLibraryWrapper::testFunction()";
}

void QtAndroidLibraryWrapper::createContext()
{
  qDebug() << "QtAndroidLibraryWrapper::totalMemory()";
  QNativeInterface::QAndroidApplication::context();
  qDebug() << "QtAndroidLibraryWrapper::totalMemory() finished";
}

