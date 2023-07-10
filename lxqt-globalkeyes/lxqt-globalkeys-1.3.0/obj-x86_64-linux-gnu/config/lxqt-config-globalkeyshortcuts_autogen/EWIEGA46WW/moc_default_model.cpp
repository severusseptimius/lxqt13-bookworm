/****************************************************************************
** Meta object code from reading C++ file 'default_model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../config/default_model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'default_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DefaultModel_t {
    QByteArrayData data[13];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DefaultModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DefaultModel_t qt_meta_stringdata_DefaultModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DefaultModel"
QT_MOC_LITERAL(1, 13, 17), // "daemonDisappeared"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "daemonAppeared"
QT_MOC_LITERAL(4, 47, 11), // "actionAdded"
QT_MOC_LITERAL(5, 59, 2), // "id"
QT_MOC_LITERAL(6, 62, 13), // "actionEnabled"
QT_MOC_LITERAL(7, 76, 7), // "enabled"
QT_MOC_LITERAL(8, 84, 14), // "actionModified"
QT_MOC_LITERAL(9, 99, 14), // "actionsSwapped"
QT_MOC_LITERAL(10, 114, 3), // "id1"
QT_MOC_LITERAL(11, 118, 3), // "id2"
QT_MOC_LITERAL(12, 122, 13) // "actionRemoved"

    },
    "DefaultModel\0daemonDisappeared\0\0"
    "daemonAppeared\0actionAdded\0id\0"
    "actionEnabled\0enabled\0actionModified\0"
    "actionsSwapped\0id1\0id2\0actionRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DefaultModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x0a /* Public */,
       6,    2,   54,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x0a /* Public */,
       9,    2,   62,    2, 0x0a /* Public */,
      12,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,    5,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Bool,    5,    7,
    QMetaType::Void, QMetaType::ULongLong,    5,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   10,   11,
    QMetaType::Void, QMetaType::ULongLong,    5,

       0        // eod
};

void DefaultModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DefaultModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->daemonDisappeared(); break;
        case 1: _t->daemonAppeared(); break;
        case 2: _t->actionAdded((*reinterpret_cast< qulonglong(*)>(_a[1]))); break;
        case 3: _t->actionEnabled((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->actionModified((*reinterpret_cast< qulonglong(*)>(_a[1]))); break;
        case 5: _t->actionsSwapped((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 6: _t->actionRemoved((*reinterpret_cast< qulonglong(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DefaultModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_DefaultModel.data,
    qt_meta_data_DefaultModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DefaultModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DefaultModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DefaultModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int DefaultModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
