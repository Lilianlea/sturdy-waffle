/****************************************************************************
** Meta object code from reading C++ file 'gflistener.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyProject3/gflistener.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gflistener.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGFListenerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGFListenerENDCLASS = QtMocHelpers::stringData(
    "GFListener",
    "sendQuaternion",
    "",
    "quaternion",
    "sendDeviceData",
    "QList<uint8_t>",
    "data",
    "dongleUnplugged",
    "scanFinished",
    "deviceFound",
    "devName",
    "rssi",
    "deviceConnected",
    "deviceDisConnected",
    "emgSettingFailed",
    "saveEMGRawData",
    "fileName",
    "finishSaveEMGRawData",
    "saveCombinedData",
    "finishSaveCombinedData",
    "getDeviceStatus",
    "connectDevice",
    "EMG_DATA_BITS",
    "emgDataBits",
    "EMG_DATA_RATE",
    "emgDataRate",
    "ACC_DATA_RATE",
    "accelDataRate",
    "GYRO_DATA_RATE",
    "gyroDataRate",
    "MAG_DATA_RATE",
    "magDataRate",
    "QUAT_DATA_RATE",
    "quatDataRate",
    "disconnectDevice"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGFListenerENDCLASS_t {
    uint offsetsAndSizes[70];
    char stringdata0[11];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[15];
    char stringdata5[15];
    char stringdata6[5];
    char stringdata7[16];
    char stringdata8[13];
    char stringdata9[12];
    char stringdata10[8];
    char stringdata11[5];
    char stringdata12[16];
    char stringdata13[19];
    char stringdata14[17];
    char stringdata15[15];
    char stringdata16[9];
    char stringdata17[21];
    char stringdata18[17];
    char stringdata19[23];
    char stringdata20[16];
    char stringdata21[14];
    char stringdata22[14];
    char stringdata23[12];
    char stringdata24[14];
    char stringdata25[12];
    char stringdata26[14];
    char stringdata27[14];
    char stringdata28[15];
    char stringdata29[13];
    char stringdata30[14];
    char stringdata31[12];
    char stringdata32[15];
    char stringdata33[13];
    char stringdata34[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGFListenerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGFListenerENDCLASS_t qt_meta_stringdata_CLASSGFListenerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "GFListener"
        QT_MOC_LITERAL(11, 14),  // "sendQuaternion"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 10),  // "quaternion"
        QT_MOC_LITERAL(38, 14),  // "sendDeviceData"
        QT_MOC_LITERAL(53, 14),  // "QList<uint8_t>"
        QT_MOC_LITERAL(68, 4),  // "data"
        QT_MOC_LITERAL(73, 15),  // "dongleUnplugged"
        QT_MOC_LITERAL(89, 12),  // "scanFinished"
        QT_MOC_LITERAL(102, 11),  // "deviceFound"
        QT_MOC_LITERAL(114, 7),  // "devName"
        QT_MOC_LITERAL(122, 4),  // "rssi"
        QT_MOC_LITERAL(127, 15),  // "deviceConnected"
        QT_MOC_LITERAL(143, 18),  // "deviceDisConnected"
        QT_MOC_LITERAL(162, 16),  // "emgSettingFailed"
        QT_MOC_LITERAL(179, 14),  // "saveEMGRawData"
        QT_MOC_LITERAL(194, 8),  // "fileName"
        QT_MOC_LITERAL(203, 20),  // "finishSaveEMGRawData"
        QT_MOC_LITERAL(224, 16),  // "saveCombinedData"
        QT_MOC_LITERAL(241, 22),  // "finishSaveCombinedData"
        QT_MOC_LITERAL(264, 15),  // "getDeviceStatus"
        QT_MOC_LITERAL(280, 13),  // "connectDevice"
        QT_MOC_LITERAL(294, 13),  // "EMG_DATA_BITS"
        QT_MOC_LITERAL(308, 11),  // "emgDataBits"
        QT_MOC_LITERAL(320, 13),  // "EMG_DATA_RATE"
        QT_MOC_LITERAL(334, 11),  // "emgDataRate"
        QT_MOC_LITERAL(346, 13),  // "ACC_DATA_RATE"
        QT_MOC_LITERAL(360, 13),  // "accelDataRate"
        QT_MOC_LITERAL(374, 14),  // "GYRO_DATA_RATE"
        QT_MOC_LITERAL(389, 12),  // "gyroDataRate"
        QT_MOC_LITERAL(402, 13),  // "MAG_DATA_RATE"
        QT_MOC_LITERAL(416, 11),  // "magDataRate"
        QT_MOC_LITERAL(428, 14),  // "QUAT_DATA_RATE"
        QT_MOC_LITERAL(443, 12),  // "quatDataRate"
        QT_MOC_LITERAL(456, 16)   // "disconnectDevice"
    },
    "GFListener",
    "sendQuaternion",
    "",
    "quaternion",
    "sendDeviceData",
    "QList<uint8_t>",
    "data",
    "dongleUnplugged",
    "scanFinished",
    "deviceFound",
    "devName",
    "rssi",
    "deviceConnected",
    "deviceDisConnected",
    "emgSettingFailed",
    "saveEMGRawData",
    "fileName",
    "finishSaveEMGRawData",
    "saveCombinedData",
    "finishSaveCombinedData",
    "getDeviceStatus",
    "connectDevice",
    "EMG_DATA_BITS",
    "emgDataBits",
    "EMG_DATA_RATE",
    "emgDataRate",
    "ACC_DATA_RATE",
    "accelDataRate",
    "GYRO_DATA_RATE",
    "gyroDataRate",
    "MAG_DATA_RATE",
    "magDataRate",
    "QUAT_DATA_RATE",
    "quatDataRate",
    "disconnectDevice"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGFListenerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x06,    1 /* Public */,
       4,    1,  107,    2, 0x06,    3 /* Public */,
       7,    0,  110,    2, 0x06,    5 /* Public */,
       8,    0,  111,    2, 0x06,    6 /* Public */,
       9,    2,  112,    2, 0x06,    7 /* Public */,
      12,    0,  117,    2, 0x06,   10 /* Public */,
      13,    0,  118,    2, 0x06,   11 /* Public */,
      14,    0,  119,    2, 0x06,   12 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      15,    1,  120,    2, 0x02,   13 /* Public */,
      17,    0,  123,    2, 0x02,   15 /* Public */,
      18,    1,  124,    2, 0x02,   16 /* Public */,
      19,    0,  127,    2, 0x02,   18 /* Public */,
      20,    0,  128,    2, 0x02,   19 /* Public */,
      21,    7,  129,    2, 0x02,   20 /* Public */,
      34,    0,  144,    2, 0x02,   28 /* Public */,

 // signals: parameters
    QMetaType::QVariant, QMetaType::QVariant,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 22, 0x80000000 | 24, 0x80000000 | 26, 0x80000000 | 28, 0x80000000 | 30, 0x80000000 | 32,   10,   23,   25,   27,   29,   31,   33,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GFListener::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGFListenerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGFListenerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGFListenerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GFListener, std::true_type>,
        // method 'sendQuaternion'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'sendDeviceData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<uint8_t>, std::false_type>,
        // method 'dongleUnplugged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scanFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        // method 'deviceConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceDisConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emgSettingFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveEMGRawData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'finishSaveEMGRawData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveCombinedData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'finishSaveCombinedData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getDeviceStatus'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'connectDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EMG_DATA_BITS, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EMG_DATA_RATE, std::false_type>,
        QtPrivate::TypeAndForceComplete<const ACC_DATA_RATE, std::false_type>,
        QtPrivate::TypeAndForceComplete<const GYRO_DATA_RATE, std::false_type>,
        QtPrivate::TypeAndForceComplete<const MAG_DATA_RATE, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUAT_DATA_RATE, std::false_type>,
        // method 'disconnectDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GFListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GFListener *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QVariant _r = _t->sendQuaternion((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->sendDeviceData((*reinterpret_cast< std::add_pointer_t<QList<uint8_t>>>(_a[1]))); break;
        case 2: _t->dongleUnplugged(); break;
        case 3: _t->scanFinished(); break;
        case 4: _t->deviceFound((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2]))); break;
        case 5: _t->deviceConnected(); break;
        case 6: _t->deviceDisConnected(); break;
        case 7: _t->emgSettingFailed(); break;
        case 8: _t->saveEMGRawData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->finishSaveEMGRawData(); break;
        case 10: _t->saveCombinedData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->finishSaveCombinedData(); break;
        case 12: { bool _r = _t->getDeviceStatus();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->connectDevice((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<EMG_DATA_BITS>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<EMG_DATA_RATE>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<ACC_DATA_RATE>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<GYRO_DATA_RATE>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<MAG_DATA_RATE>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QUAT_DATA_RATE>>(_a[7]))); break;
        case 14: _t->disconnectDevice(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = QVariant (GFListener::*)(QVariant );
            if (_t _q_method = &GFListener::sendQuaternion; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GFListener::*)(QVector<uint8_t> );
            if (_t _q_method = &GFListener::sendDeviceData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GFListener::*)();
            if (_t _q_method = &GFListener::dongleUnplugged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GFListener::*)();
            if (_t _q_method = &GFListener::scanFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GFListener::*)(QString , unsigned int );
            if (_t _q_method = &GFListener::deviceFound; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GFListener::*)();
            if (_t _q_method = &GFListener::deviceConnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GFListener::*)();
            if (_t _q_method = &GFListener::deviceDisConnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GFListener::*)();
            if (_t _q_method = &GFListener::emgSettingFailed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *GFListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GFListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGFListenerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "HubListener"))
        return static_cast< HubListener*>(this);
    return QObject::qt_metacast(_clname);
}

int GFListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
QVariant GFListener::sendQuaternion(QVariant _t1)
{
    QVariant _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
void GFListener::sendDeviceData(QVector<uint8_t> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GFListener::dongleUnplugged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GFListener::scanFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GFListener::deviceFound(QString _t1, unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GFListener::deviceConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void GFListener::deviceDisConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void GFListener::emgSettingFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
