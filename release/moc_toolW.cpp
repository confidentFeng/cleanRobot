/****************************************************************************
** Meta object code from reading C++ file 'toolW.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../toolW.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolW.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ToolW_t {
    QByteArrayData data[11];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolW_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolW_t qt_meta_stringdata_ToolW = {
    {
QT_MOC_LITERAL(0, 0, 5), // "ToolW"
QT_MOC_LITERAL(1, 6, 16), // "doProseShowMainw"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 27), // "on_returnMainButton_clicked"
QT_MOC_LITERAL(4, 52, 20), // "on_fanButton_clicked"
QT_MOC_LITERAL(5, 73, 24), // "on_suckingButton_clicked"
QT_MOC_LITERAL(6, 98, 22), // "on_brushButton_clicked"
QT_MOC_LITERAL(7, 121, 24), // "on_brushUpButton_clicked"
QT_MOC_LITERAL(8, 146, 19), // "on_adButton_clicked"
QT_MOC_LITERAL(9, 166, 27), // "on_brushSpeedButton_clicked"
QT_MOC_LITERAL(10, 194, 15) // "doProssShowthis"

    },
    "ToolW\0doProseShowMainw\0\0"
    "on_returnMainButton_clicked\0"
    "on_fanButton_clicked\0on_suckingButton_clicked\0"
    "on_brushButton_clicked\0on_brushUpButton_clicked\0"
    "on_adButton_clicked\0on_brushSpeedButton_clicked\0"
    "doProssShowthis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolW[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

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

void ToolW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToolW *_t = static_cast<ToolW *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doProseShowMainw(); break;
        case 1: _t->on_returnMainButton_clicked(); break;
        case 2: _t->on_fanButton_clicked(); break;
        case 3: _t->on_suckingButton_clicked(); break;
        case 4: _t->on_brushButton_clicked(); break;
        case 5: _t->on_brushUpButton_clicked(); break;
        case 6: _t->on_adButton_clicked(); break;
        case 7: _t->on_brushSpeedButton_clicked(); break;
        case 8: _t->doProssShowthis(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ToolW::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolW::doProseShowMainw)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ToolW::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ToolW.data,
      qt_meta_data_ToolW,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ToolW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolW::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolW.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ToolW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ToolW::doProseShowMainw()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
