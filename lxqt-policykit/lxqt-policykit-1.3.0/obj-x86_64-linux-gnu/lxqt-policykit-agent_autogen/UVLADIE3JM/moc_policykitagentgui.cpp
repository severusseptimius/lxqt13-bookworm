/****************************************************************************
** Meta object code from reading C++ file 'policykitagentgui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/policykitagentgui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'policykitagentgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LXQtPolicykit__PolicykitAgentGUI_t {
    QByteArrayData data[4];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LXQtPolicykit__PolicykitAgentGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LXQtPolicykit__PolicykitAgentGUI_t qt_meta_stringdata_LXQtPolicykit__PolicykitAgentGUI = {
    {
QT_MOC_LITERAL(0, 0, 32), // "LXQtPolicykit::PolicykitAgentGUI"
QT_MOC_LITERAL(1, 33, 17), // "onIdentityChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 5) // "index"

    },
    "LXQtPolicykit::PolicykitAgentGUI\0"
    "onIdentityChanged\0\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LXQtPolicykit__PolicykitAgentGUI[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void LXQtPolicykit::PolicykitAgentGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PolicykitAgentGUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onIdentityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LXQtPolicykit::PolicykitAgentGUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_LXQtPolicykit__PolicykitAgentGUI.data,
    qt_meta_data_LXQtPolicykit__PolicykitAgentGUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LXQtPolicykit::PolicykitAgentGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LXQtPolicykit::PolicykitAgentGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LXQtPolicykit__PolicykitAgentGUI.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::PolicykitAgentGUI"))
        return static_cast< Ui::PolicykitAgentGUI*>(this);
    return QDialog::qt_metacast(_clname);
}

int LXQtPolicykit::PolicykitAgentGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
