/****************************************************************************
** Meta object code from reading C++ file 'statusnotifieritem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/statusnotifieritem/statusnotifieritem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusnotifieritem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StatusNotifierItem_t {
    QByteArrayData data[39];
    char stringdata0[430];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusNotifierItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusNotifierItem_t qt_meta_stringdata_StatusNotifierItem = {
    {
QT_MOC_LITERAL(0, 0, 18), // "StatusNotifierItem"
QT_MOC_LITERAL(1, 19, 17), // "activateRequested"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 3), // "pos"
QT_MOC_LITERAL(4, 42, 26), // "secondaryActivateRequested"
QT_MOC_LITERAL(5, 69, 15), // "scrollRequested"
QT_MOC_LITERAL(6, 85, 5), // "delta"
QT_MOC_LITERAL(7, 91, 15), // "Qt::Orientation"
QT_MOC_LITERAL(8, 107, 11), // "orientation"
QT_MOC_LITERAL(9, 119, 8), // "Activate"
QT_MOC_LITERAL(10, 128, 1), // "x"
QT_MOC_LITERAL(11, 130, 1), // "y"
QT_MOC_LITERAL(12, 132, 17), // "SecondaryActivate"
QT_MOC_LITERAL(13, 150, 11), // "ContextMenu"
QT_MOC_LITERAL(14, 162, 6), // "Scroll"
QT_MOC_LITERAL(15, 169, 11), // "showMessage"
QT_MOC_LITERAL(16, 181, 5), // "title"
QT_MOC_LITERAL(17, 187, 3), // "msg"
QT_MOC_LITERAL(18, 191, 8), // "iconName"
QT_MOC_LITERAL(19, 200, 4), // "secs"
QT_MOC_LITERAL(20, 205, 21), // "onServiceOwnerChanged"
QT_MOC_LITERAL(21, 227, 7), // "service"
QT_MOC_LITERAL(22, 235, 8), // "oldOwner"
QT_MOC_LITERAL(23, 244, 8), // "newOwner"
QT_MOC_LITERAL(24, 253, 15), // "onMenuDestroyed"
QT_MOC_LITERAL(25, 269, 8), // "Category"
QT_MOC_LITERAL(26, 278, 5), // "Title"
QT_MOC_LITERAL(27, 284, 2), // "Id"
QT_MOC_LITERAL(28, 287, 6), // "Status"
QT_MOC_LITERAL(29, 294, 4), // "Menu"
QT_MOC_LITERAL(30, 299, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(31, 315, 8), // "IconName"
QT_MOC_LITERAL(32, 324, 10), // "IconPixmap"
QT_MOC_LITERAL(33, 335, 14), // "IconPixmapList"
QT_MOC_LITERAL(34, 350, 15), // "OverlayIconName"
QT_MOC_LITERAL(35, 366, 17), // "OverlayIconPixmap"
QT_MOC_LITERAL(36, 384, 17), // "AttentionIconName"
QT_MOC_LITERAL(37, 402, 19), // "AttentionIconPixmap"
QT_MOC_LITERAL(38, 422, 7) // "ToolTip"

    },
    "StatusNotifierItem\0activateRequested\0"
    "\0pos\0secondaryActivateRequested\0"
    "scrollRequested\0delta\0Qt::Orientation\0"
    "orientation\0Activate\0x\0y\0SecondaryActivate\0"
    "ContextMenu\0Scroll\0showMessage\0title\0"
    "msg\0iconName\0secs\0onServiceOwnerChanged\0"
    "service\0oldOwner\0newOwner\0onMenuDestroyed\0"
    "Category\0Title\0Id\0Status\0Menu\0"
    "QDBusObjectPath\0IconName\0IconPixmap\0"
    "IconPixmapList\0OverlayIconName\0"
    "OverlayIconPixmap\0AttentionIconName\0"
    "AttentionIconPixmap\0ToolTip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusNotifierItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      12,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    2,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   75,    2, 0x0a /* Public */,
      12,    2,   80,    2, 0x0a /* Public */,
      13,    2,   85,    2, 0x0a /* Public */,
      14,    2,   90,    2, 0x0a /* Public */,
      15,    4,   95,    2, 0x0a /* Public */,
      20,    3,  104,    2, 0x08 /* Private */,
      24,    0,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    6,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,   16,   17,   18,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   21,   22,   23,
    QMetaType::Void,

 // properties: name, type, flags
      25, QMetaType::QString, 0x00095001,
      26, QMetaType::QString, 0x00095001,
      27, QMetaType::QString, 0x00095001,
      28, QMetaType::QString, 0x00095001,
      29, 0x80000000 | 30, 0x00095009,
      31, QMetaType::QString, 0x00095001,
      32, 0x80000000 | 33, 0x00095009,
      34, QMetaType::QString, 0x00095001,
      35, 0x80000000 | 33, 0x00095009,
      36, QMetaType::QString, 0x00095001,
      37, 0x80000000 | 33, 0x00095009,
      38, 0x80000000 | 38, 0x00095009,

       0        // eod
};

void StatusNotifierItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatusNotifierItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activateRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->secondaryActivateRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->scrollRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::Orientation(*)>(_a[2]))); break;
        case 3: _t->Activate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->SecondaryActivate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->ContextMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->Scroll((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 8: _t->onServiceOwnerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 9: _t->onMenuDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StatusNotifierItem::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierItem::activateRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StatusNotifierItem::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierItem::secondaryActivateRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StatusNotifierItem::*)(int , Qt::Orientation );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierItem::scrollRequested)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
        case 8:
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< IconPixmapList >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ToolTip >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StatusNotifierItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->category(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->status(); break;
        case 4: *reinterpret_cast< QDBusObjectPath*>(_v) = _t->menu(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->iconName(); break;
        case 6: *reinterpret_cast< IconPixmapList*>(_v) = _t->iconPixmap(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->overlayIconName(); break;
        case 8: *reinterpret_cast< IconPixmapList*>(_v) = _t->overlayIconPixmap(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->attentionIconName(); break;
        case 10: *reinterpret_cast< IconPixmapList*>(_v) = _t->attentionIconPixmap(); break;
        case 11: *reinterpret_cast< ToolTip*>(_v) = _t->toolTip(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject StatusNotifierItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_StatusNotifierItem.data,
    qt_meta_data_StatusNotifierItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusNotifierItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusNotifierItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusNotifierItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusNotifierItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StatusNotifierItem::activateRequested(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StatusNotifierItem::secondaryActivateRequested(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StatusNotifierItem::scrollRequested(int _t1, Qt::Orientation _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
