/****************************************************************************
** Meta object code from reading C++ file 'audiodevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-volume/audiodevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audiodevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioDevice_t {
    QByteArrayData data[19];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioDevice_t qt_meta_stringdata_AudioDevice = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AudioDevice"
QT_MOC_LITERAL(1, 12, 13), // "volumeChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "volume"
QT_MOC_LITERAL(4, 34, 11), // "muteChanged"
QT_MOC_LITERAL(5, 46, 5), // "state"
QT_MOC_LITERAL(6, 52, 11), // "nameChanged"
QT_MOC_LITERAL(7, 64, 4), // "name"
QT_MOC_LITERAL(8, 69, 18), // "descriptionChanged"
QT_MOC_LITERAL(9, 88, 11), // "description"
QT_MOC_LITERAL(10, 100, 12), // "indexChanged"
QT_MOC_LITERAL(11, 113, 5), // "index"
QT_MOC_LITERAL(12, 119, 9), // "setVolume"
QT_MOC_LITERAL(13, 129, 17), // "setVolumeNoCommit"
QT_MOC_LITERAL(14, 147, 10), // "toggleMute"
QT_MOC_LITERAL(15, 158, 7), // "setMute"
QT_MOC_LITERAL(16, 166, 15), // "setMuteNoCommit"
QT_MOC_LITERAL(17, 182, 4), // "type"
QT_MOC_LITERAL(18, 187, 15) // "AudioDeviceType"

    },
    "AudioDevice\0volumeChanged\0\0volume\0"
    "muteChanged\0state\0nameChanged\0name\0"
    "descriptionChanged\0description\0"
    "indexChanged\0index\0setVolume\0"
    "setVolumeNoCommit\0toggleMute\0setMute\0"
    "setMuteNoCommit\0type\0AudioDeviceType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       8,    1,   73,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   79,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x0a /* Public */,
      14,    0,   85,    2, 0x0a /* Public */,
      15,    1,   86,    2, 0x0a /* Public */,
      16,    1,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::UInt,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,
      17, 0x80000000 | 18, 0x00095409,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void AudioDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->muteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->descriptionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->indexChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setVolumeNoCommit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->toggleMute(); break;
        case 8: _t->setMute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setMuteNoCommit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioDevice::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioDevice::volumeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioDevice::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioDevice::muteChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AudioDevice::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioDevice::nameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AudioDevice::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioDevice::descriptionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AudioDevice::*)(uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioDevice::indexChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AudioDevice *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->volume(); break;
        case 1: *reinterpret_cast< AudioDeviceType*>(_v) = _t->type(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AudioDevice *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVolume(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AudioDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AudioDevice.data,
    qt_meta_data_AudioDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AudioDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioDevice.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AudioDevice::volumeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AudioDevice::muteChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AudioDevice::nameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AudioDevice::descriptionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AudioDevice::indexChanged(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
