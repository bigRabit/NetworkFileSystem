/****************************************************************************
** Meta object code from reading C++ file 'networkfilesystem.h'
**
** Created: Fri Aug 28 10:57:05 2015
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../networkfilesystem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkfilesystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetworkFileSystem[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      23,   18,   19,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NetworkFileSystem[] = {
    "NetworkFileSystem\0\0int\0"
    "replyFinished(QNetworkReply*)\0"
};

const QMetaObject NetworkFileSystem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NetworkFileSystem,
      qt_meta_data_NetworkFileSystem, 0 }
};

const QMetaObject *NetworkFileSystem::metaObject() const
{
    return &staticMetaObject;
}

void *NetworkFileSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkFileSystem))
	return static_cast<void*>(const_cast< NetworkFileSystem*>(this));
    return QWidget::qt_metacast(_clname);
}

int NetworkFileSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { int _r = replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
