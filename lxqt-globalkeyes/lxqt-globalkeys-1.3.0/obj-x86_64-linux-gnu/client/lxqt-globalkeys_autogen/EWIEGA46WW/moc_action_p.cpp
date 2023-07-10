/****************************************************************************
** Meta object code from reading C++ file 'action_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../client/action_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'action_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalKeyShortcut__ActionImpl_t {
    QByteArrayData data[9];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalKeyShortcut__ActionImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalKeyShortcut__ActionImpl_t qt_meta_stringdata_GlobalKeyShortcut__ActionImpl = {
    {
QT_MOC_LITERAL(0, 0, 29), // "GlobalKeyShortcut::ActionImpl"
QT_MOC_LITERAL(1, 30, 24), // "emitRegistrationFinished"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 13), // "emitActivated"
QT_MOC_LITERAL(4, 70, 19), // "emitShortcutChanged"
QT_MOC_LITERAL(5, 90, 11), // "oldShortcut"
QT_MOC_LITERAL(6, 102, 11), // "newShortcut"
QT_MOC_LITERAL(7, 114, 9), // "activated"
QT_MOC_LITERAL(8, 124, 15) // "shortcutChanged"

    },
    "GlobalKeyShortcut::ActionImpl\0"
    "emitRegistrationFinished\0\0emitActivated\0"
    "emitShortcutChanged\0oldShortcut\0"
    "newShortcut\0activated\0shortcutChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalKeyShortcut__ActionImpl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    2,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   46,    2, 0x0a /* Public */,
       8,    2,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,

       0        // eod
};

void GlobalKeyShortcut::ActionImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActionImpl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->emitRegistrationFinished(); break;
        case 1: _t->emitActivated(); break;
        case 2: _t->emitShortcutChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->activated(); break;
        case 4: _t->shortcutChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActionImpl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionImpl::emitRegistrationFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActionImpl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionImpl::emitActivated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ActionImpl::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionImpl::emitShortcutChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalKeyShortcut::ActionImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GlobalKeyShortcut__ActionImpl.data,
    qt_meta_data_GlobalKeyShortcut__ActionImpl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalKeyShortcut::ActionImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalKeyShortcut::ActionImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalKeyShortcut__ActionImpl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GlobalKeyShortcut::ActionImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GlobalKeyShortcut::ActionImpl::emitRegistrationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GlobalKeyShortcut::ActionImpl::emitActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GlobalKeyShortcut::ActionImpl::emitShortcutChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
