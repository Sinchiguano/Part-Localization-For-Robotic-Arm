/****************************************************************************
** Meta object code from reading C++ file 'icalgui_main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/extriPACK/industrial_calibration/stand_alone_gui/include/stand_alone_gui/icalgui_main_window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icalgui_main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_stand_alone_gui__MainWindow_t {
    QByteArrayData data[10];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_stand_alone_gui__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_stand_alone_gui__MainWindow_t qt_meta_stringdata_stand_alone_gui__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 27), // "stand_alone_gui::MainWindow"
QT_MOC_LITERAL(1, 28, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 17), // "updateLoggingView"
QT_MOC_LITERAL(4, 72, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(5, 95, 20), // "on_obsButton_clicked"
QT_MOC_LITERAL(6, 116, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(7, 138, 20), // "on_covButton_clicked"
QT_MOC_LITERAL(8, 159, 20), // "on_runButton_clicked"
QT_MOC_LITERAL(9, 180, 21) // "on_loadButton_clicked"

    },
    "stand_alone_gui::MainWindow\0"
    "on_actionAbout_triggered\0\0updateLoggingView\0"
    "on_startButton_clicked\0on_obsButton_clicked\0"
    "on_saveButton_clicked\0on_covButton_clicked\0"
    "on_runButton_clicked\0on_loadButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_stand_alone_gui__MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void stand_alone_gui::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionAbout_triggered(); break;
        case 1: _t->updateLoggingView(); break;
        case 2: _t->on_startButton_clicked(); break;
        case 3: _t->on_obsButton_clicked(); break;
        case 4: _t->on_saveButton_clicked(); break;
        case 5: _t->on_covButton_clicked(); break;
        case 6: _t->on_runButton_clicked(); break;
        case 7: _t->on_loadButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject stand_alone_gui::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_stand_alone_gui__MainWindow.data,
      qt_meta_data_stand_alone_gui__MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *stand_alone_gui::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *stand_alone_gui::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_stand_alone_gui__MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int stand_alone_gui::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
