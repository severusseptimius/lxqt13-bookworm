/****************************************************************************
** Meta object code from reading C++ file 'tabpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../pcmanfm/tabpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PCManFM__FilterEdit_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PCManFM__FilterEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PCManFM__FilterEdit_t qt_meta_stringdata_PCManFM__FilterEdit = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PCManFM::FilterEdit"
QT_MOC_LITERAL(1, 20, 9), // "lostFocus"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "PCManFM::FilterEdit\0lostFocus\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCManFM__FilterEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void PCManFM::FilterEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilterEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->lostFocus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FilterEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterEdit::lostFocus)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PCManFM::FilterEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_PCManFM__FilterEdit.data,
    qt_meta_data_PCManFM__FilterEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PCManFM::FilterEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PCManFM::FilterEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PCManFM__FilterEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int PCManFM::FilterEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PCManFM::FilterEdit::lostFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_PCManFM__FilterBar_t {
    QByteArrayData data[5];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PCManFM__FilterBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PCManFM__FilterBar_t qt_meta_stringdata_PCManFM__FilterBar = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PCManFM::FilterBar"
QT_MOC_LITERAL(1, 19, 11), // "textChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "text"
QT_MOC_LITERAL(4, 37, 9) // "lostFocus"

    },
    "PCManFM::FilterBar\0textChanged\0\0text\0"
    "lostFocus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCManFM__FilterBar[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,
       4,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void PCManFM::FilterBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilterBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->lostFocus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FilterBar::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterBar::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FilterBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterBar::lostFocus)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PCManFM::FilterBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PCManFM__FilterBar.data,
    qt_meta_data_PCManFM__FilterBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PCManFM::FilterBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PCManFM::FilterBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PCManFM__FilterBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PCManFM::FilterBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void PCManFM::FilterBar::textChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PCManFM::FilterBar::lostFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_PCManFM__TabPage_t {
    QByteArrayData data[21];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PCManFM__TabPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PCManFM__TabPage_t qt_meta_stringdata_PCManFM__TabPage = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PCManFM::TabPage"
QT_MOC_LITERAL(1, 17, 13), // "statusChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "type"
QT_MOC_LITERAL(4, 37, 10), // "statusText"
QT_MOC_LITERAL(5, 48, 12), // "titleChanged"
QT_MOC_LITERAL(6, 61, 17), // "sortFilterChanged"
QT_MOC_LITERAL(7, 79, 16), // "forwardRequested"
QT_MOC_LITERAL(8, 96, 17), // "backwardRequested"
QT_MOC_LITERAL(9, 114, 15), // "folderUnmounted"
QT_MOC_LITERAL(10, 130, 12), // "onSelChanged"
QT_MOC_LITERAL(11, 143, 11), // "onUiUpdated"
QT_MOC_LITERAL(12, 155, 17), // "onFileSizeChanged"
QT_MOC_LITERAL(13, 173, 11), // "QModelIndex"
QT_MOC_LITERAL(14, 185, 5), // "index"
QT_MOC_LITERAL(15, 191, 12), // "onFilesAdded"
QT_MOC_LITERAL(16, 204, 16), // "Fm::FileInfoList"
QT_MOC_LITERAL(17, 221, 5), // "files"
QT_MOC_LITERAL(18, 227, 21), // "onFilterStringChanged"
QT_MOC_LITERAL(19, 249, 3), // "str"
QT_MOC_LITERAL(20, 253, 22) // "onLosingFilterBarFocus"

    },
    "PCManFM::TabPage\0statusChanged\0\0type\0"
    "statusText\0titleChanged\0sortFilterChanged\0"
    "forwardRequested\0backwardRequested\0"
    "folderUnmounted\0onSelChanged\0onUiUpdated\0"
    "onFileSizeChanged\0QModelIndex\0index\0"
    "onFilesAdded\0Fm::FileInfoList\0files\0"
    "onFilterStringChanged\0str\0"
    "onLosingFilterBarFocus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCManFM__TabPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       5,    0,   79,    2, 0x06 /* Public */,
       6,    0,   80,    2, 0x06 /* Public */,
       7,    0,   81,    2, 0x06 /* Public */,
       8,    0,   82,    2, 0x06 /* Public */,
       9,    0,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   84,    2, 0x09 /* Protected */,
      11,    0,   85,    2, 0x09 /* Protected */,
      12,    1,   86,    2, 0x09 /* Protected */,
      15,    1,   89,    2, 0x09 /* Protected */,
      18,    1,   92,    2, 0x09 /* Protected */,
      20,    0,   95,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,

       0        // eod
};

void PCManFM::TabPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TabPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->titleChanged(); break;
        case 2: _t->sortFilterChanged(); break;
        case 3: _t->forwardRequested(); break;
        case 4: _t->backwardRequested(); break;
        case 5: _t->folderUnmounted(); break;
        case 6: _t->onSelChanged(); break;
        case 7: _t->onUiUpdated(); break;
        case 8: _t->onFileSizeChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->onFilesAdded((*reinterpret_cast< const Fm::FileInfoList(*)>(_a[1]))); break;
        case 10: _t->onFilterStringChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->onLosingFilterBarFocus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TabPage::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabPage::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TabPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabPage::titleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TabPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabPage::sortFilterChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TabPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabPage::forwardRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TabPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabPage::backwardRequested)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TabPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabPage::folderUnmounted)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PCManFM::TabPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PCManFM__TabPage.data,
    qt_meta_data_PCManFM__TabPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PCManFM::TabPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PCManFM::TabPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PCManFM__TabPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PCManFM::TabPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PCManFM::TabPage::statusChanged(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PCManFM::TabPage::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PCManFM::TabPage::sortFilterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PCManFM::TabPage::forwardRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PCManFM::TabPage::backwardRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PCManFM::TabPage::folderUnmounted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
