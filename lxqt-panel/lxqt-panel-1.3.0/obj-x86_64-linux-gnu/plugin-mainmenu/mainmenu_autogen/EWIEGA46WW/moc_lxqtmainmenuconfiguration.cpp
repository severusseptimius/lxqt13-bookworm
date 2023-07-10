/****************************************************************************
** Meta object code from reading C++ file 'lxqtmainmenuconfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-mainmenu/lxqtmainmenuconfiguration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lxqtmainmenuconfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LXQtMainMenuConfiguration_t {
    QByteArrayData data[15];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtMainMenuConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtMainMenuConfiguration_t qt_meta_stringdata_LXQtMainMenuConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 25), // "LXQtMainMenuConfiguration"
QT_MOC_LITERAL(1, 26, 21), // "globalShortcutChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 11), // "oldShortcut"
QT_MOC_LITERAL(4, 61, 11), // "newShortcut"
QT_MOC_LITERAL(5, 73, 15), // "shortcutChanged"
QT_MOC_LITERAL(6, 89, 5), // "value"
QT_MOC_LITERAL(7, 95, 12), // "loadSettings"
QT_MOC_LITERAL(8, 108, 17), // "textButtonChanged"
QT_MOC_LITERAL(9, 126, 15), // "showTextChanged"
QT_MOC_LITERAL(10, 142, 10), // "chooseIcon"
QT_MOC_LITERAL(11, 153, 14), // "chooseMenuFile"
QT_MOC_LITERAL(12, 168, 13), // "shortcutReset"
QT_MOC_LITERAL(13, 182, 17), // "customFontChanged"
QT_MOC_LITERAL(14, 200, 21) // "customFontSizeChanged"

    },
    "LXQtMainMenuConfiguration\0"
    "globalShortcutChanged\0\0oldShortcut\0"
    "newShortcut\0shortcutChanged\0value\0"
    "loadSettings\0textButtonChanged\0"
    "showTextChanged\0chooseIcon\0chooseMenuFile\0"
    "shortcutReset\0customFontChanged\0"
    "customFontSizeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtMainMenuConfiguration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x08 /* Private */,
       5,    1,   69,    2, 0x08 /* Private */,
       7,    0,   72,    2, 0x08 /* Private */,
       8,    1,   73,    2, 0x08 /* Private */,
       9,    1,   76,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,
      13,    1,   82,    2, 0x08 /* Private */,
      14,    1,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void LXQtMainMenuConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LXQtMainMenuConfiguration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->globalShortcutChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->shortcutChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->loadSettings(); break;
        case 3: _t->textButtonChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->showTextChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->chooseIcon(); break;
        case 6: _t->chooseMenuFile(); break;
        case 7: _t->shortcutReset(); break;
        case 8: _t->customFontChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->customFontSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LXQtMainMenuConfiguration::staticMetaObject = { {
    QMetaObject::SuperData::link<LXQtPanelPluginConfigDialog::staticMetaObject>(),
    qt_meta_stringdata_LXQtMainMenuConfiguration.data,
    qt_meta_data_LXQtMainMenuConfiguration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtMainMenuConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtMainMenuConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtMainMenuConfiguration.stringdata0))
        return static_cast<void*>(this);
    return LXQtPanelPluginConfigDialog::qt_metacast(_clname);
}

int LXQtMainMenuConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LXQtPanelPluginConfigDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
