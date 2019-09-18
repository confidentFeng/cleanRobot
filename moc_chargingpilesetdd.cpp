/****************************************************************************
** Meta object code from reading C++ file 'chargingpilesetdd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "chargingpilesetdd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chargingpilesetdd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChargingPileSetDD_t {
    QByteArrayData data[16];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChargingPileSetDD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChargingPileSetDD_t qt_meta_stringdata_ChargingPileSetDD = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ChargingPileSetDD"
QT_MOC_LITERAL(1, 18, 24), // "doProseShowspecificpoint"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 27), // "on_returnMoreButton_clicked"
QT_MOC_LITERAL(4, 72, 25), // "on_addBoardButton_clicked"
QT_MOC_LITERAL(5, 98, 26), // "on_lessBoardButton_clicked"
QT_MOC_LITERAL(6, 125, 27), // "on_resetBoardButton_clicked"
QT_MOC_LITERAL(7, 153, 29), // "on_setCurrPointButton_clicked"
QT_MOC_LITERAL(8, 183, 26), // "on_manualSetButton_clicked"
QT_MOC_LITERAL(9, 210, 21), // "on_addxButton_clicked"
QT_MOC_LITERAL(10, 232, 22), // "on_lessxButton_clicked"
QT_MOC_LITERAL(11, 255, 21), // "on_addyButton_clicked"
QT_MOC_LITERAL(12, 277, 22), // "on_lessyButton_clicked"
QT_MOC_LITERAL(13, 300, 26), // "doProssReChangeTheMainText"
QT_MOC_LITERAL(14, 327, 3), // "str"
QT_MOC_LITERAL(15, 331, 15) // "doProssTimerOut"

    },
    "ChargingPileSetDD\0doProseShowspecificpoint\0"
    "\0on_returnMoreButton_clicked\0"
    "on_addBoardButton_clicked\0"
    "on_lessBoardButton_clicked\0"
    "on_resetBoardButton_clicked\0"
    "on_setCurrPointButton_clicked\0"
    "on_manualSetButton_clicked\0"
    "on_addxButton_clicked\0on_lessxButton_clicked\0"
    "on_addyButton_clicked\0on_lessyButton_clicked\0"
    "doProssReChangeTheMainText\0str\0"
    "doProssTimerOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChargingPileSetDD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
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
      13,    1,   90,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,

       0        // eod
};

void ChargingPileSetDD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChargingPileSetDD *_t = static_cast<ChargingPileSetDD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doProseShowspecificpoint(); break;
        case 1: _t->on_returnMoreButton_clicked(); break;
        case 2: _t->on_addBoardButton_clicked(); break;
        case 3: _t->on_lessBoardButton_clicked(); break;
        case 4: _t->on_resetBoardButton_clicked(); break;
        case 5: _t->on_setCurrPointButton_clicked(); break;
        case 6: _t->on_manualSetButton_clicked(); break;
        case 7: _t->on_addxButton_clicked(); break;
        case 8: _t->on_lessxButton_clicked(); break;
        case 9: _t->on_addyButton_clicked(); break;
        case 10: _t->on_lessyButton_clicked(); break;
        case 11: _t->doProssReChangeTheMainText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->doProssTimerOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ChargingPileSetDD::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChargingPileSetDD::doProseShowspecificpoint)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ChargingPileSetDD::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChargingPileSetDD.data,
      qt_meta_data_ChargingPileSetDD,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ChargingPileSetDD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChargingPileSetDD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChargingPileSetDD.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ChargingPileSetDD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ChargingPileSetDD::doProseShowspecificpoint()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
