/****************************************************************************
** Meta object code from reading C++ file 'lxqtvolumeconfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-volume/lxqtvolumeconfiguration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lxqtvolumeconfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LXQtVolumeConfiguration_t {
    QByteArrayData data[19];
    char stringdata0[325];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtVolumeConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtVolumeConfiguration_t qt_meta_stringdata_LXQtVolumeConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 23), // "LXQtVolumeConfiguration"
QT_MOC_LITERAL(1, 24, 11), // "setSinkList"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "QList<AudioDevice*>"
QT_MOC_LITERAL(4, 57, 5), // "sinks"
QT_MOC_LITERAL(5, 63, 18), // "audioEngineChanged"
QT_MOC_LITERAL(6, 82, 7), // "checked"
QT_MOC_LITERAL(7, 90, 20), // "sinkSelectionChanged"
QT_MOC_LITERAL(8, 111, 5), // "index"
QT_MOC_LITERAL(9, 117, 24), // "muteOnMiddleClickChanged"
QT_MOC_LITERAL(10, 142, 5), // "state"
QT_MOC_LITERAL(11, 148, 20), // "mixerLineEditChanged"
QT_MOC_LITERAL(12, 169, 7), // "command"
QT_MOC_LITERAL(13, 177, 18), // "stepSpinBoxChanged"
QT_MOC_LITERAL(14, 196, 4), // "step"
QT_MOC_LITERAL(15, 201, 30), // "ignoreMaxVolumeCheckBoxChanged"
QT_MOC_LITERAL(16, 232, 38), // "alwaysShowNotificationsCheckB..."
QT_MOC_LITERAL(17, 271, 40), // "showKeyboardNotificationsChec..."
QT_MOC_LITERAL(18, 312, 12) // "loadSettings"

    },
    "LXQtVolumeConfiguration\0setSinkList\0"
    "\0QList<AudioDevice*>\0sinks\0"
    "audioEngineChanged\0checked\0"
    "sinkSelectionChanged\0index\0"
    "muteOnMiddleClickChanged\0state\0"
    "mixerLineEditChanged\0command\0"
    "stepSpinBoxChanged\0step\0"
    "ignoreMaxVolumeCheckBoxChanged\0"
    "alwaysShowNotificationsCheckBoxChanged\0"
    "showKeyboardNotificationsCheckBoxChanged\0"
    "loadSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtVolumeConfiguration[] = {

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
       1,    1,   64,    2, 0x0a /* Public */,
       5,    1,   67,    2, 0x0a /* Public */,
       7,    1,   70,    2, 0x0a /* Public */,
       9,    1,   73,    2, 0x0a /* Public */,
      11,    1,   76,    2, 0x0a /* Public */,
      13,    1,   79,    2, 0x0a /* Public */,
      15,    1,   82,    2, 0x0a /* Public */,
      16,    1,   85,    2, 0x0a /* Public */,
      17,    1,   88,    2, 0x0a /* Public */,
      18,    0,   91,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

       0        // eod
};

void LXQtVolumeConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LXQtVolumeConfiguration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setSinkList((*reinterpret_cast< const QList<AudioDevice*>(*)>(_a[1]))); break;
        case 1: _t->audioEngineChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sinkSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->muteOnMiddleClickChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->mixerLineEditChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->stepSpinBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->ignoreMaxVolumeCheckBoxChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->alwaysShowNotificationsCheckBoxChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showKeyboardNotificationsCheckBoxChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->loadSettings(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LXQtVolumeConfiguration::staticMetaObject = { {
    QMetaObject::SuperData::link<LXQtPanelPluginConfigDialog::staticMetaObject>(),
    qt_meta_stringdata_LXQtVolumeConfiguration.data,
    qt_meta_data_LXQtVolumeConfiguration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtVolumeConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtVolumeConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtVolumeConfiguration.stringdata0))
        return static_cast<void*>(this);
    return LXQtPanelPluginConfigDialog::qt_metacast(_clname);
}

int LXQtVolumeConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
