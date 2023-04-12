QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = game
TEMPLATE = app

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Animations.cpp \
    Cards.cpp \
    ClickEvents.cpp \
    Plants.cpp \
    Projectiles.cpp \
    PvzButton.cpp \
    PvzEntity.cpp \
    PvzObject.cpp \
    Scenes.cpp \
    Zombies.cpp \
    main.cpp \
    resources.cpp \
    widget.cpp

HEADERS += \
    Animations.h \
    Cards.h \
    ClickEvents.h \
    Plants.h \
    Projectiles.h \
    PvzButton.h \
    PvzEntity.h \
    PvzObject.h \
    Scenes.h \
    Zombies.h \
    config.h \
    widget.h

FORMS += \
    widget.ui

TRANSLATIONS += \
    Pvz_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Res.qrc \
    Res.qrc \
    Resources.qrc

DISTFILES += \
    Pvz.pro.user \
    Pvz.pro.user.4cb077a
