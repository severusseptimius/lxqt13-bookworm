/****************************************************************************
** Meta object code from reading C++ file 'sniasync.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-statusnotifier/sniasync.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sniasync.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SniAsync_t {
    QByteArrayData data[18];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SniAsync_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SniAsync_t qt_meta_stringdata_SniAsync = {
    {
QT_MOC_LITERAL(0, 0, 8), // "SniAsync"
QT_MOC_LITERAL(1, 9, 16), // "NewAttentionIcon"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "NewIcon"
QT_MOC_LITERAL(4, 35, 14), // "NewOverlayIcon"
QT_MOC_LITERAL(5, 50, 9), // "NewStatus"
QT_MOC_LITERAL(6, 60, 6), // "status"
QT_MOC_LITERAL(7, 67, 8), // "NewTitle"
QT_MOC_LITERAL(8, 76, 10), // "NewToolTip"
QT_MOC_LITERAL(9, 87, 8), // "Activate"
QT_MOC_LITERAL(10, 96, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(11, 116, 1), // "x"
QT_MOC_LITERAL(12, 118, 1), // "y"
QT_MOC_LITERAL(13, 120, 11), // "ContextMenu"
QT_MOC_LITERAL(14, 132, 6), // "Scroll"
QT_MOC_LITERAL(15, 139, 5), // "delta"
QT_MOC_LITERAL(16, 145, 11), // "orientation"
QT_MOC_LITERAL(17, 157, 17) // "SecondaryActivate"

    },
    "SniAsync\0NewAttentionIcon\0\0NewIcon\0"
    "NewOverlayIcon\0NewStatus\0status\0"
    "NewTitle\0NewToolTip\0Activate\0"
    "QDBusPendingReply<>\0x\0y\0ContextMenu\0"
    "Scroll\0delta\0orientation\0SecondaryActivate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SniAsync[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       7,    0,   70,    2, 0x06 /* Public */,
       8,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   72,    2, 0x0a /* Public */,
      13,    2,   77,    2, 0x0a /* Public */,
      14,    2,   82,    2, 0x0a /* Public */,
      17,    2,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 10, QMetaType::Int, QMetaType::Int,   11,   12,
    0x80000000 | 10, QMetaType::Int, QMetaType::Int,   11,   12,
    0x80000000 | 10, QMetaType::Int, QMetaType::QString,   15,   16,
    0x80000000 | 10, QMetaType::Int, QMetaType::Int,   11,   12,

       0        // eod
};

void SniAsync::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SniAsync *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->NewAttentionIcon(); break;
        case 1: _t->NewIcon(); break;
        case 2: _t->NewOverlayIcon(); break;
        case 3: _t->NewStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->NewTitle(); break;
        case 5: _t->NewToolTip(); break;
        case 6: { QDBusPendingReply<> _r = _t->Activate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QDBusPendingReply<> _r = _t->ContextMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QDBusPendingReply<> _r = _t->Scroll((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 9: { QDBusPendingReply<> _r = _t->SecondaryActivate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SniAsync::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SniAsync::NewAttentionIcon)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SniAsync::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SniAsync::NewIcon)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SniAsync::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SniAsync::NewOverlayIcon)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SniAsync::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SniAsync::NewStatus)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SniAsync::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SniAsync::NewTitle)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SniAsync::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SniAsync::NewToolTip)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SniAsync::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SniAsync.data,
    qt_meta_data_SniAsync,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SniAsync::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SniAsync::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SniAsync.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SniAsync::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SniAsync::NewAttentionIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SniAsync::NewIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SniAsync::NewOverlayIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SniAsync::NewStatus(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SniAsync::NewTitle()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SniAsync::NewToolTip()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
