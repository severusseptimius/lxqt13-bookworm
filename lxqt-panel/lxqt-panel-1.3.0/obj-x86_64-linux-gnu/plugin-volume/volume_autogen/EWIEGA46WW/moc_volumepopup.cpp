/****************************************************************************
** Meta object code from reading C++ file 'volumepopup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-volume/volumepopup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'volumepopup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VolumePopup_t {
    QByteArrayData data[15];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VolumePopup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VolumePopup_t qt_meta_stringdata_VolumePopup = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VolumePopup"
QT_MOC_LITERAL(1, 12, 12), // "mouseEntered"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "mouseLeft"
QT_MOC_LITERAL(4, 36, 13), // "deviceChanged"
QT_MOC_LITERAL(5, 50, 11), // "launchMixer"
QT_MOC_LITERAL(6, 62, 16), // "stockIconChanged"
QT_MOC_LITERAL(7, 79, 8), // "iconName"
QT_MOC_LITERAL(8, 88, 24), // "handleSliderValueChanged"
QT_MOC_LITERAL(9, 113, 5), // "value"
QT_MOC_LITERAL(10, 119, 23), // "handleMuteToggleClicked"
QT_MOC_LITERAL(11, 143, 25), // "handleDeviceVolumeChanged"
QT_MOC_LITERAL(12, 169, 6), // "volume"
QT_MOC_LITERAL(13, 176, 23), // "handleDeviceMuteChanged"
QT_MOC_LITERAL(14, 200, 4) // "mute"

    },
    "VolumePopup\0mouseEntered\0\0mouseLeft\0"
    "deviceChanged\0launchMixer\0stockIconChanged\0"
    "iconName\0handleSliderValueChanged\0"
    "value\0handleMuteToggleClicked\0"
    "handleDeviceVolumeChanged\0volume\0"
    "handleDeviceMuteChanged\0mute"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VolumePopup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   66,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    1,   70,    2, 0x08 /* Private */,
      13,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void VolumePopup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VolumePopup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mouseEntered(); break;
        case 1: _t->mouseLeft(); break;
        case 2: _t->deviceChanged(); break;
        case 3: _t->launchMixer(); break;
        case 4: _t->stockIconChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->handleSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->handleMuteToggleClicked(); break;
        case 7: _t->handleDeviceVolumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->handleDeviceMuteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VolumePopup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumePopup::mouseEntered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VolumePopup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumePopup::mouseLeft)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VolumePopup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumePopup::deviceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VolumePopup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumePopup::launchMixer)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VolumePopup::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumePopup::stockIconChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VolumePopup::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_VolumePopup.data,
    qt_meta_data_VolumePopup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VolumePopup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolumePopup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VolumePopup.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int VolumePopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void VolumePopup::mouseEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VolumePopup::mouseLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VolumePopup::deviceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void VolumePopup::launchMixer()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void VolumePopup::stockIconChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
