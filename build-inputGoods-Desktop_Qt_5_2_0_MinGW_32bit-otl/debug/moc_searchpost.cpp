/****************************************************************************
** Meta object code from reading C++ file 'searchpost.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inputGoods/searchpost.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchpost.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SearchPost_t {
    QByteArrayData data[10];
    char stringdata[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SearchPost_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SearchPost_t qt_meta_stringdata_SearchPost = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 3),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 22),
QT_MOC_LITERAL(4, 39, 11),
QT_MOC_LITERAL(5, 51, 6),
QT_MOC_LITERAL(6, 58, 23),
QT_MOC_LITERAL(7, 82, 22),
QT_MOC_LITERAL(8, 105, 23),
QT_MOC_LITERAL(9, 129, 9)
    },
    "SearchPost\0buy\0\0on_CloseButton_clicked\0"
    "OrgSelected\0org_id\0on_SelOrgButton_clicked\0"
    "on_CloseButton_pressed\0on_SearchButton_clicked\0"
    "CloseSend\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchPost[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08,
       4,    1,   51,    2, 0x08,
       6,    0,   54,    2, 0x08,
       7,    0,   55,    2, 0x08,
       8,    0,   56,    2, 0x08,
       9,    0,   57,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SearchPost::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchPost *_t = static_cast<SearchPost *>(_o);
        switch (_id) {
        case 0: _t->buy(); break;
        case 1: _t->on_CloseButton_clicked(); break;
        case 2: _t->OrgSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_SelOrgButton_clicked(); break;
        case 4: _t->on_CloseButton_pressed(); break;
        case 5: _t->on_SearchButton_clicked(); break;
        case 6: _t->CloseSend(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SearchPost::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchPost::buy)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SearchPost::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SearchPost.data,
      qt_meta_data_SearchPost,  qt_static_metacall, 0, 0}
};


const QMetaObject *SearchPost::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchPost::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchPost.stringdata))
        return static_cast<void*>(const_cast< SearchPost*>(this));
    return QWidget::qt_metacast(_clname);
}

int SearchPost::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void SearchPost::buy()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
