/****************************************************************************
** Meta object code from reading C++ file 'vsite.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inputGoods/vsite.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vsite.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VSite_t {
    QByteArrayData data[8];
    char stringdata[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_VSite_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_VSite_t qt_meta_stringdata_VSite = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 3),
QT_MOC_LITERAL(2, 10, 0),
QT_MOC_LITERAL(3, 11, 9),
QT_MOC_LITERAL(4, 21, 23),
QT_MOC_LITERAL(5, 45, 25),
QT_MOC_LITERAL(6, 71, 24),
QT_MOC_LITERAL(7, 96, 25)
    },
    "VSite\0buy\0\0CloseSend\0on_VCloseButton_clicked\0"
    "on_VConnectButton_clicked\0"
    "on_VGetMaxButton_clicked\0"
    "on_VAddDataButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VSite[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a,
       4,    0,   46,    2, 0x0a,
       5,    0,   47,    2, 0x0a,
       6,    0,   48,    2, 0x0a,
       7,    0,   49,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VSite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VSite *_t = static_cast<VSite *>(_o);
        switch (_id) {
        case 0: _t->buy(); break;
        case 1: _t->CloseSend(); break;
        case 2: _t->on_VCloseButton_clicked(); break;
        case 3: _t->on_VConnectButton_clicked(); break;
        case 4: _t->on_VGetMaxButton_clicked(); break;
        case 5: _t->on_VAddDataButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VSite::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSite::buy)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject VSite::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VSite.data,
      qt_meta_data_VSite,  qt_static_metacall, 0, 0}
};


const QMetaObject *VSite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VSite::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VSite.stringdata))
        return static_cast<void*>(const_cast< VSite*>(this));
    return QWidget::qt_metacast(_clname);
}

int VSite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void VSite::buy()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
