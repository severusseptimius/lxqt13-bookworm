/****************************************************************************
** Meta object code from reading C++ file 'statusnotifierwatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-statusnotifier/statusnotifierwatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusnotifierwatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StatusNotifierWatcher_t {
    QByteArrayData data[15];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusNotifierWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusNotifierWatcher_t qt_meta_stringdata_StatusNotifierWatcher = {
    {
QT_MOC_LITERAL(0, 0, 21), // "StatusNotifierWatcher"
QT_MOC_LITERAL(1, 22, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 38, 29), // "org.kde.StatusNotifierWatcher"
QT_MOC_LITERAL(3, 68, 28), // "StatusNotifierItemRegistered"
QT_MOC_LITERAL(4, 97, 0), // ""
QT_MOC_LITERAL(5, 98, 7), // "service"
QT_MOC_LITERAL(6, 106, 30), // "StatusNotifierItemUnregistered"
QT_MOC_LITERAL(7, 137, 28), // "StatusNotifierHostRegistered"
QT_MOC_LITERAL(8, 166, 26), // "RegisterStatusNotifierItem"
QT_MOC_LITERAL(9, 193, 13), // "serviceOrPath"
QT_MOC_LITERAL(10, 207, 26), // "RegisterStatusNotifierHost"
QT_MOC_LITERAL(11, 234, 19), // "serviceUnregistered"
QT_MOC_LITERAL(12, 254, 30), // "IsStatusNotifierHostRegistered"
QT_MOC_LITERAL(13, 285, 15), // "ProtocolVersion"
QT_MOC_LITERAL(14, 301, 29) // "RegisteredStatusNotifierItems"

    },
    "StatusNotifierWatcher\0D-Bus Interface\0"
    "org.kde.StatusNotifierWatcher\0"
    "StatusNotifierItemRegistered\0\0service\0"
    "StatusNotifierItemUnregistered\0"
    "StatusNotifierHostRegistered\0"
    "RegisterStatusNotifierItem\0serviceOrPath\0"
    "RegisterStatusNotifierHost\0"
    "serviceUnregistered\0IsStatusNotifierHostRegistered\0"
    "ProtocolVersion\0RegisteredStatusNotifierItems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusNotifierWatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   46,    4, 0x46 /* Public | isScriptable */,
       6,    1,   49,    4, 0x46 /* Public | isScriptable */,
       7,    0,   52,    4, 0x46 /* Public | isScriptable */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   53,    4, 0x4a /* Public | isScriptable */,
      10,    1,   56,    4, 0x4a /* Public | isScriptable */,
      11,    1,   59,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00095001,
      13, QMetaType::Int, 0x00095001,
      14, QMetaType::QStringList, 0x00095001,

       0        // eod
};

void StatusNotifierWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatusNotifierWatcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->StatusNotifierItemRegistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->StatusNotifierItemUnregistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->StatusNotifierHostRegistered(); break;
        case 3: _t->RegisterStatusNotifierItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->RegisterStatusNotifierHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->serviceUnregistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StatusNotifierWatcher::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierWatcher::StatusNotifierItemRegistered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StatusNotifierWatcher::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierWatcher::StatusNotifierItemUnregistered)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StatusNotifierWatcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierWatcher::StatusNotifierHostRegistered)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StatusNotifierWatcher *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isStatusNotifierHostRegistered(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->protocolVersion(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->RegisteredStatusNotifierItems(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject StatusNotifierWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_StatusNotifierWatcher.data,
    qt_meta_data_StatusNotifierWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusNotifierWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusNotifierWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusNotifierWatcher.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusNotifierWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StatusNotifierWatcher::StatusNotifierItemRegistered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StatusNotifierWatcher::StatusNotifierItemUnregistered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StatusNotifierWatcher::StatusNotifierHostRegistered()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
