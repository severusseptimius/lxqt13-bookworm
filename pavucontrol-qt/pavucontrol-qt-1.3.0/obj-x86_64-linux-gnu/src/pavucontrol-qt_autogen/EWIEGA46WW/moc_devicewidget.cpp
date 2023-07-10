/****************************************************************************
** Meta object code from reading C++ file 'devicewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/devicewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceWidget_t {
    QByteArrayData data[12];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceWidget_t qt_meta_stringdata_DeviceWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DeviceWidget"
QT_MOC_LITERAL(1, 13, 18), // "onMuteToggleButton"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "onLockToggleButton"
QT_MOC_LITERAL(4, 52, 21), // "onDefaultToggleButton"
QT_MOC_LITERAL(5, 74, 10), // "setDefault"
QT_MOC_LITERAL(6, 85, 9), // "isDefault"
QT_MOC_LITERAL(7, 95, 16), // "setLatencyOffset"
QT_MOC_LITERAL(8, 112, 7), // "int64_t"
QT_MOC_LITERAL(9, 120, 6), // "offset"
QT_MOC_LITERAL(10, 127, 14), // "onOffsetChange"
QT_MOC_LITERAL(11, 142, 12) // "timeoutEvent"

    },
    "DeviceWidget\0onMuteToggleButton\0\0"
    "onLockToggleButton\0onDefaultToggleButton\0"
    "setDefault\0isDefault\0setLatencyOffset\0"
    "int64_t\0offset\0onOffsetChange\0"
    "timeoutEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceWidget[] = {

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
       4,    0,   51,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,
      10,    0,   58,    2, 0x0a /* Public */,
      11,    0,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void DeviceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMuteToggleButton(); break;
        case 1: _t->onLockToggleButton(); break;
        case 2: _t->onDefaultToggleButton(); break;
        case 3: _t->setDefault((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setLatencyOffset((*reinterpret_cast< int64_t(*)>(_a[1]))); break;
        case 5: _t->onOffsetChange(); break;
        case 6: { bool _r = _t->timeoutEvent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeviceWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<MinimalStreamWidget::staticMetaObject>(),
    qt_meta_stringdata_DeviceWidget.data,
    qt_meta_data_DeviceWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DeviceWidget"))
        return static_cast< Ui::DeviceWidget*>(this);
    return MinimalStreamWidget::qt_metacast(_clname);
}

int DeviceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MinimalStreamWidget::qt_metacall(_c, _id, _a);
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
