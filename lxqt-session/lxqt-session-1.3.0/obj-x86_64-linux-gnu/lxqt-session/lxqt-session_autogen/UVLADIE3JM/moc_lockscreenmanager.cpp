/****************************************************************************
** Meta object code from reading C++ file 'lockscreenmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../lxqt-session/src/lockscreenmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lockscreenmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LockScreenProvider_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LockScreenProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LockScreenProvider_t qt_meta_stringdata_LockScreenProvider = {
    {
QT_MOC_LITERAL(0, 0, 18), // "LockScreenProvider"
QT_MOC_LITERAL(1, 19, 12), // "aboutToSleep"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "beforeSleep"
QT_MOC_LITERAL(4, 45, 13) // "lockRequested"

    },
    "LockScreenProvider\0aboutToSleep\0\0"
    "beforeSleep\0lockRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LockScreenProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void LockScreenProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LockScreenProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->aboutToSleep((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->lockRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LockScreenProvider::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LockScreenProvider::aboutToSleep)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LockScreenProvider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LockScreenProvider::lockRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LockScreenProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LockScreenProvider.data,
    qt_meta_data_LockScreenProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LockScreenProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LockScreenProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LockScreenProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LockScreenProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void LockScreenProvider::aboutToSleep(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LockScreenProvider::lockRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_LogindProvider_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogindProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogindProvider_t qt_meta_stringdata_LogindProvider = {
    {
QT_MOC_LITERAL(0, 0, 14) // "LogindProvider"

    },
    "LogindProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogindProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LogindProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LogindProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<LockScreenProvider::staticMetaObject>(),
    qt_meta_stringdata_LogindProvider.data,
    qt_meta_data_LogindProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogindProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogindProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogindProvider.stringdata0))
        return static_cast<void*>(this);
    return LockScreenProvider::qt_metacast(_clname);
}

int LogindProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LockScreenProvider::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ConsoleKit2Provider_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConsoleKit2Provider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConsoleKit2Provider_t qt_meta_stringdata_ConsoleKit2Provider = {
    {
QT_MOC_LITERAL(0, 0, 19) // "ConsoleKit2Provider"

    },
    "ConsoleKit2Provider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConsoleKit2Provider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ConsoleKit2Provider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ConsoleKit2Provider::staticMetaObject = { {
    QMetaObject::SuperData::link<LockScreenProvider::staticMetaObject>(),
    qt_meta_stringdata_ConsoleKit2Provider.data,
    qt_meta_data_ConsoleKit2Provider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConsoleKit2Provider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConsoleKit2Provider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleKit2Provider.stringdata0))
        return static_cast<void*>(this);
    return LockScreenProvider::qt_metacast(_clname);
}

int ConsoleKit2Provider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LockScreenProvider::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LockScreenManager_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LockScreenManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LockScreenManager_t qt_meta_stringdata_LockScreenManager = {
    {
QT_MOC_LITERAL(0, 0, 17) // "LockScreenManager"

    },
    "LockScreenManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LockScreenManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LockScreenManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LockScreenManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LockScreenManager.data,
    qt_meta_data_LockScreenManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LockScreenManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LockScreenManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LockScreenManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LockScreenManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
