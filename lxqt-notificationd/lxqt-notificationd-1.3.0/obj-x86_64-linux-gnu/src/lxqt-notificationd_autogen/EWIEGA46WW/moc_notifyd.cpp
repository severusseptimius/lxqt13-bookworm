/****************************************************************************
** Meta object code from reading C++ file 'notifyd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/notifyd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notifyd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Notifyd_t {
    QByteArrayData data[38];
    char stringdata0[397];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Notifyd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Notifyd_t qt_meta_stringdata_Notifyd = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Notifyd"
QT_MOC_LITERAL(1, 8, 13), // "ActionInvoked"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3), // "in0"
QT_MOC_LITERAL(4, 27, 3), // "in1"
QT_MOC_LITERAL(5, 31, 18), // "NotificationClosed"
QT_MOC_LITERAL(6, 50, 18), // "notificationClosed"
QT_MOC_LITERAL(7, 69, 2), // "id"
QT_MOC_LITERAL(8, 72, 6), // "reason"
QT_MOC_LITERAL(9, 79, 17), // "notificationAdded"
QT_MOC_LITERAL(10, 97, 11), // "application"
QT_MOC_LITERAL(11, 109, 5), // "title"
QT_MOC_LITERAL(12, 115, 11), // "description"
QT_MOC_LITERAL(13, 127, 4), // "icon"
QT_MOC_LITERAL(14, 132, 7), // "timeout"
QT_MOC_LITERAL(15, 140, 7), // "actions"
QT_MOC_LITERAL(16, 148, 5), // "hints"
QT_MOC_LITERAL(17, 154, 6), // "noSave"
QT_MOC_LITERAL(18, 161, 17), // "CloseNotification"
QT_MOC_LITERAL(19, 179, 15), // "GetCapabilities"
QT_MOC_LITERAL(20, 195, 20), // "GetServerInformation"
QT_MOC_LITERAL(21, 216, 8), // "QString&"
QT_MOC_LITERAL(22, 225, 6), // "vendor"
QT_MOC_LITERAL(23, 232, 7), // "version"
QT_MOC_LITERAL(24, 240, 12), // "spec_version"
QT_MOC_LITERAL(25, 253, 6), // "Notify"
QT_MOC_LITERAL(26, 260, 8), // "app_name"
QT_MOC_LITERAL(27, 269, 11), // "replaces_id"
QT_MOC_LITERAL(28, 281, 8), // "app_icon"
QT_MOC_LITERAL(29, 290, 7), // "summary"
QT_MOC_LITERAL(30, 298, 4), // "body"
QT_MOC_LITERAL(31, 303, 14), // "expire_timeout"
QT_MOC_LITERAL(32, 318, 14), // "reloadSettings"
QT_MOC_LITERAL(33, 333, 9), // "checkTray"
QT_MOC_LITERAL(34, 343, 19), // "addToUnattendedList"
QT_MOC_LITERAL(35, 363, 4), // "date"
QT_MOC_LITERAL(36, 368, 17), // "restoreUnattended"
QT_MOC_LITERAL(37, 386, 10) // "updateIcon"

    },
    "Notifyd\0ActionInvoked\0\0in0\0in1\0"
    "NotificationClosed\0notificationClosed\0"
    "id\0reason\0notificationAdded\0application\0"
    "title\0description\0icon\0timeout\0actions\0"
    "hints\0noSave\0CloseNotification\0"
    "GetCapabilities\0GetServerInformation\0"
    "QString&\0vendor\0version\0spec_version\0"
    "Notify\0app_name\0replaces_id\0app_icon\0"
    "summary\0body\0expire_timeout\0reloadSettings\0"
    "checkTray\0addToUnattendedList\0date\0"
    "restoreUnattended\0updateIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Notifyd[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       5,    2,   89,    2, 0x06 /* Public */,
       6,    2,   94,    2, 0x06 /* Public */,
       9,    9,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,  118,    2, 0x0a /* Public */,
      19,    0,  121,    2, 0x0a /* Public */,
      20,    3,  122,    2, 0x0a /* Public */,
      25,    9,  129,    2, 0x0a /* Public */,
      25,    8,  148,    2, 0x2a /* Public | MethodCloned */,
      32,    0,  165,    2, 0x08 /* Private */,
      33,    0,  166,    2, 0x08 /* Private */,
      34,    3,  167,    2, 0x08 /* Private */,
      36,    0,  174,    2, 0x08 /* Private */,
      37,    0,  175,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    7,    8,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QStringList, QMetaType::QVariantMap, QMetaType::Bool,    7,   10,   11,   12,   13,   14,   15,   16,   17,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    7,
    QMetaType::QStringList,
    QMetaType::QString, 0x80000000 | 21, 0x80000000 | 21, 0x80000000 | 21,   22,   23,   24,
    QMetaType::UInt, QMetaType::QString, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QStringList, QMetaType::QVariantMap, QMetaType::Int, QMetaType::Bool,   26,   27,   28,   29,   30,   15,   16,   31,   17,
    QMetaType::UInt, QMetaType::QString, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QStringList, QMetaType::QVariantMap, QMetaType::Int,   26,   27,   28,   29,   30,   15,   16,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::QString,    7,    8,   35,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Notifyd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Notifyd *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ActionInvoked((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->NotificationClosed((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: _t->notificationClosed((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 3: _t->notificationAdded((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< const QStringList(*)>(_a[7])),(*reinterpret_cast< const QVariantMap(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 4: _t->CloseNotification((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: { QStringList _r = _t->GetCapabilities();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->GetServerInformation((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { uint _r = _t->Notify((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QStringList(*)>(_a[6])),(*reinterpret_cast< const QVariantMap(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 8: { uint _r = _t->Notify((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QStringList(*)>(_a[6])),(*reinterpret_cast< const QVariantMap(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->reloadSettings(); break;
        case 10: _t->checkTray(); break;
        case 11: _t->addToUnattendedList((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->restoreUnattended(); break;
        case 13: _t->updateIcon(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Notifyd::*)(uint , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Notifyd::ActionInvoked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Notifyd::*)(uint , uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Notifyd::NotificationClosed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Notifyd::*)(uint , uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Notifyd::notificationClosed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Notifyd::*)(uint , const QString & , const QString & , const QString & , const QString & , int , const QStringList & , const QVariantMap & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Notifyd::notificationAdded)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Notifyd::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Notifyd.data,
    qt_meta_data_Notifyd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Notifyd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Notifyd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Notifyd.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Notifyd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Notifyd::ActionInvoked(uint _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Notifyd::NotificationClosed(uint _t1, uint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Notifyd::notificationClosed(uint _t1, uint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Notifyd::notificationAdded(uint _t1, const QString & _t2, const QString & _t3, const QString & _t4, const QString & _t5, int _t6, const QStringList & _t7, const QVariantMap & _t8, bool _t9)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
