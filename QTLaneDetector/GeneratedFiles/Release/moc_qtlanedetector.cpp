/****************************************************************************
** Meta object code from reading C++ file 'qtlanedetector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qtlanedetector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtlanedetector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QTLaneDetector_t {
    QByteArrayData data[11];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTLaneDetector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTLaneDetector_t qt_meta_stringdata_QTLaneDetector = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QTLaneDetector"
QT_MOC_LITERAL(1, 15, 14), // "updatePlayerUI"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "img"
QT_MOC_LITERAL(4, 35, 15), // "updatePlayerUI2"
QT_MOC_LITERAL(5, 51, 1), // "f"
QT_MOC_LITERAL(6, 53, 2), // "fr"
QT_MOC_LITERAL(7, 56, 2), // "al"
QT_MOC_LITERAL(8, 59, 13), // "enableButtons"
QT_MOC_LITERAL(9, 73, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 95, 23) // "on_pushButton_2_clicked"

    },
    "QTLaneDetector\0updatePlayerUI\0\0img\0"
    "updatePlayerUI2\0f\0fr\0al\0enableButtons\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTLaneDetector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    3,   42,    2, 0x08 /* Private */,
       8,    0,   49,    2, 0x08 /* Private */,
       9,    0,   50,    2, 0x08 /* Private */,
      10,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QTLaneDetector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTLaneDetector *_t = static_cast<QTLaneDetector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatePlayerUI((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->updatePlayerUI2((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->enableButtons(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject QTLaneDetector::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QTLaneDetector.data,
      qt_meta_data_QTLaneDetector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QTLaneDetector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTLaneDetector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QTLaneDetector.stringdata0))
        return static_cast<void*>(const_cast< QTLaneDetector*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QTLaneDetector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
