/****************************************************************************
** Meta object code from reading C++ file 'statusnotifier.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-statusnotifier/statusnotifier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusnotifier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StatusNotifier_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusNotifier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusNotifier_t qt_meta_stringdata_StatusNotifier = {
    {
QT_MOC_LITERAL(0, 0, 14) // "StatusNotifier"

    },
    "StatusNotifier"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusNotifier[] = {

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

void StatusNotifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject StatusNotifier::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_StatusNotifier.data,
    qt_meta_data_StatusNotifier,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusNotifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusNotifier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusNotifier.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ILXQtPanelPlugin"))
        return static_cast< ILXQtPanelPlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusNotifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_StatusNotifierLibrary_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusNotifierLibrary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusNotifierLibrary_t qt_meta_stringdata_StatusNotifierLibrary = {
    {
QT_MOC_LITERAL(0, 0, 21) // "StatusNotifierLibrary"

    },
    "StatusNotifierLibrary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusNotifierLibrary[] = {

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

void StatusNotifierLibrary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject StatusNotifierLibrary::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_StatusNotifierLibrary.data,
    qt_meta_data_StatusNotifierLibrary,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusNotifierLibrary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusNotifierLibrary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusNotifierLibrary.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ILXQtPanelPluginLibrary"))
        return static_cast< ILXQtPanelPluginLibrary*>(this);
    if (!strcmp(_clname, "lxqt.org/Panel/PluginInterface/3.0"))
        return static_cast< ILXQtPanelPluginLibrary*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusNotifierLibrary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
