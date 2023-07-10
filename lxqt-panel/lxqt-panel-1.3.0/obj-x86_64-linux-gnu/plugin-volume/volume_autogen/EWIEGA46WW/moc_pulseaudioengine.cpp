/****************************************************************************
** Meta object code from reading C++ file 'pulseaudioengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-volume/pulseaudioengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pulseaudioengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PulseAudioEngine_t {
    QByteArrayData data[20];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PulseAudioEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PulseAudioEngine_t qt_meta_stringdata_PulseAudioEngine = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PulseAudioEngine"
QT_MOC_LITERAL(1, 17, 15), // "sinkInfoChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "uint32_t"
QT_MOC_LITERAL(4, 43, 3), // "idx"
QT_MOC_LITERAL(5, 47, 19), // "contextStateChanged"
QT_MOC_LITERAL(6, 67, 18), // "pa_context_state_t"
QT_MOC_LITERAL(7, 86, 5), // "state"
QT_MOC_LITERAL(8, 92, 12), // "readyChanged"
QT_MOC_LITERAL(9, 105, 5), // "ready"
QT_MOC_LITERAL(10, 111, 18), // "commitDeviceVolume"
QT_MOC_LITERAL(11, 130, 12), // "AudioDevice*"
QT_MOC_LITERAL(12, 143, 6), // "device"
QT_MOC_LITERAL(13, 150, 16), // "retrieveSinkInfo"
QT_MOC_LITERAL(14, 167, 7), // "setMute"
QT_MOC_LITERAL(15, 175, 15), // "setContextState"
QT_MOC_LITERAL(16, 191, 18), // "setIgnoreMaxVolume"
QT_MOC_LITERAL(17, 210, 6), // "ignore"
QT_MOC_LITERAL(18, 217, 25), // "handleContextStateChanged"
QT_MOC_LITERAL(19, 243, 14) // "connectContext"

    },
    "PulseAudioEngine\0sinkInfoChanged\0\0"
    "uint32_t\0idx\0contextStateChanged\0"
    "pa_context_state_t\0state\0readyChanged\0"
    "ready\0commitDeviceVolume\0AudioDevice*\0"
    "device\0retrieveSinkInfo\0setMute\0"
    "setContextState\0setIgnoreMaxVolume\0"
    "ignore\0handleContextStateChanged\0"
    "connectContext"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PulseAudioEngine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       8,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   73,    2, 0x0a /* Public */,
      13,    1,   76,    2, 0x0a /* Public */,
      14,    2,   79,    2, 0x0a /* Public */,
      15,    1,   84,    2, 0x0a /* Public */,
      16,    1,   87,    2, 0x0a /* Public */,
      18,    0,   90,    2, 0x08 /* Private */,
      19,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Bool,   12,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PulseAudioEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PulseAudioEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sinkInfoChanged((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 1: _t->contextStateChanged((*reinterpret_cast< pa_context_state_t(*)>(_a[1]))); break;
        case 2: _t->readyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->commitDeviceVolume((*reinterpret_cast< AudioDevice*(*)>(_a[1]))); break;
        case 4: _t->retrieveSinkInfo((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 5: _t->setMute((*reinterpret_cast< AudioDevice*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->setContextState((*reinterpret_cast< pa_context_state_t(*)>(_a[1]))); break;
        case 7: _t->setIgnoreMaxVolume((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->handleContextStateChanged(); break;
        case 9: _t->connectContext(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PulseAudioEngine::*)(uint32_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PulseAudioEngine::sinkInfoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PulseAudioEngine::*)(pa_context_state_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PulseAudioEngine::contextStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PulseAudioEngine::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PulseAudioEngine::readyChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PulseAudioEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<AudioEngine::staticMetaObject>(),
    qt_meta_stringdata_PulseAudioEngine.data,
    qt_meta_data_PulseAudioEngine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PulseAudioEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PulseAudioEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PulseAudioEngine.stringdata0))
        return static_cast<void*>(this);
    return AudioEngine::qt_metacast(_clname);
}

int PulseAudioEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioEngine::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PulseAudioEngine::sinkInfoChanged(uint32_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PulseAudioEngine::contextStateChanged(pa_context_state_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PulseAudioEngine::readyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
