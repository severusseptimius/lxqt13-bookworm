/****************************************************************************
** Meta object code from reading C++ file 'providers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../providers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'providers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommandProviderItem_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommandProviderItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommandProviderItem_t qt_meta_stringdata_CommandProviderItem = {
    {
QT_MOC_LITERAL(0, 0, 19) // "CommandProviderItem"

    },
    "CommandProviderItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommandProviderItem[] = {

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

void CommandProviderItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CommandProviderItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CommandProviderItem.data,
    qt_meta_data_CommandProviderItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CommandProviderItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommandProviderItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommandProviderItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CommandProviderItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CommandProvider_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommandProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommandProvider_t qt_meta_stringdata_CommandProvider = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CommandProvider"
QT_MOC_LITERAL(1, 16, 16), // "aboutToBeChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7) // "changed"

    },
    "CommandProvider\0aboutToBeChanged\0\0"
    "changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommandProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CommandProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommandProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->aboutToBeChanged(); break;
        case 1: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CommandProvider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandProvider::aboutToBeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CommandProvider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandProvider::changed)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CommandProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CommandProvider.data,
    qt_meta_data_CommandProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CommandProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommandProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommandProvider.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QList<CommandProviderItem*>"))
        return static_cast< QList<CommandProviderItem*>*>(this);
    return QObject::qt_metacast(_clname);
}

int CommandProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CommandProvider::aboutToBeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CommandProvider::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_AppLinkItem_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppLinkItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppLinkItem_t qt_meta_stringdata_AppLinkItem = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AppLinkItem"
QT_MOC_LITERAL(1, 12, 10), // "updateIcon"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "AppLinkItem\0updateIcon\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppLinkItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AppLinkItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppLinkItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateIcon(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject AppLinkItem::staticMetaObject = { {
    QMetaObject::SuperData::link<CommandProviderItem::staticMetaObject>(),
    qt_meta_stringdata_AppLinkItem.data,
    qt_meta_data_AppLinkItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppLinkItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppLinkItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppLinkItem.stringdata0))
        return static_cast<void*>(this);
    return CommandProviderItem::qt_metacast(_clname);
}

int AppLinkItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommandProviderItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_AppLinkProvider_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppLinkProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppLinkProvider_t qt_meta_stringdata_AppLinkProvider = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AppLinkProvider"
QT_MOC_LITERAL(1, 16, 6), // "update"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "AppLinkProvider\0update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppLinkProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AppLinkProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppLinkProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject AppLinkProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<CommandProvider::staticMetaObject>(),
    qt_meta_stringdata_AppLinkProvider.data,
    qt_meta_data_AppLinkProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppLinkProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppLinkProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppLinkProvider.stringdata0))
        return static_cast<void*>(this);
    return CommandProvider::qt_metacast(_clname);
}

int AppLinkProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommandProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_HistoryItem_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HistoryItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HistoryItem_t qt_meta_stringdata_HistoryItem = {
    {
QT_MOC_LITERAL(0, 0, 11) // "HistoryItem"

    },
    "HistoryItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryItem[] = {

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

void HistoryItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject HistoryItem::staticMetaObject = { {
    QMetaObject::SuperData::link<CommandProviderItem::staticMetaObject>(),
    qt_meta_stringdata_HistoryItem.data,
    qt_meta_data_HistoryItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HistoryItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryItem.stringdata0))
        return static_cast<void*>(this);
    return CommandProviderItem::qt_metacast(_clname);
}

int HistoryItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommandProviderItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HistoryProvider_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HistoryProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HistoryProvider_t qt_meta_stringdata_HistoryProvider = {
    {
QT_MOC_LITERAL(0, 0, 15) // "HistoryProvider"

    },
    "HistoryProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryProvider[] = {

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

void HistoryProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject HistoryProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<CommandProvider::staticMetaObject>(),
    qt_meta_stringdata_HistoryProvider.data,
    qt_meta_data_HistoryProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HistoryProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryProvider.stringdata0))
        return static_cast<void*>(this);
    return CommandProvider::qt_metacast(_clname);
}

int HistoryProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommandProvider::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CustomCommandItem_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomCommandItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomCommandItem_t qt_meta_stringdata_CustomCommandItem = {
    {
QT_MOC_LITERAL(0, 0, 17) // "CustomCommandItem"

    },
    "CustomCommandItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomCommandItem[] = {

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

void CustomCommandItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CustomCommandItem::staticMetaObject = { {
    QMetaObject::SuperData::link<CommandProviderItem::staticMetaObject>(),
    qt_meta_stringdata_CustomCommandItem.data,
    qt_meta_data_CustomCommandItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CustomCommandItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomCommandItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomCommandItem.stringdata0))
        return static_cast<void*>(this);
    return CommandProviderItem::qt_metacast(_clname);
}

int CustomCommandItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommandProviderItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CustomCommandProvider_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomCommandProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomCommandProvider_t qt_meta_stringdata_CustomCommandProvider = {
    {
QT_MOC_LITERAL(0, 0, 21) // "CustomCommandProvider"

    },
    "CustomCommandProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomCommandProvider[] = {

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

void CustomCommandProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CustomCommandProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<CommandProvider::staticMetaObject>(),
    qt_meta_stringdata_CustomCommandProvider.data,
    qt_meta_data_CustomCommandProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CustomCommandProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomCommandProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomCommandProvider.stringdata0))
        return static_cast<void*>(this);
    return CommandProvider::qt_metacast(_clname);
}

int CustomCommandProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommandProvider::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MathItem_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MathItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MathItem_t qt_meta_stringdata_MathItem = {
    {
QT_MOC_LITERAL(0, 0, 8) // "MathItem"

    },
    "MathItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MathItem[] = {

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

void MathItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MathItem::staticMetaObject = { {
    QMetaObject::SuperData::link<CommandProviderItem::staticMetaObject>(),
    qt_meta_stringdata_MathItem.data,
    qt_meta_data_MathItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MathItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MathItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MathItem.stringdata0))
        return static_cast<void*>(this);
    return CommandProviderItem::qt_metacast(_clname);
}

int MathItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommandProviderItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MathProvider_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MathProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MathProvider_t qt_meta_stringdata_MathProvider = {
    {
QT_MOC_LITERAL(0, 0, 12) // "MathProvider"

    },
    "MathProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MathProvider[] = {

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

void MathProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MathProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<CommandProvider::staticMetaObject>(),
    qt_meta_stringdata_MathProvider.data,
    qt_meta_data_MathProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MathProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MathProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MathProvider.stringdata0))
        return static_cast<void*>(this);
    return CommandProvider::qt_metacast(_clname);
}

int MathProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommandProvider::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VirtualBoxItem_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VirtualBoxItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VirtualBoxItem_t qt_meta_stringdata_VirtualBoxItem = {
    {
QT_MOC_LITERAL(0, 0, 14) // "VirtualBoxItem"

    },
    "VirtualBoxItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VirtualBoxItem[] = {

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

void VirtualBoxItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject VirtualBoxItem::staticMetaObject = { {
    QMetaObject::SuperData::link<CommandProviderItem::staticMetaObject>(),
    qt_meta_stringdata_VirtualBoxItem.data,
    qt_meta_data_VirtualBoxItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VirtualBoxItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualBoxItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VirtualBoxItem.stringdata0))
        return static_cast<void*>(this);
    return CommandProviderItem::qt_metacast(_clname);
}

int VirtualBoxItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommandProviderItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_VirtualBoxProvider_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VirtualBoxProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VirtualBoxProvider_t qt_meta_stringdata_VirtualBoxProvider = {
    {
QT_MOC_LITERAL(0, 0, 18) // "VirtualBoxProvider"

    },
    "VirtualBoxProvider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VirtualBoxProvider[] = {

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

void VirtualBoxProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject VirtualBoxProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<CommandProvider::staticMetaObject>(),
    qt_meta_stringdata_VirtualBoxProvider.data,
    qt_meta_data_VirtualBoxProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VirtualBoxProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualBoxProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VirtualBoxProvider.stringdata0))
        return static_cast<void*>(this);
    return CommandProvider::qt_metacast(_clname);
}

int VirtualBoxProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommandProvider::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ExternalProviderItem_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExternalProviderItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExternalProviderItem_t qt_meta_stringdata_ExternalProviderItem = {
    {
QT_MOC_LITERAL(0, 0, 20) // "ExternalProviderItem"

    },
    "ExternalProviderItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExternalProviderItem[] = {

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

void ExternalProviderItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ExternalProviderItem::staticMetaObject = { {
    QMetaObject::SuperData::link<CommandProviderItem::staticMetaObject>(),
    qt_meta_stringdata_ExternalProviderItem.data,
    qt_meta_data_ExternalProviderItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExternalProviderItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExternalProviderItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExternalProviderItem.stringdata0))
        return static_cast<void*>(this);
    return CommandProviderItem::qt_metacast(_clname);
}

int ExternalProviderItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommandProviderItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ExternalProvider_t {
    QByteArrayData data[7];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExternalProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExternalProvider_t qt_meta_stringdata_ExternalProvider = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ExternalProvider"
QT_MOC_LITERAL(1, 17, 11), // "dataChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "readFromProcess"
QT_MOC_LITERAL(4, 46, 13), // "newListOfMaps"
QT_MOC_LITERAL(5, 60, 29), // "QList<QMap<QString,QString> >"
QT_MOC_LITERAL(6, 90, 4) // "maps"

    },
    "ExternalProvider\0dataChanged\0\0"
    "readFromProcess\0newListOfMaps\0"
    "QList<QMap<QString,QString> >\0maps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExternalProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void ExternalProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExternalProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->readFromProcess(); break;
        case 2: _t->newListOfMaps((*reinterpret_cast< QList<QMap<QString,QString> >(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExternalProvider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExternalProvider::dataChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ExternalProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<CommandProvider::staticMetaObject>(),
    qt_meta_stringdata_ExternalProvider.data,
    qt_meta_data_ExternalProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExternalProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExternalProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExternalProvider.stringdata0))
        return static_cast<void*>(this);
    return CommandProvider::qt_metacast(_clname);
}

int ExternalProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommandProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ExternalProvider::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
