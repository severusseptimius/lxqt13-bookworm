/****************************************************************************
** Meta object code from reading C++ file 'lxqtworldclock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-worldclock/lxqtworldclock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lxqtworldclock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LXQtWorldClock_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtWorldClock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtWorldClock_t qt_meta_stringdata_LXQtWorldClock = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LXQtWorldClock"
QT_MOC_LITERAL(1, 15, 7), // "timeout"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "wheelScrolled"
QT_MOC_LITERAL(4, 38, 11), // "deletePopup"
QT_MOC_LITERAL(5, 50, 14) // "updateTimeText"

    },
    "LXQtWorldClock\0timeout\0\0wheelScrolled\0"
    "deletePopup\0updateTimeText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtWorldClock[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       4,    0,   38,    2, 0x08 /* Private */,
       5,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LXQtWorldClock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LXQtWorldClock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeout(); break;
        case 1: _t->wheelScrolled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->deletePopup(); break;
        case 3: _t->updateTimeText(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LXQtWorldClock::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LXQtWorldClock.data,
    qt_meta_data_LXQtWorldClock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtWorldClock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtWorldClock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtWorldClock.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ILXQtPanelPlugin"))
        return static_cast< ILXQtPanelPlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int LXQtWorldClock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ActiveLabel_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActiveLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActiveLabel_t qt_meta_stringdata_ActiveLabel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ActiveLabel"
QT_MOC_LITERAL(1, 12, 13), // "wheelScrolled"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 22), // "leftMouseButtonClicked"
QT_MOC_LITERAL(4, 50, 24) // "middleMouseButtonClicked"

    },
    "ActiveLabel\0wheelScrolled\0\0"
    "leftMouseButtonClicked\0middleMouseButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActiveLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    0,   32,    2, 0x06 /* Public */,
       4,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ActiveLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActiveLabel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->wheelScrolled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->leftMouseButtonClicked(); break;
        case 2: _t->middleMouseButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActiveLabel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActiveLabel::wheelScrolled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActiveLabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActiveLabel::leftMouseButtonClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ActiveLabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActiveLabel::middleMouseButtonClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ActiveLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_ActiveLabel.data,
    qt_meta_data_ActiveLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActiveLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActiveLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActiveLabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int ActiveLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void ActiveLabel::wheelScrolled(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ActiveLabel::leftMouseButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ActiveLabel::middleMouseButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_LXQtWorldClockPopup_t {
    QByteArrayData data[3];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtWorldClockPopup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtWorldClockPopup_t qt_meta_stringdata_LXQtWorldClockPopup = {
    {
QT_MOC_LITERAL(0, 0, 19), // "LXQtWorldClockPopup"
QT_MOC_LITERAL(1, 20, 11), // "deactivated"
QT_MOC_LITERAL(2, 32, 0) // ""

    },
    "LXQtWorldClockPopup\0deactivated\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtWorldClockPopup[] = {

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

void LXQtWorldClockPopup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LXQtWorldClockPopup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deactivated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LXQtWorldClockPopup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LXQtWorldClockPopup::deactivated)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LXQtWorldClockPopup::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_LXQtWorldClockPopup.data,
    qt_meta_data_LXQtWorldClockPopup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtWorldClockPopup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtWorldClockPopup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtWorldClockPopup.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LXQtWorldClockPopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void LXQtWorldClockPopup::deactivated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_LXQtWorldClockLibrary_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtWorldClockLibrary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtWorldClockLibrary_t qt_meta_stringdata_LXQtWorldClockLibrary = {
    {
QT_MOC_LITERAL(0, 0, 21) // "LXQtWorldClockLibrary"

    },
    "LXQtWorldClockLibrary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtWorldClockLibrary[] = {

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

void LXQtWorldClockLibrary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LXQtWorldClockLibrary::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LXQtWorldClockLibrary.data,
    qt_meta_data_LXQtWorldClockLibrary,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtWorldClockLibrary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtWorldClockLibrary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtWorldClockLibrary.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ILXQtPanelPluginLibrary"))
        return static_cast< ILXQtPanelPluginLibrary*>(this);
    if (!strcmp(_clname, "lxqt.org/Panel/PluginInterface/3.0"))
        return static_cast< ILXQtPanelPluginLibrary*>(this);
    return QObject::qt_metacast(_clname);
}

int LXQtWorldClockLibrary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x22,  'l',  'x',  'q',  't',  '.', 
    'o',  'r',  'g',  '/',  'P',  'a',  'n',  'e', 
    'l',  '/',  'P',  'l',  'u',  'g',  'i',  'n', 
    'I',  'n',  't',  'e',  'r',  'f',  'a',  'c', 
    'e',  '/',  '3',  '.',  '0', 
    // "className"
    0x03,  0x75,  'L',  'X',  'Q',  't',  'W',  'o', 
    'r',  'l',  'd',  'C',  'l',  'o',  'c',  'k', 
    'L',  'i',  'b',  'r',  'a',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(LXQtWorldClockLibrary, LXQtWorldClockLibrary)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
