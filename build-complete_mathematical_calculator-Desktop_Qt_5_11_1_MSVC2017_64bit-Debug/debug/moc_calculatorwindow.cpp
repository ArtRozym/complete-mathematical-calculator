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
    QByteArrayData data[11];
    char stringdata0[190];
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
QT_MOC_LITERAL(5, 59, 18), // "standartOperations"
QT_MOC_LITERAL(6, 78, 22), // "trigonometryOperations"
QT_MOC_LITERAL(7, 101, 24), // "on_pBtn_clearOne_clicked"
QT_MOC_LITERAL(8, 126, 18), // "on_pBtn_AC_clicked"
QT_MOC_LITERAL(9, 145, 21), // "on_pBtn_point_clicked"
QT_MOC_LITERAL(10, 167, 22) // "on_pBtn_equals_clicked"

    },
    "CalculatorWindow\0digits_numbers\0\0"
    "math_operation\0operations\0standartOperations\0"
    "trigonometryOperations\0on_pBtn_clearOne_clicked\0"
    "on_pBtn_AC_clicked\0on_pBtn_point_clicked\0"
    "on_pBtn_equals_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalculatorWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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
        case 3: _t->standartOperations(); break;
        case 4: _t->trigonometryOperations(); break;
        case 5: _t->on_pBtn_clearOne_clicked(); break;
        case 6: _t->on_pBtn_AC_clicked(); break;
        case 7: _t->on_pBtn_point_clicked(); break;
        case 8: _t->on_pBtn_equals_clicked(); break;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
