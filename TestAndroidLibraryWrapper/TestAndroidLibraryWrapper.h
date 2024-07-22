#ifndef TestAndroidLibraryWrapper_H
#define TestAndroidLibraryWrapper_H

#include <QObject>

class TestAndroidLibraryWrapper : public QObject
{
    Q_OBJECT

  public:
    explicit TestAndroidLibraryWrapper(QObject* parent = nullptr);
    ~TestAndroidLibraryWrapper() override;
};

#endif // TestAndroidLibraryWrapper_H
