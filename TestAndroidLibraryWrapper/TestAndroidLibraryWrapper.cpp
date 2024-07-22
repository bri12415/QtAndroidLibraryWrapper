#include "TestAndroidLibraryWrapper.h"
#include "QtAndroidLibraryWrapper.h"

#include <QJniObject>
#include <QCoreApplication>

TestAndroidLibraryWrapper::TestAndroidLibraryWrapper(QObject* parent /* = nullptr */):
  QObject(parent)
{
  auto* wrapper = new QtAndroidLibraryWrapper();
  wrapper->testFunction();
  wrapper->createContext();
}

TestAndroidLibraryWrapper::~TestAndroidLibraryWrapper()
{
}
