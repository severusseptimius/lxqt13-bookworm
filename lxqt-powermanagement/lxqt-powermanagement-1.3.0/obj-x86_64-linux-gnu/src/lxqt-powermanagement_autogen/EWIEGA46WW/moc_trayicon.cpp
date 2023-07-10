/****************************************************************************
** Meta object code from reading C++ file 'trayicon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/trayicon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trayicon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrayIcon_t {
    QByteArrayData data[17];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrayIcon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrayIcon_t qt_meta_stringdata_TrayIcon = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TrayIcon"
QT_MOC_LITERAL(1, 9, 14), // "toggleShowInfo"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "pauseChanged"
QT_MOC_LITERAL(4, 38, 5), // "PAUSE"
QT_MOC_LITERAL(5, 44, 8), // "duration"
QT_MOC_LITERAL(6, 53, 11), // "iconChanged"
QT_MOC_LITERAL(7, 65, 13), // "updateTooltip"
QT_MOC_LITERAL(8, 79, 20), // "onConfigureTriggered"
QT_MOC_LITERAL(9, 100, 16), // "onPauseTriggered"
QT_MOC_LITERAL(10, 117, 8), // "QAction*"
QT_MOC_LITERAL(11, 126, 6), // "action"
QT_MOC_LITERAL(12, 133, 16), // "onAboutTriggered"
QT_MOC_LITERAL(13, 150, 22), // "onDisableIconTriggered"
QT_MOC_LITERAL(14, 173, 11), // "onActivated"
QT_MOC_LITERAL(15, 185, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(16, 219, 6) // "reason"

    },
    "TrayIcon\0toggleShowInfo\0\0pauseChanged\0"
    "PAUSE\0duration\0iconChanged\0updateTooltip\0"
    "onConfigureTriggered\0onPauseTriggered\0"
    "QAction*\0action\0onAboutTriggered\0"
    "onDisableIconTriggered\0onActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrayIcon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,
      13,    0,   70,    2, 0x08 /* Private */,
      14,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void TrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrayIcon *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toggleShowInfo(); break;
        case 1: _t->pauseChanged((*reinterpret_cast< PAUSE(*)>(_a[1]))); break;
        case 2: _t->iconChanged(); break;
        case 3: _t->updateTooltip(); break;
        case 4: _t->onConfigureTriggered(); break;
        case 5: _t->onPauseTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->onAboutTriggered(); break;
        case 7: _t->onDisableIconTriggered(); break;
        case 8: _t->onActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TrayIcon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrayIcon::toggleShowInfo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TrayIcon::*)(PAUSE );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrayIcon::pauseChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrayIcon::staticMetaObject = { {
    QMetaObject::SuperData::link<QSystemTrayIcon::staticMetaObject>(),
    qt_meta_stringdata_TrayIcon.data,
    qt_meta_data_TrayIcon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrayIcon.stringdata0))
        return static_cast<void*>(this);
    return QSystemTrayIcon::qt_metacast(_clname);
}

int TrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSystemTrayIcon::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void TrayIcon::toggleShowInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TrayIcon::pauseChanged(PAUSE _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
