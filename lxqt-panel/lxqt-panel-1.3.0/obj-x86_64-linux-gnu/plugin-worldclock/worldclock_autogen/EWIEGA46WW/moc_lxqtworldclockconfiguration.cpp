/****************************************************************************
** Meta object code from reading C++ file 'lxqtworldclockconfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-worldclock/lxqtworldclockconfiguration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lxqtworldclockconfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LXQtWorldClockConfiguration_t {
    QByteArrayData data[16];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtWorldClockConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtWorldClockConfiguration_t qt_meta_stringdata_LXQtWorldClockConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 27), // "LXQtWorldClockConfiguration"
QT_MOC_LITERAL(1, 28, 12), // "saveSettings"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 17), // "timeFormatChanged"
QT_MOC_LITERAL(4, 60, 16), // "dateGroupToggled"
QT_MOC_LITERAL(5, 77, 17), // "dateFormatChanged"
QT_MOC_LITERAL(6, 95, 21), // "advancedFormatToggled"
QT_MOC_LITERAL(7, 117, 28), // "customiseManualFormatClicked"
QT_MOC_LITERAL(8, 146, 19), // "manualFormatChanged"
QT_MOC_LITERAL(9, 166, 21), // "updateTimeZoneButtons"
QT_MOC_LITERAL(10, 188, 11), // "addTimeZone"
QT_MOC_LITERAL(11, 200, 14), // "removeTimeZone"
QT_MOC_LITERAL(12, 215, 20), // "setTimeZoneAsDefault"
QT_MOC_LITERAL(13, 236, 22), // "editTimeZoneCustomName"
QT_MOC_LITERAL(14, 259, 14), // "moveTimeZoneUp"
QT_MOC_LITERAL(15, 274, 16) // "moveTimeZoneDown"

    },
    "LXQtWorldClockConfiguration\0saveSettings\0"
    "\0timeFormatChanged\0dateGroupToggled\0"
    "dateFormatChanged\0advancedFormatToggled\0"
    "customiseManualFormatClicked\0"
    "manualFormatChanged\0updateTimeZoneButtons\0"
    "addTimeZone\0removeTimeZone\0"
    "setTimeZoneAsDefault\0editTimeZoneCustomName\0"
    "moveTimeZoneUp\0moveTimeZoneDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtWorldClockConfiguration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    1,   85,    2, 0x08 /* Private */,
       4,    1,   88,    2, 0x08 /* Private */,
       5,    1,   91,    2, 0x08 /* Private */,
       6,    1,   94,    2, 0x08 /* Private */,
       7,    0,   97,    2, 0x08 /* Private */,
       8,    0,   98,    2, 0x08 /* Private */,
       9,    0,   99,    2, 0x08 /* Private */,
      10,    0,  100,    2, 0x08 /* Private */,
      11,    0,  101,    2, 0x08 /* Private */,
      12,    0,  102,    2, 0x08 /* Private */,
      13,    0,  103,    2, 0x08 /* Private */,
      14,    0,  104,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LXQtWorldClockConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LXQtWorldClockConfiguration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->saveSettings(); break;
        case 1: _t->timeFormatChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->dateGroupToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->dateFormatChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->advancedFormatToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->customiseManualFormatClicked(); break;
        case 6: _t->manualFormatChanged(); break;
        case 7: _t->updateTimeZoneButtons(); break;
        case 8: _t->addTimeZone(); break;
        case 9: _t->removeTimeZone(); break;
        case 10: _t->setTimeZoneAsDefault(); break;
        case 11: _t->editTimeZoneCustomName(); break;
        case 12: _t->moveTimeZoneUp(); break;
        case 13: _t->moveTimeZoneDown(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LXQtWorldClockConfiguration::staticMetaObject = { {
    QMetaObject::SuperData::link<LXQtPanelPluginConfigDialog::staticMetaObject>(),
    qt_meta_stringdata_LXQtWorldClockConfiguration.data,
    qt_meta_data_LXQtWorldClockConfiguration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtWorldClockConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtWorldClockConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtWorldClockConfiguration.stringdata0))
        return static_cast<void*>(this);
    return LXQtPanelPluginConfigDialog::qt_metacast(_clname);
}

int LXQtWorldClockConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LXQtPanelPluginConfigDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
