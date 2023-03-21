QT       += core gui
RC_FILE += AR.rc
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    addnew.cpp \
    appremind.cpp \
    ball.cpp \
    datetime.cpp \
    editdialog.cpp \
    history.cpp \
    lengthen.cpp \
    main.cpp \
    dialog.cpp \
    note.cpp \
    settingdia.cpp \
    suspenddia.cpp \
    vector_.cpp

HEADERS += \
    about.h \
    addnew.h \
    appremind.h \
    ball.h \
    datetime.h \
    dialog.h \
    editdialog.h \
    history.h \
    lengthen.h \
    note.h \
    settingdia.h \
    suspenddia.h \
    vector_.h

FORMS += \
    about.ui \
    addnew.ui \
    appremind.ui \
    ball.ui \
    datetime.ui \
    dialog.ui \
    editdialog.ui \
    history.ui \
    lengthen.ui \
    note.ui \
    settingdia.ui \
    suspenddia.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    AR.rc

RESOURCES += \
    Dialog_pic.qrc
