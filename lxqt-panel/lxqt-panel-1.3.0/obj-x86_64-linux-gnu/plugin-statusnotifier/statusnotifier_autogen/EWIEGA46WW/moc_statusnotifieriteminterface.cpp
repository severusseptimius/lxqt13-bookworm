/****************************************************************************
** Meta object code from reading C++ file 'statusnotifieriteminterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-statusnotifier/statusnotifieriteminterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusnotifieriteminterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StatusNotifierItemInterface_t {
    QByteArrayData data[36];
    char stringdata0[408];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusNotifierItemInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusNotifierItemInterface_t qt_meta_stringdata_StatusNotifierItemInterface = {
    {
QT_MOC_LITERAL(0, 0, 27), // "StatusNotifierItemInterface"
QT_MOC_LITERAL(1, 28, 16), // "NewAttentionIcon"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 7), // "NewIcon"
QT_MOC_LITERAL(4, 54, 14), // "NewOverlayIcon"
QT_MOC_LITERAL(5, 69, 9), // "NewStatus"
QT_MOC_LITERAL(6, 79, 6), // "status"
QT_MOC_LITERAL(7, 86, 8), // "NewTitle"
QT_MOC_LITERAL(8, 95, 10), // "NewToolTip"
QT_MOC_LITERAL(9, 106, 8), // "Activate"
QT_MOC_LITERAL(10, 115, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(11, 135, 1), // "x"
QT_MOC_LITERAL(12, 137, 1), // "y"
QT_MOC_LITERAL(13, 139, 11), // "ContextMenu"
QT_MOC_LITERAL(14, 151, 6), // "Scroll"
QT_MOC_LITERAL(15, 158, 5), // "delta"
QT_MOC_LITERAL(16, 164, 11), // "orientation"
QT_MOC_LITERAL(17, 176, 17), // "SecondaryActivate"
QT_MOC_LITERAL(18, 194, 17), // "AttentionIconName"
QT_MOC_LITERAL(19, 212, 19), // "AttentionIconPixmap"
QT_MOC_LITERAL(20, 232, 14), // "IconPixmapList"
QT_MOC_LITERAL(21, 247, 18), // "AttentionMovieName"
QT_MOC_LITERAL(22, 266, 8), // "Category"
QT_MOC_LITERAL(23, 275, 8), // "IconName"
QT_MOC_LITERAL(24, 284, 10), // "IconPixmap"
QT_MOC_LITERAL(25, 295, 13), // "IconThemePath"
QT_MOC_LITERAL(26, 309, 2), // "Id"
QT_MOC_LITERAL(27, 312, 10), // "ItemIsMenu"
QT_MOC_LITERAL(28, 323, 4), // "Menu"
QT_MOC_LITERAL(29, 328, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(30, 344, 15), // "OverlayIconName"
QT_MOC_LITERAL(31, 360, 17), // "OverlayIconPixmap"
QT_MOC_LITERAL(32, 378, 6), // "Status"
QT_MOC_LITERAL(33, 385, 5), // "Title"
QT_MOC_LITERAL(34, 391, 7), // "ToolTip"
QT_MOC_LITERAL(35, 399, 8) // "WindowId"

    },
    "StatusNotifierItemInterface\0"
    "NewAttentionIcon\0\0NewIcon\0NewOverlayIcon\0"
    "NewStatus\0status\0NewTitle\0NewToolTip\0"
    "Activate\0QDBusPendingReply<>\0x\0y\0"
    "ContextMenu\0Scroll\0delta\0orientation\0"
    "SecondaryActivate\0AttentionIconName\0"
    "AttentionIconPixmap\0IconPixmapList\0"
    "AttentionMovieName\0Category\0IconName\0"
    "IconPixmap\0IconThemePath\0Id\0ItemIsMenu\0"
    "Menu\0QDBusObjectPath\0OverlayIconName\0"
    "OverlayIconPixmap\0Status\0Title\0ToolTip\0"
    "WindowId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusNotifierItemInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      16,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       7,    0,   70,    2, 0x06 /* Public */,
       8,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   72,    2, 0x0a /* Public */,
      13,    2,   77,    2, 0x0a /* Public */,
      14,    2,   82,    2, 0x0a /* Public */,
      17,    2,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 10, QMetaType::Int, QMetaType::Int,   11,   12,
    0x80000000 | 10, QMetaType::Int, QMetaType::Int,   11,   12,
    0x80000000 | 10, QMetaType::Int, QMetaType::QString,   15,   16,
    0x80000000 | 10, QMetaType::Int, QMetaType::Int,   11,   12,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00095001,
      19, 0x80000000 | 20, 0x00095009,
      21, QMetaType::QString, 0x00095001,
      22, QMetaType::QString, 0x00095001,
      23, QMetaType::QString, 0x00095001,
      24, 0x80000000 | 20, 0x00095009,
      25, QMetaType::QString, 0x00095001,
      26, QMetaType::QString, 0x00095001,
      27, QMetaType::Bool, 0x00095001,
      28, 0x80000000 | 29, 0x00095009,
      30, QMetaType::QString, 0x00095001,
      31, 0x80000000 | 20, 0x00095009,
      32, QMetaType::QString, 0x00095001,
      33, QMetaType::QString, 0x00095001,
      34, 0x80000000 | 34, 0x00095009,
      35, QMetaType::Int, 0x00095001,

       0        // eod
};

void StatusNotifierItemInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatusNotifierItemInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->NewAttentionIcon(); break;
        case 1: _t->NewIcon(); break;
        case 2: _t->NewOverlayIcon(); break;
        case 3: _t->NewStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->NewTitle(); break;
        case 5: _t->NewToolTip(); break;
        case 6: { QDBusPendingReply<> _r = _t->Activate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QDBusPendingReply<> _r = _t->ContextMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QDBusPendingReply<> _r = _t->Scroll((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 9: { QDBusPendingReply<> _r = _t->SecondaryActivate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StatusNotifierItemInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierItemInterface::NewAttentionIcon)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StatusNotifierItemInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierItemInterface::NewIcon)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StatusNotifierItemInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierItemInterface::NewOverlayIcon)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StatusNotifierItemInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierItemInterface::NewStatus)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StatusNotifierItemInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierItemInterface::NewTitle)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (StatusNotifierItemInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierItemInterface::NewToolTip)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
        case 14:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ToolTip >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StatusNotifierItemInterface *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->attentionIconName(); break;
        case 1: *reinterpret_cast< IconPixmapList*>(_v) = _t->attentionIconPixmap(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->attentionMovieName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->category(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->iconName(); break;
        case 5: *reinterpret_cast< IconPixmapList*>(_v) = _t->iconPixmap(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->iconThemePath(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->itemIsMenu(); break;
        case 9: *reinterpret_cast< QDBusObjectPath*>(_v) = _t->menu(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->overlayIconName(); break;
        case 11: *reinterpret_cast< IconPixmapList*>(_v) = _t->overlayIconPixmap(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->status(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 14: *reinterpret_cast< ToolTip*>(_v) = _t->toolTip(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->windowId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject StatusNotifierItemInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_StatusNotifierItemInterface.data,
    qt_meta_data_StatusNotifierItemInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusNotifierItemInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusNotifierItemInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusNotifierItemInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int StatusNotifierItemInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StatusNotifierItemInterface::NewAttentionIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void StatusNotifierItemInterface::NewIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void StatusNotifierItemInterface::NewOverlayIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void StatusNotifierItemInterface::NewStatus(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StatusNotifierItemInterface::NewTitle()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void StatusNotifierItemInterface::NewToolTip()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
