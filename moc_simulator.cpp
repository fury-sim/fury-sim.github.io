/****************************************************************************
** Meta object code from reading C++ file 'simulator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../fury-dps-sim/simulator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_simulator_t {
    QByteArrayData data[15];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_simulator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_simulator_t qt_meta_stringdata_simulator = {
    {
QT_MOC_LITERAL(0, 0, 9), // "simulator"
QT_MOC_LITERAL(1, 10, 17), // "emitNewItemWeight"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "emitNewSimulationStep"
QT_MOC_LITERAL(4, 51, 14), // "emitStatWeight"
QT_MOC_LITERAL(5, 66, 15), // "emitIncProgress"
QT_MOC_LITERAL(6, 82, 12), // "emitFinished"
QT_MOC_LITERAL(7, 95, 15), // "emitExecuteData"
QT_MOC_LITERAL(8, 111, 14), // "emitAverageDPS"
QT_MOC_LITERAL(9, 126, 15), // "emitProccUptime"
QT_MOC_LITERAL(10, 142, 13), // "emitMiniStats"
QT_MOC_LITERAL(11, 156, 16), // "emitWhiteHitData"
QT_MOC_LITERAL(12, 173, 17), // "emitWhirlwindData"
QT_MOC_LITERAL(13, 191, 19), // "emitBloodthirstData"
QT_MOC_LITERAL(14, 211, 20) // "emitHeroicStrikeData"

    },
    "simulator\0emitNewItemWeight\0\0"
    "emitNewSimulationStep\0emitStatWeight\0"
    "emitIncProgress\0emitFinished\0"
    "emitExecuteData\0emitAverageDPS\0"
    "emitProccUptime\0emitMiniStats\0"
    "emitWhiteHitData\0emitWhirlwindData\0"
    "emitBloodthirstData\0emitHeroicStrikeData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_simulator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   84,    2, 0x06 /* Public */,
       3,    2,   95,    2, 0x06 /* Public */,
       4,    2,  100,    2, 0x06 /* Public */,
       5,    0,  105,    2, 0x06 /* Public */,
       6,    0,  106,    2, 0x06 /* Public */,
       7,    2,  107,    2, 0x06 /* Public */,
       8,    2,  112,    2, 0x06 /* Public */,
       9,    2,  117,    2, 0x06 /* Public */,
      10,    2,  122,    2, 0x06 /* Public */,
      11,    6,  127,    2, 0x06 /* Public */,
      12,    6,  140,    2, 0x06 /* Public */,
       7,    6,  153,    2, 0x06 /* Public */,
      13,    6,  166,    2, 0x06 /* Public */,
      14,    6,  179,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,    2,    2,

       0        // eod
};

void simulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<simulator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emitNewItemWeight((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 1: _t->emitNewSimulationStep((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->emitStatWeight((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->emitIncProgress(); break;
        case 4: _t->emitFinished(); break;
        case 5: _t->emitExecuteData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->emitAverageDPS((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 7: _t->emitProccUptime((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 8: _t->emitMiniStats((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 9: _t->emitWhiteHitData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 10: _t->emitWhirlwindData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 11: _t->emitExecuteData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 12: _t->emitBloodthirstData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 13: _t->emitHeroicStrikeData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (simulator::*)(QString , double , double , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&simulator::emitNewItemWeight)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (simulator::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&simulator::emitNewSimulationStep)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (simulator::*)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&simulator::emitStatWeight)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (simulator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&simulator::emitIncProgress)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (simulator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&simulator::emitFinished)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (simulator::*)(QString , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&simulator::emitExecuteData)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (simulator::*)(QString , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&simulator::emitAverageDPS)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (simulator::*)(QString , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&simulator::emitProccUptime)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (simulator::*)(QString , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&simulator::emitMiniStats)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (simulator::*)(QString , double , double , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&simulator::emitWhiteHitData)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (simulator::*)(QString , double , double , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&simulator::emitWhirlwindData)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (simulator::*)(QString , double , double , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&simulator::emitExecuteData)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (simulator::*)(QString , double , double , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&simulator::emitBloodthirstData)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (simulator::*)(QString , double , double , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&simulator::emitHeroicStrikeData)) {
                *result = 13;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject simulator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_simulator.data,
    qt_meta_data_simulator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *simulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *simulator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_simulator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int simulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void simulator::emitNewItemWeight(QString _t1, double _t2, double _t3, QString _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void simulator::emitNewSimulationStep(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void simulator::emitStatWeight(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void simulator::emitIncProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void simulator::emitFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void simulator::emitExecuteData(QString _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void simulator::emitAverageDPS(QString _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void simulator::emitProccUptime(QString _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void simulator::emitMiniStats(QString _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void simulator::emitWhiteHitData(QString _t1, double _t2, double _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void simulator::emitWhirlwindData(QString _t1, double _t2, double _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void simulator::emitExecuteData(QString _t1, double _t2, double _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void simulator::emitBloodthirstData(QString _t1, double _t2, double _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void simulator::emitHeroicStrikeData(QString _t1, double _t2, double _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
