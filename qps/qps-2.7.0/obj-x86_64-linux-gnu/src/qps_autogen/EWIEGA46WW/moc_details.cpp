/****************************************************************************
** Meta object code from reading C++ file 'details.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/details.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'details.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Details_t {
    QByteArrayData data[1];
    char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Details_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Details_t qt_meta_stringdata_Details = {
    {
QT_MOC_LITERAL(0, 0, 7) // "Details"

    },
    "Details"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Details[] = {

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

void Details::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Details::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Details.data,
    qt_meta_data_Details,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Details::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Details::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Details.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Details::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SimpleTable_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimpleTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimpleTable_t qt_meta_stringdata_SimpleTable = {
    {
QT_MOC_LITERAL(0, 0, 11) // "SimpleTable"

    },
    "SimpleTable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimpleTable[] = {

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

void SimpleTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SimpleTable::staticMetaObject = { {
    QMetaObject::SuperData::link<HeadedTable::staticMetaObject>(),
    qt_meta_stringdata_SimpleTable.data,
    qt_meta_data_SimpleTable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SimpleTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimpleTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleTable.stringdata0))
        return static_cast<void*>(this);
    return HeadedTable::qt_metacast(_clname);
}

int SimpleTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HeadedTable::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Sockets_t {
    QByteArrayData data[4];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Sockets_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Sockets_t qt_meta_stringdata_Sockets = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Sockets"
QT_MOC_LITERAL(1, 8, 15), // "update_hostname"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4) // "addr"

    },
    "Sockets\0update_hostname\0\0addr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sockets[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,

       0        // eod
};

void Sockets::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Sockets *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update_hostname((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Sockets::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleTable::staticMetaObject>(),
    qt_meta_stringdata_Sockets.data,
    qt_meta_data_Sockets,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Sockets::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sockets::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sockets.stringdata0))
        return static_cast<void*>(this);
    return SimpleTable::qt_metacast(_clname);
}

int Sockets::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleTable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_Environ_t {
    QByteArrayData data[1];
    char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Environ_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Environ_t qt_meta_stringdata_Environ = {
    {
QT_MOC_LITERAL(0, 0, 7) // "Environ"

    },
    "Environ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Environ[] = {

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

void Environ::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Environ::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleTable::staticMetaObject>(),
    qt_meta_stringdata_Environ.data,
    qt_meta_data_Environ,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Environ::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Environ::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Environ.stringdata0))
        return static_cast<void*>(this);
    return SimpleTable::qt_metacast(_clname);
}

int Environ::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleTable::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
