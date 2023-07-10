/****************************************************************************
** Meta object code from reading C++ file 'notificationlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/notificationlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notificationlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NotificationLayout_t {
    QByteArrayData data[24];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NotificationLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NotificationLayout_t qt_meta_stringdata_NotificationLayout = {
    {
QT_MOC_LITERAL(0, 0, 18), // "NotificationLayout"
QT_MOC_LITERAL(1, 19, 22), // "allNotificationsClosed"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 21), // "notificationAvailable"
QT_MOC_LITERAL(4, 65, 13), // "heightChanged"
QT_MOC_LITERAL(5, 79, 18), // "notificationClosed"
QT_MOC_LITERAL(6, 98, 2), // "id"
QT_MOC_LITERAL(7, 101, 6), // "reason"
QT_MOC_LITERAL(8, 108, 4), // "date"
QT_MOC_LITERAL(9, 113, 13), // "actionInvoked"
QT_MOC_LITERAL(10, 127, 9), // "actionKey"
QT_MOC_LITERAL(11, 137, 15), // "addNotification"
QT_MOC_LITERAL(12, 153, 11), // "application"
QT_MOC_LITERAL(13, 165, 7), // "summary"
QT_MOC_LITERAL(14, 173, 4), // "body"
QT_MOC_LITERAL(15, 178, 4), // "icon"
QT_MOC_LITERAL(16, 183, 7), // "timeout"
QT_MOC_LITERAL(17, 191, 7), // "actions"
QT_MOC_LITERAL(18, 199, 5), // "hints"
QT_MOC_LITERAL(19, 205, 6), // "noSave"
QT_MOC_LITERAL(20, 212, 18), // "removeNotification"
QT_MOC_LITERAL(21, 231, 25), // "removeNotificationTimeout"
QT_MOC_LITERAL(22, 257, 22), // "removeNotificationUser"
QT_MOC_LITERAL(23, 280, 24) // "notificationActionCalled"

    },
    "NotificationLayout\0allNotificationsClosed\0"
    "\0notificationAvailable\0heightChanged\0"
    "notificationClosed\0id\0reason\0date\0"
    "actionInvoked\0actionKey\0addNotification\0"
    "application\0summary\0body\0icon\0timeout\0"
    "actions\0hints\0noSave\0removeNotification\0"
    "removeNotificationTimeout\0"
    "removeNotificationUser\0notificationActionCalled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotificationLayout[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    1,   71,    2, 0x06 /* Public */,
       5,    3,   74,    2, 0x06 /* Public */,
       9,    2,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    9,   86,    2, 0x0a /* Public */,
      11,    8,  105,    2, 0x2a /* Public | MethodCloned */,
      20,    2,  122,    2, 0x0a /* Public */,
      21,    0,  127,    2, 0x08 /* Private */,
      22,    0,  128,    2, 0x08 /* Private */,
      23,    1,  129,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    6,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QStringList, QMetaType::QVariantMap, QMetaType::Bool,    6,   12,   13,   14,   15,   16,   17,   18,   19,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QStringList, QMetaType::QVariantMap,    6,   12,   13,   14,   15,   16,   17,   18,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void NotificationLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NotificationLayout *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->allNotificationsClosed(); break;
        case 1: _t->notificationAvailable(); break;
        case 2: _t->heightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->notificationClosed((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->actionInvoked((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->addNotification((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< const QStringList(*)>(_a[7])),(*reinterpret_cast< const QVariantMap(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 6: _t->addNotification((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< const QStringList(*)>(_a[7])),(*reinterpret_cast< const QVariantMap(*)>(_a[8]))); break;
        case 7: _t->removeNotification((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 8: _t->removeNotificationTimeout(); break;
        case 9: _t->removeNotificationUser(); break;
        case 10: _t->notificationActionCalled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NotificationLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationLayout::allNotificationsClosed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NotificationLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationLayout::notificationAvailable)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NotificationLayout::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationLayout::heightChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NotificationLayout::*)(uint , uint , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationLayout::notificationClosed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NotificationLayout::*)(uint , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationLayout::actionInvoked)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NotificationLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_NotificationLayout.data,
    qt_meta_data_NotificationLayout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NotificationLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotificationLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NotificationLayout.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NotificationLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void NotificationLayout::allNotificationsClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NotificationLayout::notificationAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NotificationLayout::heightChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NotificationLayout::notificationClosed(uint _t1, uint _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NotificationLayout::actionInvoked(uint _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
