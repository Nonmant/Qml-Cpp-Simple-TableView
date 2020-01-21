/****************************************************************************
** Meta object code from reading C++ file 'portthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../StmDataReading/StmComPort/portthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'portthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PortThread_t {
    QByteArrayData data[19];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PortThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PortThread_t qt_meta_stringdata_PortThread = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PortThread"
QT_MOC_LITERAL(1, 11, 13), // "sendPortsList"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "ports"
QT_MOC_LITERAL(4, 32, 20), // "sendConnectionResult"
QT_MOC_LITERAL(5, 53, 3), // "res"
QT_MOC_LITERAL(6, 57, 12), // "readFromPort"
QT_MOC_LITERAL(7, 70, 15), // "handlePortError"
QT_MOC_LITERAL(8, 86, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(9, 115, 5), // "error"
QT_MOC_LITERAL(10, 121, 12), // "refreshPorts"
QT_MOC_LITERAL(11, 134, 13), // "connectToPort"
QT_MOC_LITERAL(12, 148, 7), // "portNum"
QT_MOC_LITERAL(13, 156, 16), // "disconnectToPort"
QT_MOC_LITERAL(14, 173, 10), // "write2Port"
QT_MOC_LITERAL(15, 184, 4), // "data"
QT_MOC_LITERAL(16, 189, 3), // "ans"
QT_MOC_LITERAL(17, 193, 2), // "id"
QT_MOC_LITERAL(18, 196, 3) // "arg"

    },
    "PortThread\0sendPortsList\0\0ports\0"
    "sendConnectionResult\0res\0readFromPort\0"
    "handlePortError\0QSerialPort::SerialPortError\0"
    "error\0refreshPorts\0connectToPort\0"
    "portNum\0disconnectToPort\0write2Port\0"
    "data\0ans\0id\0arg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PortThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   70,    2, 0x08 /* Private */,
       7,    1,   71,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x0a /* Public */,
      11,    1,   75,    2, 0x0a /* Public */,
      13,    0,   78,    2, 0x0a /* Public */,
      14,    4,   79,    2, 0x0a /* Public */,
      14,    3,   88,    2, 0x2a /* Public | MethodCloned */,
      14,    2,   95,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,   15,   16,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   15,   16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,   16,

       0        // eod
};

void PortThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PortThread *_t = static_cast<PortThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendPortsList((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->sendConnectionResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->readFromPort(); break;
        case 3: _t->handlePortError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 4: _t->refreshPorts(); break;
        case 5: _t->connectToPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->disconnectToPort(); break;
        case 7: _t->write2Port((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 8: _t->write2Port((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->write2Port((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PortThread::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PortThread::sendPortsList)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PortThread::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PortThread::sendConnectionResult)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject PortThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_PortThread.data,
      qt_meta_data_PortThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PortThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PortThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PortThread.stringdata0))
        return static_cast<void*>(const_cast< PortThread*>(this));
    return QThread::qt_metacast(_clname);
}

int PortThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void PortThread::sendPortsList(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PortThread::sendConnectionResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
