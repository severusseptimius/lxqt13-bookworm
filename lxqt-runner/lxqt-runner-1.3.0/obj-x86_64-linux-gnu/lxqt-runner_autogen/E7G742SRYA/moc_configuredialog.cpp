/****************************************************************************
** Meta object code from reading C++ file 'configuredialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../configuredialog/configuredialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configuredialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConfigureDialog_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConfigureDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConfigureDialog_t qt_meta_stringdata_ConfigureDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ConfigureDialog"
QT_MOC_LITERAL(1, 16, 15), // "shortcutChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "text"
QT_MOC_LITERAL(4, 38, 13), // "shortcutReset"
QT_MOC_LITERAL(5, 52, 15), // "settingsChanged"
QT_MOC_LITERAL(6, 68, 18), // "positionCbxChanged"
QT_MOC_LITERAL(7, 87, 5), // "index"
QT_MOC_LITERAL(8, 93, 17), // "monitorCbxChanged"
QT_MOC_LITERAL(9, 111, 13) // "resetSettings"

    },
    "ConfigureDialog\0shortcutChanged\0\0text\0"
    "shortcutReset\0settingsChanged\0"
    "positionCbxChanged\0index\0monitorCbxChanged\0"
    "resetSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConfigureDialog[] = {

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
       1,    1,   44,    2, 0x08 /* Private */,
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
       9,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void ConfigureDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConfigureDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->shortcutChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->shortcutReset(); break;
        case 2: _t->settingsChanged(); break;
        case 3: _t->positionCbxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->monitorCbxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->resetSettings(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConfigureDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ConfigureDialog.data,
    qt_meta_data_ConfigureDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConfigureDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigureDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigureDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConfigureDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
