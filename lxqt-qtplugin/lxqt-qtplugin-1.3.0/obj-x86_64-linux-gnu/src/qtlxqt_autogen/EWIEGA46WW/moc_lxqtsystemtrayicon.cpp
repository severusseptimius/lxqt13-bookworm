/****************************************************************************
** Meta object code from reading C++ file 'lxqtsystemtrayicon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/lxqtsystemtrayicon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lxqtsystemtrayicon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemTrayMenu_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemTrayMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemTrayMenu_t qt_meta_stringdata_SystemTrayMenu = {
    {
QT_MOC_LITERAL(0, 0, 14) // "SystemTrayMenu"

    },
    "SystemTrayMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemTrayMenu[] = {

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

void SystemTrayMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SystemTrayMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlatformMenu::staticMetaObject>(),
    qt_meta_stringdata_SystemTrayMenu.data,
    qt_meta_data_SystemTrayMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemTrayMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemTrayMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTrayMenu.stringdata0))
        return static_cast<void*>(this);
    return QPlatformMenu::qt_metacast(_clname);
}

int SystemTrayMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformMenu::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SystemTrayMenuItem_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemTrayMenuItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemTrayMenuItem_t qt_meta_stringdata_SystemTrayMenuItem = {
    {
QT_MOC_LITERAL(0, 0, 18) // "SystemTrayMenuItem"

    },
    "SystemTrayMenuItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemTrayMenuItem[] = {

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

void SystemTrayMenuItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SystemTrayMenuItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlatformMenuItem::staticMetaObject>(),
    qt_meta_stringdata_SystemTrayMenuItem.data,
    qt_meta_data_SystemTrayMenuItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemTrayMenuItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemTrayMenuItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTrayMenuItem.stringdata0))
        return static_cast<void*>(this);
    return QPlatformMenuItem::qt_metacast(_clname);
}

int SystemTrayMenuItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformMenuItem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
