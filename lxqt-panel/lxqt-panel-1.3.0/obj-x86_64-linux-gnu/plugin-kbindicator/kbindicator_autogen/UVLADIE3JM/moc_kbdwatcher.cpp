/****************************************************************************
** Meta object code from reading C++ file 'kbdwatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-kbindicator/src/kbdwatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kbdwatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KbdWatcher_t {
    QByteArrayData data[13];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KbdWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KbdWatcher_t qt_meta_stringdata_KbdWatcher = {
    {
QT_MOC_LITERAL(0, 0, 10), // "KbdWatcher"
QT_MOC_LITERAL(1, 11, 13), // "layoutChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "sym"
QT_MOC_LITERAL(4, 30, 4), // "name"
QT_MOC_LITERAL(5, 35, 7), // "variant"
QT_MOC_LITERAL(6, 43, 20), // "modifierStateChanged"
QT_MOC_LITERAL(7, 64, 8), // "Controls"
QT_MOC_LITERAL(8, 73, 3), // "mod"
QT_MOC_LITERAL(9, 77, 6), // "active"
QT_MOC_LITERAL(10, 84, 14), // "controlClicked"
QT_MOC_LITERAL(11, 99, 3), // "cnt"
QT_MOC_LITERAL(12, 103, 13) // "keeperChanged"

    },
    "KbdWatcher\0layoutChanged\0\0sym\0name\0"
    "variant\0modifierStateChanged\0Controls\0"
    "mod\0active\0controlClicked\0cnt\0"
    "keeperChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KbdWatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       6,    2,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   46,    2, 0x0a /* Public */,
      12,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,   11,
    QMetaType::Void,

       0        // eod
};

void KbdWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KbdWatcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->layoutChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->modifierStateChanged((*reinterpret_cast< Controls(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->controlClicked((*reinterpret_cast< Controls(*)>(_a[1]))); break;
        case 3: _t->keeperChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KbdWatcher::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KbdWatcher::layoutChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KbdWatcher::*)(Controls , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KbdWatcher::modifierStateChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KbdWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KbdWatcher.data,
    qt_meta_data_KbdWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KbdWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KbdWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KbdWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KbdWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KbdWatcher::layoutChanged(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KbdWatcher::modifierStateChanged(Controls _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
