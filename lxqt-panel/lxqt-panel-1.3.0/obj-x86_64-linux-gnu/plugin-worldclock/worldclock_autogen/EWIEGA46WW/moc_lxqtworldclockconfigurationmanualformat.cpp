/****************************************************************************
** Meta object code from reading C++ file 'lxqtworldclockconfigurationmanualformat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../plugin-worldclock/lxqtworldclockconfigurationmanualformat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lxqtworldclockconfigurationmanualformat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LXQtWorldClockConfigurationManualFormat_t {
    QByteArrayData data[3];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtWorldClockConfigurationManualFormat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtWorldClockConfigurationManualFormat_t qt_meta_stringdata_LXQtWorldClockConfigurationManualFormat = {
    {
QT_MOC_LITERAL(0, 0, 39), // "LXQtWorldClockConfigurationMa..."
QT_MOC_LITERAL(1, 40, 19), // "manualFormatChanged"
QT_MOC_LITERAL(2, 60, 0) // ""

    },
    "LXQtWorldClockConfigurationManualFormat\0"
    "manualFormatChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtWorldClockConfigurationManualFormat[] = {

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

void LXQtWorldClockConfigurationManualFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LXQtWorldClockConfigurationManualFormat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->manualFormatChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LXQtWorldClockConfigurationManualFormat::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LXQtWorldClockConfigurationManualFormat::manualFormatChanged)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LXQtWorldClockConfigurationManualFormat::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_LXQtWorldClockConfigurationManualFormat.data,
    qt_meta_data_LXQtWorldClockConfigurationManualFormat,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtWorldClockConfigurationManualFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtWorldClockConfigurationManualFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtWorldClockConfigurationManualFormat.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LXQtWorldClockConfigurationManualFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void LXQtWorldClockConfigurationManualFormat::manualFormatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
