QT       += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    formaddarchives.cpp \
    formarchives.cpp \
    leftmenubutton.cpp \
    main.cpp \
    sidebarwidget.cpp \
    universitylineedit.cpp \
    universitypushbutton.cpp \
    widget.cpp

HEADERS += \
    formaddarchives.h \
    formarchives.h \
    leftmenubutton.h \
    sidebarwidget.h \
    universitylineedit.h \
    universitypushbutton.h \
    widget.h

FORMS += \
    formaddarchives.ui \
    formarchives.ui \
    leftmenubutton.ui \
    sidebarwidget.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
