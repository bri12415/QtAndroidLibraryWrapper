#ifndef QtAndroidLibraryWrapper_GLOBAL_H
#define QtAndroidLibraryWrapper_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QtAndroidLibraryWrapper_LIBRARY)
#  define QtAndroidLibraryWrapper_EXPORT Q_DECL_EXPORT
#else
#  define QtAndroidLibraryWrapper_EXPORT Q_DECL_IMPORT
#endif

#endif // QtAndroidLibraryWrapper_GLOBAL_H
