/****************************************************************************
** Meta object code from reading C++ file 'application.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../pcmanfm/application.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'application.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PCManFM__ProxyStyle_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PCManFM__ProxyStyle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PCManFM__ProxyStyle_t qt_meta_stringdata_PCManFM__ProxyStyle = {
    {
QT_MOC_LITERAL(0, 0, 19) // "PCManFM::ProxyStyle"

    },
    "PCManFM::ProxyStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCManFM__ProxyStyle[] = {

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

void PCManFM::ProxyStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PCManFM::ProxyStyle::staticMetaObject = { {
    QMetaObject::SuperData::link<QProxyStyle::staticMetaObject>(),
    qt_meta_stringdata_PCManFM__ProxyStyle.data,
    qt_meta_data_PCManFM__ProxyStyle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PCManFM::ProxyStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PCManFM::ProxyStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PCManFM__ProxyStyle.stringdata0))
        return static_cast<void*>(this);
    return QProxyStyle::qt_metacast(_clname);
}

int PCManFM::ProxyStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProxyStyle::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PCManFM__Application_t {
    QByteArrayData data[25];
    char stringdata0[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PCManFM__Application_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PCManFM__Application_t qt_meta_stringdata_PCManFM__Application = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PCManFM::Application"
QT_MOC_LITERAL(1, 21, 13), // "onAboutToQuit"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 17), // "onSigtermNotified"
QT_MOC_LITERAL(4, 54, 18), // "onLastWindowClosed"
QT_MOC_LITERAL(5, 73, 18), // "onSaveStateRequest"
QT_MOC_LITERAL(6, 92, 16), // "QSessionManager&"
QT_MOC_LITERAL(7, 109, 7), // "manager"
QT_MOC_LITERAL(8, 117, 17), // "initVolumeManager"
QT_MOC_LITERAL(9, 135, 24), // "onVirtualGeometryChanged"
QT_MOC_LITERAL(10, 160, 4), // "rect"
QT_MOC_LITERAL(11, 165, 26), // "onAvailableGeometryChanged"
QT_MOC_LITERAL(12, 192, 17), // "onScreenDestroyed"
QT_MOC_LITERAL(13, 210, 9), // "screenObj"
QT_MOC_LITERAL(14, 220, 13), // "onScreenAdded"
QT_MOC_LITERAL(15, 234, 8), // "QScreen*"
QT_MOC_LITERAL(16, 243, 9), // "newScreen"
QT_MOC_LITERAL(17, 253, 15), // "onScreenRemoved"
QT_MOC_LITERAL(18, 269, 9), // "oldScreen"
QT_MOC_LITERAL(19, 279, 22), // "reloadDesktopsAsNeeded"
QT_MOC_LITERAL(20, 302, 18), // "onFindFileAccepted"
QT_MOC_LITERAL(21, 321, 25), // "onConnectToServerAccepted"
QT_MOC_LITERAL(22, 347, 17), // "onUserDirsChanged"
QT_MOC_LITERAL(23, 365, 17), // "onPropJobFinished"
QT_MOC_LITERAL(24, 383, 21) // "desktopManagerEnabled"

    },
    "PCManFM::Application\0onAboutToQuit\0\0"
    "onSigtermNotified\0onLastWindowClosed\0"
    "onSaveStateRequest\0QSessionManager&\0"
    "manager\0initVolumeManager\0"
    "onVirtualGeometryChanged\0rect\0"
    "onAvailableGeometryChanged\0onScreenDestroyed\0"
    "screenObj\0onScreenAdded\0QScreen*\0"
    "newScreen\0onScreenRemoved\0oldScreen\0"
    "reloadDesktopsAsNeeded\0onFindFileAccepted\0"
    "onConnectToServerAccepted\0onUserDirsChanged\0"
    "onPropJobFinished\0desktopManagerEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCManFM__Application[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       1,  116, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x09 /* Protected */,
       3,    0,   90,    2, 0x09 /* Protected */,
       4,    0,   91,    2, 0x09 /* Protected */,
       5,    1,   92,    2, 0x09 /* Protected */,
       8,    0,   95,    2, 0x09 /* Protected */,
       9,    1,   96,    2, 0x09 /* Protected */,
      11,    1,   99,    2, 0x09 /* Protected */,
      12,    1,  102,    2, 0x09 /* Protected */,
      14,    1,  105,    2, 0x09 /* Protected */,
      17,    1,  108,    2, 0x09 /* Protected */,
      19,    0,  111,    2, 0x09 /* Protected */,
      20,    0,  112,    2, 0x09 /* Protected */,
      21,    0,  113,    2, 0x09 /* Protected */,
      22,    0,  114,    2, 0x08 /* Private */,
      23,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect,   10,
    QMetaType::Void, QMetaType::QRect,   10,
    QMetaType::Void, QMetaType::QObjectStar,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      24, QMetaType::Bool, 0x00095001,

       0        // eod
};

void PCManFM::Application::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Application *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAboutToQuit(); break;
        case 1: _t->onSigtermNotified(); break;
        case 2: _t->onLastWindowClosed(); break;
        case 3: _t->onSaveStateRequest((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        case 4: _t->initVolumeManager(); break;
        case 5: _t->onVirtualGeometryChanged((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 6: _t->onAvailableGeometryChanged((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 7: _t->onScreenDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 8: _t->onScreenAdded((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 9: _t->onScreenRemoved((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 10: _t->reloadDesktopsAsNeeded(); break;
        case 11: _t->onFindFileAccepted(); break;
        case 12: _t->onConnectToServerAccepted(); break;
        case 13: _t->onUserDirsChanged(); break;
        case 14: _t->onPropJobFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Application *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->desktopManagerEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PCManFM::Application::staticMetaObject = { {
    QMetaObject::SuperData::link<QApplication::staticMetaObject>(),
    qt_meta_stringdata_PCManFM__Application.data,
    qt_meta_data_PCManFM__Application,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PCManFM::Application::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PCManFM::Application::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PCManFM__Application.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int PCManFM::Application::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
