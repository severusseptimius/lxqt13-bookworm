/****************************************************************************
** Meta object code from reading C++ file 'filechooser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/filechooser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filechooser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LXQt__FileChooserPortal_t {
    QByteArrayData data[14];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQt__FileChooserPortal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQt__FileChooserPortal_t qt_meta_stringdata_LXQt__FileChooserPortal = {
    {
QT_MOC_LITERAL(0, 0, 23), // "LXQt::FileChooserPortal"
QT_MOC_LITERAL(1, 24, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 40, 39), // "org.freedesktop.impl.portal.F..."
QT_MOC_LITERAL(3, 80, 8), // "OpenFile"
QT_MOC_LITERAL(4, 89, 0), // ""
QT_MOC_LITERAL(5, 90, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(6, 106, 6), // "handle"
QT_MOC_LITERAL(7, 113, 6), // "app_id"
QT_MOC_LITERAL(8, 120, 13), // "parent_window"
QT_MOC_LITERAL(9, 134, 5), // "title"
QT_MOC_LITERAL(10, 140, 7), // "options"
QT_MOC_LITERAL(11, 148, 12), // "QVariantMap&"
QT_MOC_LITERAL(12, 161, 7), // "results"
QT_MOC_LITERAL(13, 169, 8) // "SaveFile"

    },
    "LXQt::FileChooserPortal\0D-Bus Interface\0"
    "org.freedesktop.impl.portal.FileChooser\0"
    "OpenFile\0\0QDBusObjectPath\0handle\0"
    "app_id\0parent_window\0title\0options\0"
    "QVariantMap&\0results\0SaveFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQt__FileChooserPortal[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    6,   26,    4, 0x0a /* Public */,
      13,    6,   39,    4, 0x0a /* Public */,

 // slots: parameters
    QMetaType::UInt, 0x80000000 | 5, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QVariantMap, 0x80000000 | 11,    6,    7,    8,    9,   10,   12,
    QMetaType::UInt, 0x80000000 | 5, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QVariantMap, 0x80000000 | 11,    6,    7,    8,    9,   10,   12,

       0        // eod
};

void LXQt::FileChooserPortal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileChooserPortal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { uint _r = _t->OpenFile((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QVariantMap(*)>(_a[5])),(*reinterpret_cast< QVariantMap(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 1: { uint _r = _t->SaveFile((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QVariantMap(*)>(_a[5])),(*reinterpret_cast< QVariantMap(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LXQt::FileChooserPortal::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_LXQt__FileChooserPortal.data,
    qt_meta_data_LXQt__FileChooserPortal,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQt::FileChooserPortal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQt::FileChooserPortal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQt__FileChooserPortal.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int LXQt::FileChooserPortal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
