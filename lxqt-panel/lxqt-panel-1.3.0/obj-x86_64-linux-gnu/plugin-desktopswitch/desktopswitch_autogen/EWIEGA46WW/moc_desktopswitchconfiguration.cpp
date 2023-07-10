/****************************************************************************
** Meta object code from reading C++ file 'desktopswitchconfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-desktopswitch/desktopswitchconfiguration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'desktopswitchconfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DesktopSwitchConfiguration_t {
    QByteArrayData data[8];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DesktopSwitchConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DesktopSwitchConfiguration_t qt_meta_stringdata_DesktopSwitchConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 26), // "DesktopSwitchConfiguration"
QT_MOC_LITERAL(1, 27, 12), // "loadSettings"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 17), // "loadDesktopsNames"
QT_MOC_LITERAL(4, 59, 11), // "rowsChanged"
QT_MOC_LITERAL(5, 71, 5), // "value"
QT_MOC_LITERAL(6, 77, 16), // "labelTypeChanged"
QT_MOC_LITERAL(7, 94, 4) // "type"

    },
    "DesktopSwitchConfiguration\0loadSettings\0"
    "\0loadDesktopsNames\0rowsChanged\0value\0"
    "labelTypeChanged\0type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DesktopSwitchConfiguration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void DesktopSwitchConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DesktopSwitchConfiguration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadSettings(); break;
        case 1: _t->loadDesktopsNames(); break;
        case 2: _t->rowsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->labelTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DesktopSwitchConfiguration::staticMetaObject = { {
    QMetaObject::SuperData::link<LXQtPanelPluginConfigDialog::staticMetaObject>(),
    qt_meta_stringdata_DesktopSwitchConfiguration.data,
    qt_meta_data_DesktopSwitchConfiguration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DesktopSwitchConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DesktopSwitchConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DesktopSwitchConfiguration.stringdata0))
        return static_cast<void*>(this);
    return LXQtPanelPluginConfigDialog::qt_metacast(_clname);
}

int DesktopSwitchConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LXQtPanelPluginConfigDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
