/****************************************************************************
** Meta object code from reading C++ file 'sessiondbusadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../lxqt-session/src/sessiondbusadaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessiondbusadaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SessionDBusAdaptor_t {
    QByteArrayData data[19];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SessionDBusAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SessionDBusAdaptor_t qt_meta_stringdata_SessionDBusAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SessionDBusAdaptor"
QT_MOC_LITERAL(1, 19, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 35, 16), // "org.lxqt.session"
QT_MOC_LITERAL(3, 52, 18), // "moduleStateChanged"
QT_MOC_LITERAL(4, 71, 0), // ""
QT_MOC_LITERAL(5, 72, 10), // "moduleName"
QT_MOC_LITERAL(6, 83, 5), // "state"
QT_MOC_LITERAL(7, 89, 9), // "canLogout"
QT_MOC_LITERAL(8, 99, 9), // "canReboot"
QT_MOC_LITERAL(9, 109, 11), // "canPowerOff"
QT_MOC_LITERAL(10, 121, 6), // "logout"
QT_MOC_LITERAL(11, 128, 9), // "Q_NOREPLY"
QT_MOC_LITERAL(12, 138, 6), // "reboot"
QT_MOC_LITERAL(13, 145, 8), // "powerOff"
QT_MOC_LITERAL(14, 154, 11), // "listModules"
QT_MOC_LITERAL(15, 166, 12), // "QDBusVariant"
QT_MOC_LITERAL(16, 179, 11), // "startModule"
QT_MOC_LITERAL(17, 191, 4), // "name"
QT_MOC_LITERAL(18, 196, 10) // "stopModule"

    },
    "SessionDBusAdaptor\0D-Bus Interface\0"
    "org.lxqt.session\0moduleStateChanged\0"
    "\0moduleName\0state\0canLogout\0canReboot\0"
    "canPowerOff\0logout\0Q_NOREPLY\0reboot\0"
    "powerOff\0listModules\0QDBusVariant\0"
    "startModule\0name\0stopModule"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SessionDBusAdaptor[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    2,   66,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   71,    4, 0x0a /* Public */,
       8,    0,   72,    4, 0x0a /* Public */,
       9,    0,   73,    4, 0x0a /* Public */,
      10,    0,   74,   11, 0x0a /* Public */,
      12,    0,   75,   11, 0x0a /* Public */,
      13,    0,   76,   11, 0x0a /* Public */,
      14,    0,   77,    4, 0x0a /* Public */,
      16,    1,   78,   11, 0x0a /* Public */,
      18,    1,   81,   11, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    5,    6,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void SessionDBusAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SessionDBusAdaptor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moduleStateChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: { bool _r = _t->canLogout();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->canReboot();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->canPowerOff();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->logout(); break;
        case 5: _t->reboot(); break;
        case 6: _t->powerOff(); break;
        case 7: { QDBusVariant _r = _t->listModules();
            if (_a[0]) *reinterpret_cast< QDBusVariant*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->startModule((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->stopModule((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SessionDBusAdaptor::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SessionDBusAdaptor::moduleStateChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SessionDBusAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_SessionDBusAdaptor.data,
    qt_meta_data_SessionDBusAdaptor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SessionDBusAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SessionDBusAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SessionDBusAdaptor.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int SessionDBusAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SessionDBusAdaptor::moduleStateChanged(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
