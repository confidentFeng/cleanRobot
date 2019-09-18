/****************************************************************************
** Meta object code from reading C++ file 'generatroadd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../generatroadd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generatroadd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeneratRoadD_t {
    QByteArrayData data[9];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeneratRoadD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeneratRoadD_t qt_meta_stringdata_GeneratRoadD = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GeneratRoadD"
QT_MOC_LITERAL(1, 13, 16), // "doProseShowmorew"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "doProssChangTheMainText"
QT_MOC_LITERAL(4, 55, 3), // "str"
QT_MOC_LITERAL(5, 59, 27), // "on_returnMainButton_clicked"
QT_MOC_LITERAL(6, 87, 26), // "on_cleanModeButton_clicked"
QT_MOC_LITERAL(7, 114, 25), // "on_showModeButton_clicked"
QT_MOC_LITERAL(8, 140, 21) // "doProssReciveThisShow"

    },
    "GeneratRoadD\0doProseShowmorew\0\0"
    "doProssChangTheMainText\0str\0"
    "on_returnMainButton_clicked\0"
    "on_cleanModeButton_clicked\0"
    "on_showModeButton_clicked\0"
    "doProssReciveThisShow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeneratRoadD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GeneratRoadD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GeneratRoadD *_t = static_cast<GeneratRoadD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doProseShowmorew(); break;
        case 1: _t->doProssChangTheMainText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_returnMainButton_clicked(); break;
        case 3: _t->on_cleanModeButton_clicked(); break;
        case 4: _t->on_showModeButton_clicked(); break;
        case 5: _t->doProssReciveThisShow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GeneratRoadD::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeneratRoadD::doProseShowmorew)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GeneratRoadD::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeneratRoadD::doProssChangTheMainText)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject GeneratRoadD::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GeneratRoadD.data,
      qt_meta_data_GeneratRoadD,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GeneratRoadD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeneratRoadD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeneratRoadD.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GeneratRoadD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void GeneratRoadD::doProseShowmorew()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GeneratRoadD::doProssChangTheMainText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
