/****************************************************************************
** Meta object code from reading C++ file 'native_adaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../daemon/native_adaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'native_adaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NativeAdaptor_t {
    QByteArrayData data[17];
    char stringdata0[293];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NativeAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NativeAdaptor_t qt_meta_stringdata_NativeAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NativeAdaptor"
QT_MOC_LITERAL(1, 14, 17), // "onAddClientAction"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 26), // "QPair<QString,qulonglong>&"
QT_MOC_LITERAL(4, 60, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(5, 76, 20), // "onModifyClientAction"
QT_MOC_LITERAL(6, 97, 11), // "qulonglong&"
QT_MOC_LITERAL(7, 109, 28), // "onChangeClientActionShortcut"
QT_MOC_LITERAL(8, 138, 20), // "onRemoveClientAction"
QT_MOC_LITERAL(9, 159, 5), // "bool&"
QT_MOC_LITERAL(10, 165, 24), // "onDeactivateClientAction"
QT_MOC_LITERAL(11, 190, 20), // "onEnableClientAction"
QT_MOC_LITERAL(12, 211, 23), // "onIsClientActionEnabled"
QT_MOC_LITERAL(13, 235, 14), // "onGrabShortcut"
QT_MOC_LITERAL(14, 250, 8), // "QString&"
QT_MOC_LITERAL(15, 259, 12), // "QDBusMessage"
QT_MOC_LITERAL(16, 272, 20) // "onCancelShortcutGrab"

    },
    "NativeAdaptor\0onAddClientAction\0\0"
    "QPair<QString,qulonglong>&\0QDBusObjectPath\0"
    "onModifyClientAction\0qulonglong&\0"
    "onChangeClientActionShortcut\0"
    "onRemoveClientAction\0bool&\0"
    "onDeactivateClientAction\0onEnableClientAction\0"
    "onIsClientActionEnabled\0onGrabShortcut\0"
    "QString&\0QDBusMessage\0onCancelShortcutGrab"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NativeAdaptor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   59,    2, 0x06 /* Public */,
       5,    4,   70,    2, 0x06 /* Public */,
       7,    4,   79,    2, 0x06 /* Public */,
       8,    3,   88,    2, 0x06 /* Public */,
      10,    3,   95,    2, 0x06 /* Public */,
      11,    4,  102,    2, 0x06 /* Public */,
      12,    3,  111,    2, 0x06 /* Public */,
      13,    6,  118,    2, 0x06 /* Public */,
      16,    0,  131,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 4, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 4, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 4, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 4, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 4, QMetaType::Bool, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 4, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 14, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 15,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void NativeAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NativeAdaptor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAddClientAction((*reinterpret_cast< QPair<QString,qulonglong>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 1: _t->onModifyClientAction((*reinterpret_cast< qulonglong(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 2: _t->onChangeClientActionShortcut((*reinterpret_cast< QPair<QString,qulonglong>(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 3: _t->onRemoveClientAction((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->onDeactivateClientAction((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->onEnableClientAction((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 6: _t->onIsClientActionEnabled((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->onGrabShortcut((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< const QDBusMessage(*)>(_a[6]))); break;
        case 8: _t->onCancelShortcutGrab(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NativeAdaptor::*)(QPair<QString,qulonglong> & , const QString & , const QDBusObjectPath & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NativeAdaptor::onAddClientAction)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NativeAdaptor::*)(qulonglong & , const QDBusObjectPath & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NativeAdaptor::onModifyClientAction)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NativeAdaptor::*)(QPair<QString,qulonglong> & , const QDBusObjectPath & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NativeAdaptor::onChangeClientActionShortcut)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NativeAdaptor::*)(bool & , const QDBusObjectPath & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NativeAdaptor::onRemoveClientAction)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NativeAdaptor::*)(bool & , const QDBusObjectPath & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NativeAdaptor::onDeactivateClientAction)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NativeAdaptor::*)(bool & , const QDBusObjectPath & , bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NativeAdaptor::onEnableClientAction)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (NativeAdaptor::*)(bool & , const QDBusObjectPath & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NativeAdaptor::onIsClientActionEnabled)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (NativeAdaptor::*)(uint , QString & , bool & , bool & , bool & , const QDBusMessage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NativeAdaptor::onGrabShortcut)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (NativeAdaptor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NativeAdaptor::onCancelShortcutGrab)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NativeAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NativeAdaptor.data,
    qt_meta_data_NativeAdaptor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NativeAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NativeAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NativeAdaptor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int NativeAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void NativeAdaptor::onAddClientAction(QPair<QString,qulonglong> & _t1, const QString & _t2, const QDBusObjectPath & _t3, const QString & _t4, const QString & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NativeAdaptor::onModifyClientAction(qulonglong & _t1, const QDBusObjectPath & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NativeAdaptor::onChangeClientActionShortcut(QPair<QString,qulonglong> & _t1, const QDBusObjectPath & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NativeAdaptor::onRemoveClientAction(bool & _t1, const QDBusObjectPath & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NativeAdaptor::onDeactivateClientAction(bool & _t1, const QDBusObjectPath & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NativeAdaptor::onEnableClientAction(bool & _t1, const QDBusObjectPath & _t2, bool _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void NativeAdaptor::onIsClientActionEnabled(bool & _t1, const QDBusObjectPath & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void NativeAdaptor::onGrabShortcut(uint _t1, QString & _t2, bool & _t3, bool & _t4, bool & _t5, const QDBusMessage & _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void NativeAdaptor::onCancelShortcutGrab()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
