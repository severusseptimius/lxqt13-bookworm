/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/ui/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "showWindow"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3), // "str"
QT_MOC_LITERAL(4, 27, 14), // "windowHideShow"
QT_MOC_LITERAL(5, 42, 10), // "hideToShot"
QT_MOC_LITERAL(6, 53, 15), // "restoreFromShot"
QT_MOC_LITERAL(7, 69, 10), // "saveScreen"
QT_MOC_LITERAL(8, 80, 8), // "showHelp"
QT_MOC_LITERAL(9, 89, 11), // "showOptions"
QT_MOC_LITERAL(10, 101, 9), // "showAbout"
QT_MOC_LITERAL(11, 111, 14), // "delayBoxChange"
QT_MOC_LITERAL(12, 126, 20), // "typeScreenShotChange"
QT_MOC_LITERAL(13, 147, 4), // "type"
QT_MOC_LITERAL(14, 152, 18), // "checkIncludeCursor"
QT_MOC_LITERAL(15, 171, 7), // "include"
QT_MOC_LITERAL(16, 179, 17), // "checkNoDecoration"
QT_MOC_LITERAL(17, 197, 7), // "noDecor"
QT_MOC_LITERAL(18, 205, 18), // "checkZommMouseArea"
QT_MOC_LITERAL(19, 224, 4), // "zoom"
QT_MOC_LITERAL(20, 229, 8), // "updateUI"
QT_MOC_LITERAL(21, 238, 9), // "trayClick"
QT_MOC_LITERAL(22, 248, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(23, 282, 6) // "reason"

    },
    "MainWindow\0showWindow\0\0str\0windowHideShow\0"
    "hideToShot\0restoreFromShot\0saveScreen\0"
    "showHelp\0showOptions\0showAbout\0"
    "delayBoxChange\0typeScreenShotChange\0"
    "type\0checkIncludeCursor\0include\0"
    "checkNoDecoration\0noDecor\0checkZommMouseArea\0"
    "zoom\0updateUI\0trayClick\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a /* Public */,
       4,    0,   92,    2, 0x0a /* Public */,
       5,    0,   93,    2, 0x0a /* Public */,
       6,    0,   94,    2, 0x0a /* Public */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    1,   99,    2, 0x08 /* Private */,
      12,    1,  102,    2, 0x08 /* Private */,
      14,    1,  105,    2, 0x08 /* Private */,
      16,    1,  108,    2, 0x08 /* Private */,
      18,    1,  111,    2, 0x08 /* Private */,
      20,    0,  114,    2, 0x08 /* Private */,
      21,    1,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showWindow((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->windowHideShow(); break;
        case 2: _t->hideToShot(); break;
        case 3: _t->restoreFromShot(); break;
        case 4: _t->saveScreen(); break;
        case 5: _t->showHelp(); break;
        case 6: _t->showOptions(); break;
        case 7: _t->showAbout(); break;
        case 8: _t->delayBoxChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->typeScreenShotChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->checkIncludeCursor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->checkNoDecoration((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->checkZommMouseArea((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->updateUI(); break;
        case 14: _t->trayClick((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
