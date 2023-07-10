/****************************************************************************
** Meta object code from reading C++ file 'kbdlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-kbindicator/src/x11/kbdlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kbdlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_X11Kbd_t {
    QByteArrayData data[10];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_X11Kbd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_X11Kbd_t qt_meta_stringdata_X11Kbd = {
    {
QT_MOC_LITERAL(0, 0, 6), // "X11Kbd"
QT_MOC_LITERAL(1, 7, 13), // "layoutChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "layId"
QT_MOC_LITERAL(4, 28, 15), // "modifierChanged"
QT_MOC_LITERAL(5, 44, 8), // "Controls"
QT_MOC_LITERAL(6, 53, 3), // "cnt"
QT_MOC_LITERAL(7, 57, 6), // "locked"
QT_MOC_LITERAL(8, 64, 10), // "checkState"
QT_MOC_LITERAL(9, 75, 15) // "keyboardChanged"

    },
    "X11Kbd\0layoutChanged\0\0layId\0modifierChanged\0"
    "Controls\0cnt\0locked\0checkState\0"
    "keyboardChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_X11Kbd[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,
       8,    0,   42,    2, 0x06 /* Public */,
       9,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void X11Kbd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<X11Kbd *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->layoutChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->modifierChanged((*reinterpret_cast< Controls(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->checkState(); break;
        case 3: _t->keyboardChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (X11Kbd::*)(uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&X11Kbd::layoutChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (X11Kbd::*)(Controls , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&X11Kbd::modifierChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (X11Kbd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&X11Kbd::checkState)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (X11Kbd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&X11Kbd::keyboardChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject X11Kbd::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_X11Kbd.data,
    qt_meta_data_X11Kbd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *X11Kbd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *X11Kbd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_X11Kbd.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int X11Kbd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void X11Kbd::layoutChanged(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void X11Kbd::modifierChanged(Controls _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void X11Kbd::checkState()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void X11Kbd::keyboardChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
