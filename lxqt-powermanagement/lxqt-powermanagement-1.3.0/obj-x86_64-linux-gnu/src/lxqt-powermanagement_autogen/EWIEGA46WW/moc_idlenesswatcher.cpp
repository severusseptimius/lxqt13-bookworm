/****************************************************************************
** Meta object code from reading C++ file 'idlenesswatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/idlenesswatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'idlenesswatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IdlenessWatcher_t {
    QByteArrayData data[11];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IdlenessWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IdlenessWatcher_t qt_meta_stringdata_IdlenessWatcher = {
    {
QT_MOC_LITERAL(0, 0, 15), // "IdlenessWatcher"
QT_MOC_LITERAL(1, 16, 5), // "setup"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 14), // "timeoutReached"
QT_MOC_LITERAL(4, 38, 10), // "identifier"
QT_MOC_LITERAL(5, 49, 4), // "msec"
QT_MOC_LITERAL(6, 54, 16), // "resumingFromIdle"
QT_MOC_LITERAL(7, 71, 16), // "onBatteryChanged"
QT_MOC_LITERAL(8, 88, 8), // "newState"
QT_MOC_LITERAL(9, 97, 3), // "udi"
QT_MOC_LITERAL(10, 101, 17) // "onSettingsChanged"

    },
    "IdlenessWatcher\0setup\0\0timeoutReached\0"
    "identifier\0msec\0resumingFromIdle\0"
    "onBatteryChanged\0newState\0udi\0"
    "onSettingsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IdlenessWatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    2,   45,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    2,   51,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x28 /* Private | MethodCloned */,
      10,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void IdlenessWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IdlenessWatcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setup(); break;
        case 1: _t->timeoutReached((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->resumingFromIdle(); break;
        case 3: _t->onBatteryChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->onBatteryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onSettingsChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IdlenessWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<Watcher::staticMetaObject>(),
    qt_meta_stringdata_IdlenessWatcher.data,
    qt_meta_data_IdlenessWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IdlenessWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IdlenessWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IdlenessWatcher.stringdata0))
        return static_cast<void*>(this);
    return Watcher::qt_metacast(_clname);
}

int IdlenessWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Watcher::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
