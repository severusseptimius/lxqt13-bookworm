/****************************************************************************
** Meta object code from reading C++ file 'client_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../client/client_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalKeyShortcut__ClientImpl_t {
    QByteArrayData data[15];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalKeyShortcut__ClientImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalKeyShortcut__ClientImpl_t qt_meta_stringdata_GlobalKeyShortcut__ClientImpl = {
    {
QT_MOC_LITERAL(0, 0, 29), // "GlobalKeyShortcut::ClientImpl"
QT_MOC_LITERAL(1, 30, 19), // "emitShortcutGrabbed"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 22), // "emitGrabShortcutFailed"
QT_MOC_LITERAL(4, 74, 25), // "emitGrabShortcutCancelled"
QT_MOC_LITERAL(5, 100, 24), // "emitGrabShortcutTimedout"
QT_MOC_LITERAL(6, 125, 21), // "emitDaemonDisappeared"
QT_MOC_LITERAL(7, 147, 18), // "emitDaemonAppeared"
QT_MOC_LITERAL(8, 166, 25), // "emitDaemonPresenceChanged"
QT_MOC_LITERAL(9, 192, 20), // "grabShortcutFinished"
QT_MOC_LITERAL(10, 213, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(11, 238, 4), // "call"
QT_MOC_LITERAL(12, 243, 17), // "daemonDisappeared"
QT_MOC_LITERAL(13, 261, 14), // "daemonAppeared"
QT_MOC_LITERAL(14, 276, 20) // "registrationFinished"

    },
    "GlobalKeyShortcut::ClientImpl\0"
    "emitShortcutGrabbed\0\0emitGrabShortcutFailed\0"
    "emitGrabShortcutCancelled\0"
    "emitGrabShortcutTimedout\0emitDaemonDisappeared\0"
    "emitDaemonAppeared\0emitDaemonPresenceChanged\0"
    "grabShortcutFinished\0QDBusPendingCallWatcher*\0"
    "call\0daemonDisappeared\0daemonAppeared\0"
    "registrationFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalKeyShortcut__ClientImpl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    0,   72,    2, 0x06 /* Public */,
       4,    0,   73,    2, 0x06 /* Public */,
       5,    0,   74,    2, 0x06 /* Public */,
       6,    0,   75,    2, 0x06 /* Public */,
       7,    0,   76,    2, 0x06 /* Public */,
       8,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   80,    2, 0x0a /* Public */,
      12,    1,   83,    2, 0x0a /* Public */,
      13,    1,   86,    2, 0x0a /* Public */,
      14,    1,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void GlobalKeyShortcut::ClientImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientImpl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->emitShortcutGrabbed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->emitGrabShortcutFailed(); break;
        case 2: _t->emitGrabShortcutCancelled(); break;
        case 3: _t->emitGrabShortcutTimedout(); break;
        case 4: _t->emitDaemonDisappeared(); break;
        case 5: _t->emitDaemonAppeared(); break;
        case 6: _t->emitDaemonPresenceChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->grabShortcutFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 8: _t->daemonDisappeared((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->daemonAppeared((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->registrationFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientImpl::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientImpl::emitShortcutGrabbed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientImpl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientImpl::emitGrabShortcutFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientImpl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientImpl::emitGrabShortcutCancelled)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientImpl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientImpl::emitGrabShortcutTimedout)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ClientImpl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientImpl::emitDaemonDisappeared)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ClientImpl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientImpl::emitDaemonAppeared)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ClientImpl::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientImpl::emitDaemonPresenceChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalKeyShortcut::ClientImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GlobalKeyShortcut__ClientImpl.data,
    qt_meta_data_GlobalKeyShortcut__ClientImpl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalKeyShortcut::ClientImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalKeyShortcut::ClientImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalKeyShortcut__ClientImpl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GlobalKeyShortcut::ClientImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void GlobalKeyShortcut::ClientImpl::emitShortcutGrabbed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GlobalKeyShortcut::ClientImpl::emitGrabShortcutFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GlobalKeyShortcut::ClientImpl::emitGrabShortcutCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GlobalKeyShortcut::ClientImpl::emitGrabShortcutTimedout()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GlobalKeyShortcut::ClientImpl::emitDaemonDisappeared()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GlobalKeyShortcut::ClientImpl::emitDaemonAppeared()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void GlobalKeyShortcut::ClientImpl::emitDaemonPresenceChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
