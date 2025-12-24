/****************************************************************************
** Meta object code from reading C++ file 'universitylineedit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../universitylineedit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'universitylineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSUniversityLineEditENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSUniversityLineEditENDCLASS = QtMocHelpers::stringData(
    "UniversityLineEdit",
    "borderColor",
    "borderThickness",
    "focusColor",
    "hoverColor"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUniversityLineEditENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[19];
    char stringdata1[12];
    char stringdata2[16];
    char stringdata3[11];
    char stringdata4[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUniversityLineEditENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUniversityLineEditENDCLASS_t qt_meta_stringdata_CLASSUniversityLineEditENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "UniversityLineEdit"
        QT_MOC_LITERAL(19, 11),  // "borderColor"
        QT_MOC_LITERAL(31, 15),  // "borderThickness"
        QT_MOC_LITERAL(47, 10),  // "focusColor"
        QT_MOC_LITERAL(58, 10)   // "hoverColor"
    },
    "UniversityLineEdit",
    "borderColor",
    "borderThickness",
    "focusColor",
    "hoverColor"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUniversityLineEditENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00015103, uint(-1), 0,
       2, QMetaType::Int, 0x00015103, uint(-1), 0,
       3, QMetaType::QColor, 0x00015103, uint(-1), 0,
       4, QMetaType::QColor, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject UniversityLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_CLASSUniversityLineEditENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUniversityLineEditENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUniversityLineEditENDCLASS_t,
        // property 'borderColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'borderThickness'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'focusColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'hoverColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UniversityLineEdit, std::true_type>
    >,
    nullptr
} };

void UniversityLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UniversityLineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->borderColor(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->borderThickness(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->focusColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->hoverColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UniversityLineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBorderThickness(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setFocusColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setHoverColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *UniversityLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UniversityLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUniversityLineEditENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int UniversityLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
