/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../client/client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalKeyShortcut__Client_t {
    QByteArrayData data[12];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalKeyShortcut__Client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalKeyShortcut__Client_t qt_meta_stringdata_GlobalKeyShortcut__Client = {
    {
QT_MOC_LITERAL(0, 0, 25), // "GlobalKeyShortcut::Client"
QT_MOC_LITERAL(1, 26, 15), // "shortcutGrabbed"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 18), // "grabShortcutFailed"
QT_MOC_LITERAL(4, 62, 21), // "grabShortcutCancelled"
QT_MOC_LITERAL(5, 84, 20), // "grabShortcutTimedout"
QT_MOC_LITERAL(6, 105, 17), // "daemonDisappeared"
QT_MOC_LITERAL(7, 123, 14), // "daemonAppeared"
QT_MOC_LITERAL(8, 138, 21), // "daemonPresenceChanged"
QT_MOC_LITERAL(9, 160, 12), // "grabShortcut"
QT_MOC_LITERAL(10, 173, 7), // "timeout"
QT_MOC_LITERAL(11, 181, 18) // "cancelShortcutGrab"

    },
    "GlobalKeyShortcut::Client\0shortcutGrabbed\0"
    "\0grabShortcutFailed\0grabShortcutCancelled\0"
    "grabShortcutTimedout\0daemonDisappeared\0"
    "daemonAppeared\0daemonPresenceChanged\0"
    "grabShortcut\0timeout\0cancelShortcutGrab"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalKeyShortcut__Client[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    0,   62,    2, 0x06 /* Public */,
       4,    0,   63,    2, 0x06 /* Public */,
       5,    0,   64,    2, 0x06 /* Public */,
       6,    0,   65,    2, 0x06 /* Public */,
       7,    0,   66,    2, 0x06 /* Public */,
       8,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   70,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void,

       0        // eod
};

void GlobalKeyShortcut::Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Client *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->shortcutGrabbed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->grabShortcutFailed(); break;
        case 2: _t->grabShortcutCancelled(); break;
        case 3: _t->grabShortcutTimedout(); break;
        case 4: _t->daemonDisappeared(); break;
        case 5: _t->daemonAppeared(); break;
        case 6: _t->daemonPresenceChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->grabShortcut((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->cancelShortcutGrab(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Client::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::shortcutGrabbed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::grabShortcutFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::grabShortcutCancelled)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::grabShortcutTimedout)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::daemonDisappeared)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::daemonAppeared)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Client::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::daemonPresenceChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalKeyShortcut::Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GlobalKeyShortcut__Client.data,
    qt_meta_data_GlobalKeyShortcut__Client,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalKeyShortcut::Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalKeyShortcut::Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalKeyShortcut__Client.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GlobalKeyShortcut::Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void GlobalKeyShortcut::Client::shortcutGrabbed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GlobalKeyShortcut::Client::grabShortcutFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GlobalKeyShortcut::Client::grabShortcutCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GlobalKeyShortcut::Client::grabShortcutTimedout()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GlobalKeyShortcut::Client::daemonDisappeared()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GlobalKeyShortcut::Client::daemonAppeared()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void GlobalKeyShortcut::Client::daemonPresenceChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
