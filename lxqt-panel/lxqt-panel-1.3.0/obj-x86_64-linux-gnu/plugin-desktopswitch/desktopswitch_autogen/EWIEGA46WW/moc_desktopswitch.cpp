/****************************************************************************
** Meta object code from reading C++ file 'desktopswitch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-desktopswitch/desktopswitch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'desktopswitch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DesktopSwitchWidget_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DesktopSwitchWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DesktopSwitchWidget_t qt_meta_stringdata_DesktopSwitchWidget = {
    {
QT_MOC_LITERAL(0, 0, 19) // "DesktopSwitchWidget"

    },
    "DesktopSwitchWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DesktopSwitchWidget[] = {

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

void DesktopSwitchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject DesktopSwitchWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_DesktopSwitchWidget.data,
    qt_meta_data_DesktopSwitchWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DesktopSwitchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DesktopSwitchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DesktopSwitchWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int DesktopSwitchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DesktopSwitch_t {
    QByteArrayData data[17];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DesktopSwitch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DesktopSwitch_t qt_meta_stringdata_DesktopSwitch = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DesktopSwitch"
QT_MOC_LITERAL(1, 14, 10), // "setDesktop"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "desktop"
QT_MOC_LITERAL(4, 34, 25), // "onNumberOfDesktopsChanged"
QT_MOC_LITERAL(5, 60, 23), // "onCurrentDesktopChanged"
QT_MOC_LITERAL(6, 84, 21), // "onDesktopNamesChanged"
QT_MOC_LITERAL(7, 106, 15), // "settingsChanged"
QT_MOC_LITERAL(8, 122, 17), // "registerShortcuts"
QT_MOC_LITERAL(9, 140, 18), // "shortcutRegistered"
QT_MOC_LITERAL(10, 159, 15), // "onWindowChanged"
QT_MOC_LITERAL(11, 175, 3), // "WId"
QT_MOC_LITERAL(12, 179, 2), // "id"
QT_MOC_LITERAL(13, 182, 15), // "NET::Properties"
QT_MOC_LITERAL(14, 198, 10), // "properties"
QT_MOC_LITERAL(15, 209, 16), // "NET::Properties2"
QT_MOC_LITERAL(16, 226, 11) // "properties2"

    },
    "DesktopSwitch\0setDesktop\0\0desktop\0"
    "onNumberOfDesktopsChanged\0"
    "onCurrentDesktopChanged\0onDesktopNamesChanged\0"
    "settingsChanged\0registerShortcuts\0"
    "shortcutRegistered\0onWindowChanged\0"
    "WId\0id\0NET::Properties\0properties\0"
    "NET::Properties2\0properties2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DesktopSwitch[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    3,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13, 0x80000000 | 15,   12,   14,   16,

       0        // eod
};

void DesktopSwitch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DesktopSwitch *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setDesktop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onNumberOfDesktopsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onCurrentDesktopChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onDesktopNamesChanged(); break;
        case 4: _t->settingsChanged(); break;
        case 5: _t->registerShortcuts(); break;
        case 6: _t->shortcutRegistered(); break;
        case 7: _t->onWindowChanged((*reinterpret_cast< WId(*)>(_a[1])),(*reinterpret_cast< NET::Properties(*)>(_a[2])),(*reinterpret_cast< NET::Properties2(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DesktopSwitch::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DesktopSwitch.data,
    qt_meta_data_DesktopSwitch,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DesktopSwitch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DesktopSwitch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DesktopSwitch.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ILXQtPanelPlugin"))
        return static_cast< ILXQtPanelPlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int DesktopSwitch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
struct qt_meta_stringdata_DesktopSwitchPluginLibrary_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DesktopSwitchPluginLibrary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DesktopSwitchPluginLibrary_t qt_meta_stringdata_DesktopSwitchPluginLibrary = {
    {
QT_MOC_LITERAL(0, 0, 26) // "DesktopSwitchPluginLibrary"

    },
    "DesktopSwitchPluginLibrary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DesktopSwitchPluginLibrary[] = {

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

void DesktopSwitchPluginLibrary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject DesktopSwitchPluginLibrary::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DesktopSwitchPluginLibrary.data,
    qt_meta_data_DesktopSwitchPluginLibrary,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DesktopSwitchPluginLibrary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DesktopSwitchPluginLibrary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DesktopSwitchPluginLibrary.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ILXQtPanelPluginLibrary"))
        return static_cast< ILXQtPanelPluginLibrary*>(this);
    if (!strcmp(_clname, "lxqt.org/Panel/PluginInterface/3.0"))
        return static_cast< ILXQtPanelPluginLibrary*>(this);
    return QObject::qt_metacast(_clname);
}

int DesktopSwitchPluginLibrary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
