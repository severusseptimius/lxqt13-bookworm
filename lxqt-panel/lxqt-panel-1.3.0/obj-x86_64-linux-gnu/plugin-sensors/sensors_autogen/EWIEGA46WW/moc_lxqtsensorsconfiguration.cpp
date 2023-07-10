/****************************************************************************
** Meta object code from reading C++ file 'lxqtsensorsconfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-sensors/lxqtsensorsconfiguration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lxqtsensorsconfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LXQtSensorsConfiguration_t {
    QByteArrayData data[6];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtSensorsConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtSensorsConfiguration_t qt_meta_stringdata_LXQtSensorsConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 24), // "LXQtSensorsConfiguration"
QT_MOC_LITERAL(1, 25, 12), // "saveSettings"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "changeProgressBarColor"
QT_MOC_LITERAL(4, 62, 20), // "detectedChipSelected"
QT_MOC_LITERAL(5, 83, 5) // "index"

    },
    "LXQtSensorsConfiguration\0saveSettings\0"
    "\0changeProgressBarColor\0detectedChipSelected\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtSensorsConfiguration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void LXQtSensorsConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LXQtSensorsConfiguration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->saveSettings(); break;
        case 1: _t->changeProgressBarColor(); break;
        case 2: _t->detectedChipSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LXQtSensorsConfiguration::staticMetaObject = { {
    QMetaObject::SuperData::link<LXQtPanelPluginConfigDialog::staticMetaObject>(),
    qt_meta_stringdata_LXQtSensorsConfiguration.data,
    qt_meta_data_LXQtSensorsConfiguration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtSensorsConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtSensorsConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtSensorsConfiguration.stringdata0))
        return static_cast<void*>(this);
    return LXQtPanelPluginConfigDialog::qt_metacast(_clname);
}

int LXQtSensorsConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LXQtPanelPluginConfigDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
