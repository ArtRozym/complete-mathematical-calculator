/****************************************************************************
** Meta object code from reading C++ file 'calculatorwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../complete_mathematical_calculator/calculatorwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculatorwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalculatorWindow_t {
    QByteArrayData data[15];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalculatorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalculatorWindow_t qt_meta_stringdata_CalculatorWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CalculatorWindow"
QT_MOC_LITERAL(1, 17, 14), // "digits_numbers"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "math_operation"
QT_MOC_LITERAL(4, 48, 10), // "operations"
QT_MOC_LITERAL(5, 59, 19), // "on_pBtn_sin_clicked"
QT_MOC_LITERAL(6, 79, 19), // "on_pBtn_cos_clicked"
QT_MOC_LITERAL(7, 99, 19), // "on_pBtn_tan_clicked"
QT_MOC_LITERAL(8, 119, 19), // "on_pBtn_log_clicked"
QT_MOC_LITERAL(9, 139, 19), // "on_pBtn_exp_clicked"
QT_MOC_LITERAL(10, 159, 24), // "on_pBtn_clearOne_clicked"
QT_MOC_LITERAL(11, 184, 18), // "on_pBtn_AC_clicked"
QT_MOC_LITERAL(12, 203, 21), // "on_pBtn_point_clicked"
QT_MOC_LITERAL(13, 225, 24), // "on_pBtn_subtract_clicked"
QT_MOC_LITERAL(14, 250, 22) // "on_pBtn_equals_clicked"

    },
    "CalculatorWindow\0digits_numbers\0\0"
    "math_operation\0operations\0on_pBtn_sin_clicked\0"
    "on_pBtn_cos_clicked\0on_pBtn_tan_clicked\0"
    "on_pBtn_log_clicked\0on_pBtn_exp_clicked\0"
    "on_pBtn_clearOne_clicked\0on_pBtn_AC_clicked\0"
    "on_pBtn_point_clicked\0on_pBtn_subtract_clicked\0"
    "on_pBtn_equals_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalculatorWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void CalculatorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CalculatorWindow *_t = static_cast<CalculatorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->digits_numbers(); break;
        case 1: _t->math_operation(); break;
        case 2: _t->operations(); break;
        case 3: _t->on_pBtn_sin_clicked(); break;
        case 4: _t->on_pBtn_cos_clicked(); break;
        case 5: _t->on_pBtn_tan_clicked(); break;
        case 6: _t->on_pBtn_log_clicked(); break;
        case 7: _t->on_pBtn_exp_clicked(); break;
        case 8: _t->on_pBtn_clearOne_clicked(); break;
        case 9: _t->on_pBtn_AC_clicked(); break;
        case 10: _t->on_pBtn_point_clicked(); break;
        case 11: _t->on_pBtn_subtract_clicked(); break;
        case 12: _t->on_pBtn_equals_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CalculatorWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CalculatorWindow.data,
      qt_meta_data_CalculatorWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CalculatorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalculatorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalculatorWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CalculatorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
