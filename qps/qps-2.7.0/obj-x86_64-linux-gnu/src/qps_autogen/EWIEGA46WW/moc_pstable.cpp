/****************************************************************************
** Meta object code from reading C++ file 'pstable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/pstable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pstable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Pstable_t {
    QByteArrayData data[13];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pstable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pstable_t qt_meta_stringdata_Pstable = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Pstable"
QT_MOC_LITERAL(1, 8, 13), // "setSortColumn"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3), // "col"
QT_MOC_LITERAL(4, 27, 14), // "subtree_folded"
QT_MOC_LITERAL(5, 42, 3), // "row"
QT_MOC_LITERAL(6, 46, 7), // "showTip"
QT_MOC_LITERAL(7, 54, 1), // "p"
QT_MOC_LITERAL(8, 56, 5), // "index"
QT_MOC_LITERAL(9, 62, 11), // "setTreeMode"
QT_MOC_LITERAL(10, 74, 8), // "treemode"
QT_MOC_LITERAL(11, 83, 11), // "mouseOnCell"
QT_MOC_LITERAL(12, 95, 14) // "mouseOutOfCell"

    },
    "Pstable\0setSortColumn\0\0col\0subtree_folded\0"
    "row\0showTip\0p\0index\0setTreeMode\0"
    "treemode\0mouseOnCell\0mouseOutOfCell"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pstable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       6,    2,   50,    2, 0x0a /* Public */,
       9,    1,   55,    2, 0x0a /* Public */,
      11,    2,   58,    2, 0x0a /* Public */,
      12,    0,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QPoint, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    3,
    QMetaType::Void,

       0        // eod
};

void Pstable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Pstable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setSortColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->subtree_folded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->showTip((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setTreeMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->mouseOnCell((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->mouseOutOfCell(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Pstable::staticMetaObject = { {
    QMetaObject::SuperData::link<HeadedTable::staticMetaObject>(),
    qt_meta_stringdata_Pstable.data,
    qt_meta_data_Pstable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Pstable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pstable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Pstable.stringdata0))
        return static_cast<void*>(this);
    return HeadedTable::qt_metacast(_clname);
}

int Pstable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HeadedTable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
