/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.2.1
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtCore/qglobal.h>

static const unsigned char qt_resource_data[] = {
  // /home/calmhandtitan/qt/TextFinder/input.txt
  0x0,0x0,0x0,0x2b,
  0x48,
  0x65,0x6c,0x6c,0x6f,0x20,0x74,0x68,0x69,0x73,0x20,0x69,0x73,0x20,0x6d,0x79,0x20,
  0x66,0x69,0x72,0x73,0x74,0x20,0x43,0x2b,0x2b,0x20,0x51,0x74,0x20,0x61,0x70,0x70,
  0x6c,0x69,0x63,0x61,0x74,0x69,0x6f,0x6e,0x2e,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // input.txt
  0x0,0x9,
  0x7,0xc7,0xbb,0x54,
  0x0,0x69,
  0x0,0x6e,0x0,0x70,0x0,0x75,0x0,0x74,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/input.txt
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

QT_BEGIN_NAMESPACE

extern Q_CORE_EXPORT bool qRegisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

extern Q_CORE_EXPORT bool qUnregisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

QT_END_NAMESPACE


int QT_MANGLE_NAMESPACE(qInitResources_textFinder)()
{
    QT_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_textFinder))

int QT_MANGLE_NAMESPACE(qCleanupResources_textFinder)()
{
    QT_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_DESTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qCleanupResources_textFinder))

