/****************************************************************************
** Meta object code from reading C++ file 'batterywatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/batterywatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batterywatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BatteryWatcher_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatteryWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatteryWatcher_t qt_meta_stringdata_BatteryWatcher = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BatteryWatcher"
QT_MOC_LITERAL(1, 15, 14), // "batteryChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "settingsChanged"
QT_MOC_LITERAL(4, 47, 14), // "onPauseTimeout"
QT_MOC_LITERAL(5, 62, 8), // "setPause"
QT_MOC_LITERAL(6, 71, 15), // "TrayIcon::PAUSE"
QT_MOC_LITERAL(7, 87, 8) // "duration"

    },
    "BatteryWatcher\0batteryChanged\0\0"
    "settingsChanged\0onPauseTimeout\0setPause\0"
    "TrayIcon::PAUSE\0duration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatteryWatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void BatteryWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BatteryWatcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->batteryChanged(); break;
        case 1: _t->settingsChanged(); break;
        case 2: _t->onPauseTimeout(); break;
        case 3: _t->setPause((*reinterpret_cast< TrayIcon::PAUSE(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BatteryWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<Watcher::staticMetaObject>(),
    qt_meta_stringdata_BatteryWatcher.data,
    qt_meta_data_BatteryWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BatteryWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatteryWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BatteryWatcher.stringdata0))
        return static_cast<void*>(this);
    return Watcher::qt_metacast(_clname);
}

int BatteryWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Watcher::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
