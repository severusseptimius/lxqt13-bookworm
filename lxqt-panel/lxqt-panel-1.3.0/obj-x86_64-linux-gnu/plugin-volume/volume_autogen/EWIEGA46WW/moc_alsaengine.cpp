/****************************************************************************
** Meta object code from reading C++ file 'alsaengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-volume/alsaengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alsaengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AlsaEngine_t {
    QByteArrayData data[11];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlsaEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlsaEngine_t qt_meta_stringdata_AlsaEngine = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AlsaEngine"
QT_MOC_LITERAL(1, 11, 18), // "commitDeviceVolume"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "AudioDevice*"
QT_MOC_LITERAL(4, 44, 6), // "device"
QT_MOC_LITERAL(5, 51, 7), // "setMute"
QT_MOC_LITERAL(6, 59, 5), // "state"
QT_MOC_LITERAL(7, 65, 12), // "updateDevice"
QT_MOC_LITERAL(8, 78, 11), // "AlsaDevice*"
QT_MOC_LITERAL(9, 90, 22), // "driveAlsaEventHandling"
QT_MOC_LITERAL(10, 113, 2) // "fd"

    },
    "AlsaEngine\0commitDeviceVolume\0\0"
    "AudioDevice*\0device\0setMute\0state\0"
    "updateDevice\0AlsaDevice*\0"
    "driveAlsaEventHandling\0fd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlsaEngine[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       5,    2,   37,    2, 0x0a /* Public */,
       7,    1,   42,    2, 0x0a /* Public */,
       9,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    4,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void AlsaEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlsaEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->commitDeviceVolume((*reinterpret_cast< AudioDevice*(*)>(_a[1]))); break;
        case 1: _t->setMute((*reinterpret_cast< AudioDevice*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->updateDevice((*reinterpret_cast< AlsaDevice*(*)>(_a[1]))); break;
        case 3: _t->driveAlsaEventHandling((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AlsaEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<AudioEngine::staticMetaObject>(),
    qt_meta_stringdata_AlsaEngine.data,
    qt_meta_data_AlsaEngine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlsaEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlsaEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlsaEngine.stringdata0))
        return static_cast<void*>(this);
    return AudioEngine::qt_metacast(_clname);
}

int AlsaEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioEngine::qt_metacall(_c, _id, _a);
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
