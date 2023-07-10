/****************************************************************************
** Meta object code from reading C++ file 'lxqtsysstat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-sysstat/lxqtsysstat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lxqtsysstat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LXQtSysStat_t {
    QByteArrayData data[4];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtSysStat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtSysStat_t qt_meta_stringdata_LXQtSysStat = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LXQtSysStat"
QT_MOC_LITERAL(1, 12, 8), // "lateInit"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 15) // "settingsChanged"

    },
    "LXQtSysStat\0lateInit\0\0settingsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtSysStat[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LXQtSysStat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LXQtSysStat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->lateInit(); break;
        case 1: _t->settingsChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LXQtSysStat::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LXQtSysStat.data,
    qt_meta_data_LXQtSysStat,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtSysStat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtSysStat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtSysStat.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ILXQtPanelPlugin"))
        return static_cast< ILXQtPanelPlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int LXQtSysStat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_LXQtSysStatTitle_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtSysStatTitle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtSysStatTitle_t qt_meta_stringdata_LXQtSysStatTitle = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LXQtSysStatTitle"
QT_MOC_LITERAL(1, 17, 11), // "fontChanged"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "LXQtSysStatTitle\0fontChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtSysStatTitle[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QFont,    2,

       0        // eod
};

void LXQtSysStatTitle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LXQtSysStatTitle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fontChanged((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LXQtSysStatTitle::*)(QFont );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LXQtSysStatTitle::fontChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LXQtSysStatTitle::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_LXQtSysStatTitle.data,
    qt_meta_data_LXQtSysStatTitle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtSysStatTitle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtSysStatTitle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtSysStatTitle.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int LXQtSysStatTitle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void LXQtSysStatTitle::fontChanged(QFont _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_LXQtSysStatContent_t {
    QByteArrayData data[35];
    char stringdata0[399];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtSysStatContent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtSysStatContent_t qt_meta_stringdata_LXQtSysStatContent = {
    {
QT_MOC_LITERAL(0, 0, 18), // "LXQtSysStatContent"
QT_MOC_LITERAL(1, 19, 12), // "setTitleFont"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "value"
QT_MOC_LITERAL(4, 39, 5), // "reset"
QT_MOC_LITERAL(5, 45, 22), // "cpuLoadFrequencyUpdate"
QT_MOC_LITERAL(6, 68, 4), // "user"
QT_MOC_LITERAL(7, 73, 4), // "nice"
QT_MOC_LITERAL(8, 78, 6), // "system"
QT_MOC_LITERAL(9, 85, 5), // "other"
QT_MOC_LITERAL(10, 91, 13), // "frequencyRate"
QT_MOC_LITERAL(11, 105, 9), // "frequency"
QT_MOC_LITERAL(12, 115, 13), // "cpuLoadUpdate"
QT_MOC_LITERAL(13, 129, 12), // "memoryUpdate"
QT_MOC_LITERAL(14, 142, 4), // "apps"
QT_MOC_LITERAL(15, 147, 7), // "buffers"
QT_MOC_LITERAL(16, 155, 6), // "cached"
QT_MOC_LITERAL(17, 162, 10), // "swapUpdate"
QT_MOC_LITERAL(18, 173, 4), // "used"
QT_MOC_LITERAL(19, 178, 13), // "networkUpdate"
QT_MOC_LITERAL(20, 192, 8), // "received"
QT_MOC_LITERAL(21, 201, 11), // "transmitted"
QT_MOC_LITERAL(22, 213, 9), // "gridColor"
QT_MOC_LITERAL(23, 223, 10), // "titleColor"
QT_MOC_LITERAL(24, 234, 14), // "cpuSystemColor"
QT_MOC_LITERAL(25, 249, 12), // "cpuUserColor"
QT_MOC_LITERAL(26, 262, 12), // "cpuNiceColor"
QT_MOC_LITERAL(27, 275, 13), // "cpuOtherColor"
QT_MOC_LITERAL(28, 289, 14), // "frequencyColor"
QT_MOC_LITERAL(29, 304, 12), // "memAppsColor"
QT_MOC_LITERAL(30, 317, 15), // "memBuffersColor"
QT_MOC_LITERAL(31, 333, 14), // "memCachedColor"
QT_MOC_LITERAL(32, 348, 13), // "swapUsedColor"
QT_MOC_LITERAL(33, 362, 16), // "netReceivedColor"
QT_MOC_LITERAL(34, 379, 19) // "netTransmittedColor"

    },
    "LXQtSysStatContent\0setTitleFont\0\0value\0"
    "reset\0cpuLoadFrequencyUpdate\0user\0"
    "nice\0system\0other\0frequencyRate\0"
    "frequency\0cpuLoadUpdate\0memoryUpdate\0"
    "apps\0buffers\0cached\0swapUpdate\0used\0"
    "networkUpdate\0received\0transmitted\0"
    "gridColor\0titleColor\0cpuSystemColor\0"
    "cpuUserColor\0cpuNiceColor\0cpuOtherColor\0"
    "frequencyColor\0memAppsColor\0memBuffersColor\0"
    "memCachedColor\0swapUsedColor\0"
    "netReceivedColor\0netTransmittedColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtSysStatContent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
      13,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    0,   52,    2, 0x0a /* Public */,
       5,    6,   53,    2, 0x09 /* Protected */,
      12,    4,   66,    2, 0x09 /* Protected */,
      13,    3,   75,    2, 0x09 /* Protected */,
      17,    1,   82,    2, 0x09 /* Protected */,
      19,    2,   85,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UInt,    6,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   14,   15,   16,
    QMetaType::Void, QMetaType::Float,   18,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   20,   21,

 // properties: name, type, flags
      22, QMetaType::QColor, 0x00095003,
      23, QMetaType::QColor, 0x00095003,
      24, QMetaType::QColor, 0x00095003,
      25, QMetaType::QColor, 0x00095003,
      26, QMetaType::QColor, 0x00095003,
      27, QMetaType::QColor, 0x00095003,
      28, QMetaType::QColor, 0x00095003,
      29, QMetaType::QColor, 0x00095003,
      30, QMetaType::QColor, 0x00095003,
      31, QMetaType::QColor, 0x00095003,
      32, QMetaType::QColor, 0x00095003,
      33, QMetaType::QColor, 0x00095003,
      34, QMetaType::QColor, 0x00095003,

       0        // eod
};

void LXQtSysStatContent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LXQtSysStatContent *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setTitleFont((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 1: _t->reset(); break;
        case 2: _t->cpuLoadFrequencyUpdate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6]))); break;
        case 3: _t->cpuLoadUpdate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 4: _t->memoryUpdate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 5: _t->swapUpdate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->networkUpdate((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LXQtSysStatContent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->gridColour(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->titleColour(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->cpuSystemColour(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->cpuUserColour(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->cpuNiceColour(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->cpuOtherColour(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->frequencyColour(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->memAppsColour(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = _t->memBuffersColour(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = _t->memCachedColour(); break;
        case 10: *reinterpret_cast< QColor*>(_v) = _t->swapUsedColour(); break;
        case 11: *reinterpret_cast< QColor*>(_v) = _t->netReceivedColour(); break;
        case 12: *reinterpret_cast< QColor*>(_v) = _t->netTransmittedColour(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LXQtSysStatContent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGridColour(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setTitleColour(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setCpuSystemColour(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setCpuUserColour(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setCpuNiceColour(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setCpuOtherColour(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setFrequencyColour(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setMemAppsColour(*reinterpret_cast< QColor*>(_v)); break;
        case 8: _t->setMemBuffersColour(*reinterpret_cast< QColor*>(_v)); break;
        case 9: _t->setMemCachedColour(*reinterpret_cast< QColor*>(_v)); break;
        case 10: _t->setSwapUsedColour(*reinterpret_cast< QColor*>(_v)); break;
        case 11: _t->setNetReceivedColour(*reinterpret_cast< QColor*>(_v)); break;
        case 12: _t->setNetTransmittedColour(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LXQtSysStatContent::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LXQtSysStatContent.data,
    qt_meta_data_LXQtSysStatContent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtSysStatContent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtSysStatContent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtSysStatContent.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LXQtSysStatContent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_LXQtSysStatLibrary_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtSysStatLibrary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtSysStatLibrary_t qt_meta_stringdata_LXQtSysStatLibrary = {
    {
QT_MOC_LITERAL(0, 0, 18) // "LXQtSysStatLibrary"

    },
    "LXQtSysStatLibrary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtSysStatLibrary[] = {

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

void LXQtSysStatLibrary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LXQtSysStatLibrary::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LXQtSysStatLibrary.data,
    qt_meta_data_LXQtSysStatLibrary,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtSysStatLibrary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtSysStatLibrary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtSysStatLibrary.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ILXQtPanelPluginLibrary"))
        return static_cast< ILXQtPanelPluginLibrary*>(this);
    if (!strcmp(_clname, "lxqt.org/Panel/PluginInterface/3.0"))
        return static_cast< ILXQtPanelPluginLibrary*>(this);
    return QObject::qt_metacast(_clname);
}

int LXQtSysStatLibrary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x03,  0x72,  'L',  'X',  'Q',  't',  'S',  'y', 
    's',  'S',  't',  'a',  't',  'L',  'i',  'b', 
    'r',  'a',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(LXQtSysStatLibrary, LXQtSysStatLibrary)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
