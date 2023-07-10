/****************************************************************************
** Meta object code from reading C++ file 'htable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/htable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'htable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FloatingHead_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FloatingHead_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FloatingHead_t qt_meta_stringdata_FloatingHead = {
    {
QT_MOC_LITERAL(0, 0, 12) // "FloatingHead"

    },
    "FloatingHead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FloatingHead[] = {

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

void FloatingHead::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FloatingHead::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FloatingHead.data,
    qt_meta_data_FloatingHead,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FloatingHead::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FloatingHead::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FloatingHead.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FloatingHead::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TableHead_t {
    QByteArrayData data[7];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TableHead_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TableHead_t qt_meta_stringdata_TableHead = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TableHead"
QT_MOC_LITERAL(1, 10, 12), // "rightClicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "where"
QT_MOC_LITERAL(4, 30, 3), // "col"
QT_MOC_LITERAL(5, 34, 7), // "toolTip"
QT_MOC_LITERAL(6, 42, 14) // "scrollSideways"

    },
    "TableHead\0rightClicked\0\0where\0col\0"
    "toolTip\0scrollSideways"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TableHead[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   39,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QPoint, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void TableHead::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TableHead *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rightClicked((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->toolTip((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->scrollSideways((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TableHead::*)(QPoint , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TableHead::rightClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TableHead::*)(QPoint , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TableHead::toolTip)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TableHead::staticMetaObject = { {
    QMetaObject::SuperData::link<QtTableView::staticMetaObject>(),
    qt_meta_stringdata_TableHead.data,
    qt_meta_data_TableHead,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TableHead::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TableHead::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TableHead.stringdata0))
        return static_cast<void*>(this);
    return QtTableView::qt_metacast(_clname);
}

int TableHead::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtTableView::qt_metacall(_c, _id, _a);
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
void TableHead::rightClicked(QPoint _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TableHead::toolTip(QPoint _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_TableBody_t {
    QByteArrayData data[9];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TableBody_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TableBody_t qt_meta_stringdata_TableBody = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TableBody"
QT_MOC_LITERAL(1, 10, 7), // "jumpTop"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "jumpBottom"
QT_MOC_LITERAL(4, 30, 16), // "centerVertically"
QT_MOC_LITERAL(5, 47, 3), // "row"
QT_MOC_LITERAL(6, 51, 9), // "showRange"
QT_MOC_LITERAL(7, 61, 4), // "from"
QT_MOC_LITERAL(8, 66, 2) // "to"

    },
    "TableBody\0jumpTop\0\0jumpBottom\0"
    "centerVertically\0row\0showRange\0from\0"
    "to"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TableBody[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    1,   36,    2, 0x09 /* Protected */,
       6,    2,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,

       0        // eod
};

void TableBody::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TableBody *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->jumpTop(); break;
        case 1: _t->jumpBottom(); break;
        case 2: _t->centerVertically((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->showRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TableBody::staticMetaObject = { {
    QMetaObject::SuperData::link<QtTableView::staticMetaObject>(),
    qt_meta_stringdata_TableBody.data,
    qt_meta_data_TableBody,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TableBody::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TableBody::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TableBody.stringdata0))
        return static_cast<void*>(this);
    return QtTableView::qt_metacast(_clname);
}

int TableBody::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_HeadedTable_t {
    QByteArrayData data[15];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HeadedTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HeadedTable_t qt_meta_stringdata_HeadedTable = {
    {
QT_MOC_LITERAL(0, 0, 11), // "HeadedTable"
QT_MOC_LITERAL(1, 12, 12), // "titleClicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "col"
QT_MOC_LITERAL(4, 30, 16), // "selectionChanged"
QT_MOC_LITERAL(5, 47, 13), // "doubleClicked"
QT_MOC_LITERAL(6, 61, 3), // "row"
QT_MOC_LITERAL(7, 65, 12), // "rightClicked"
QT_MOC_LITERAL(8, 78, 5), // "where"
QT_MOC_LITERAL(9, 84, 11), // "foldSubTree"
QT_MOC_LITERAL(10, 96, 8), // "colMoved"
QT_MOC_LITERAL(11, 105, 5), // "place"
QT_MOC_LITERAL(12, 111, 9), // "flyOnCell"
QT_MOC_LITERAL(13, 121, 9), // "outOfCell"
QT_MOC_LITERAL(14, 131, 10) // "repaintAll"

    },
    "HeadedTable\0titleClicked\0\0col\0"
    "selectionChanged\0doubleClicked\0row\0"
    "rightClicked\0where\0foldSubTree\0colMoved\0"
    "place\0flyOnCell\0outOfCell\0repaintAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HeadedTable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,
       7,    1,   66,    2, 0x06 /* Public */,
       9,    1,   69,    2, 0x06 /* Public */,
      10,    2,   72,    2, 0x06 /* Public */,
      12,    2,   77,    2, 0x06 /* Public */,
      13,    0,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void HeadedTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HeadedTable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->doubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->rightClicked((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->foldSubTree((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->colMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->flyOnCell((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->outOfCell(); break;
        case 8: _t->repaintAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HeadedTable::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeadedTable::titleClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HeadedTable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeadedTable::selectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HeadedTable::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeadedTable::doubleClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HeadedTable::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeadedTable::rightClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (HeadedTable::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeadedTable::foldSubTree)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (HeadedTable::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeadedTable::colMoved)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (HeadedTable::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeadedTable::flyOnCell)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (HeadedTable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeadedTable::outOfCell)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HeadedTable::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_HeadedTable.data,
    qt_meta_data_HeadedTable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HeadedTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HeadedTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HeadedTable.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HeadedTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void HeadedTable::titleClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HeadedTable::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void HeadedTable::doubleClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HeadedTable::rightClicked(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HeadedTable::foldSubTree(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HeadedTable::colMoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HeadedTable::flyOnCell(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void HeadedTable::outOfCell()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
