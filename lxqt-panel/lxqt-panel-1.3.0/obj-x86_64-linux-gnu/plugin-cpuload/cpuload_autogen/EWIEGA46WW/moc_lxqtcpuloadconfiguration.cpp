/****************************************************************************
** Meta object code from reading C++ file 'lxqtcpuloadconfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-cpuload/lxqtcpuloadconfiguration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lxqtcpuloadconfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LXQtCpuLoadConfiguration_t {
    QByteArrayData data[9];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtCpuLoadConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtCpuLoadConfiguration_t qt_meta_stringdata_LXQtCpuLoadConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 24), // "LXQtCpuLoadConfiguration"
QT_MOC_LITERAL(1, 25, 12), // "loadSettings"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "showTextChanged"
QT_MOC_LITERAL(4, 55, 5), // "value"
QT_MOC_LITERAL(5, 61, 15), // "barWidthChanged"
QT_MOC_LITERAL(6, 77, 21), // "updateIntervalChanged"
QT_MOC_LITERAL(7, 99, 21), // "barOrientationChanged"
QT_MOC_LITERAL(8, 121, 5) // "index"

    },
    "LXQtCpuLoadConfiguration\0loadSettings\0"
    "\0showTextChanged\0value\0barWidthChanged\0"
    "updateIntervalChanged\0barOrientationChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtCpuLoadConfiguration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       6,    1,   46,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void LXQtCpuLoadConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LXQtCpuLoadConfiguration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadSettings(); break;
        case 1: _t->showTextChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->barWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateIntervalChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->barOrientationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LXQtCpuLoadConfiguration::staticMetaObject = { {
    QMetaObject::SuperData::link<LXQtPanelPluginConfigDialog::staticMetaObject>(),
    qt_meta_stringdata_LXQtCpuLoadConfiguration.data,
    qt_meta_data_LXQtCpuLoadConfiguration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtCpuLoadConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtCpuLoadConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtCpuLoadConfiguration.stringdata0))
        return static_cast<void*>(this);
    return LXQtPanelPluginConfigDialog::qt_metacast(_clname);
}

int LXQtCpuLoadConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LXQtPanelPluginConfigDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
