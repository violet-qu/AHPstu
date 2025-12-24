/****************************************************************************
** Meta object code from reading C++ file 'sidebarwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sidebarwidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sidebarwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSidebarWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSidebarWidgetENDCLASS = QtMocHelpers::stringData(
    "SidebarWidget",
    "archiveQueryClicked",
    "",
    "archiveDeleteClicked",
    "archiveModifyClicked",
    "archiveAddClicked",
    "onArchiveQueryClicked",
    "onArchiveDeleteClicked",
    "onArchiveModifyClicked",
    "onArchiveAddClicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSidebarWidgetENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[14];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[21];
    char stringdata5[18];
    char stringdata6[22];
    char stringdata7[23];
    char stringdata8[23];
    char stringdata9[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSidebarWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSidebarWidgetENDCLASS_t qt_meta_stringdata_CLASSSidebarWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "SidebarWidget"
        QT_MOC_LITERAL(14, 19),  // "archiveQueryClicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 20),  // "archiveDeleteClicked"
        QT_MOC_LITERAL(56, 20),  // "archiveModifyClicked"
        QT_MOC_LITERAL(77, 17),  // "archiveAddClicked"
        QT_MOC_LITERAL(95, 21),  // "onArchiveQueryClicked"
        QT_MOC_LITERAL(117, 22),  // "onArchiveDeleteClicked"
        QT_MOC_LITERAL(140, 22),  // "onArchiveModifyClicked"
        QT_MOC_LITERAL(163, 19)   // "onArchiveAddClicked"
    },
    "SidebarWidget",
    "archiveQueryClicked",
    "",
    "archiveDeleteClicked",
    "archiveModifyClicked",
    "archiveAddClicked",
    "onArchiveQueryClicked",
    "onArchiveDeleteClicked",
    "onArchiveModifyClicked",
    "onArchiveAddClicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSidebarWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    0,   64,    2, 0x06,    3 /* Public */,
       5,    0,   65,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SidebarWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSSidebarWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSidebarWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSidebarWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SidebarWidget, std::true_type>,
        // method 'archiveQueryClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'archiveDeleteClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'archiveModifyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'archiveAddClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onArchiveQueryClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onArchiveDeleteClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onArchiveModifyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onArchiveAddClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SidebarWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SidebarWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->archiveQueryClicked(); break;
        case 1: _t->archiveDeleteClicked(); break;
        case 2: _t->archiveModifyClicked(); break;
        case 3: _t->archiveAddClicked(); break;
        case 4: _t->onArchiveQueryClicked(); break;
        case 5: _t->onArchiveDeleteClicked(); break;
        case 6: _t->onArchiveModifyClicked(); break;
        case 7: _t->onArchiveAddClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SidebarWidget::*)();
            if (_t _q_method = &SidebarWidget::archiveQueryClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SidebarWidget::*)();
            if (_t _q_method = &SidebarWidget::archiveDeleteClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SidebarWidget::*)();
            if (_t _q_method = &SidebarWidget::archiveModifyClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SidebarWidget::*)();
            if (_t _q_method = &SidebarWidget::archiveAddClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *SidebarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SidebarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSidebarWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SidebarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SidebarWidget::archiveQueryClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SidebarWidget::archiveDeleteClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SidebarWidget::archiveModifyClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SidebarWidget::archiveAddClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
