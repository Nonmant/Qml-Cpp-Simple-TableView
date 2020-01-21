/****************************************************************************
** Meta object code from reading C++ file 'buttonchartseries2file.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../StmDataReading/StmComPort/buttonchartseries2file.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttonchartseries2file.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ButtonChartSeries2File_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ButtonChartSeries2File_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ButtonChartSeries2File_t qt_meta_stringdata_ButtonChartSeries2File = {
    {
QT_MOC_LITERAL(0, 0, 22) // "ButtonChartSeries2File"

    },
    "ButtonChartSeries2File"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ButtonChartSeries2File[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ButtonChartSeries2File::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ButtonChartSeries2File::staticMetaObject = {
    { &ButtonChild::staticMetaObject, qt_meta_stringdata_ButtonChartSeries2File.data,
      qt_meta_data_ButtonChartSeries2File,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ButtonChartSeries2File::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ButtonChartSeries2File::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ButtonChartSeries2File.stringdata0))
        return static_cast<void*>(const_cast< ButtonChartSeries2File*>(this));
    return ButtonChild::qt_metacast(_clname);
}

int ButtonChartSeries2File::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ButtonChild::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
