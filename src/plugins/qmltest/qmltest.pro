QT       += core gui widgets quick quickcontrols2
TEMPLATE = lib
include($$PWD/../../../qtcode.pri)

CONFIG += c++11
CONFIG += plugin
CONFIG += qml_debug

DEFINES += QT_DEPRECATED_WARNINGS

INCLUDEPATH += $$DEPENCE_DIR
CONFIG(release, debug|release){
    LIBS += -L$$BIN_DIST_DIR/lib/ -lappskeleton
    LIBS += -L$$BIN_DIST_DIR/lib/ -lleventbus
    LIBS += -L$$BIN_DIST_DIR/lib/ -lllog
}
else
{
    LIBS += -L$$BIN_DIST_DIR/lib/ -lappskeletond
    LIBS += -L$$BIN_DIST_DIR/lib/ -lleventbusd
    LIBS += -L$$BIN_DIST_DIR/lib/ -lllogd
}

SOURCES += \
    datawidget.cpp \
    qmltest.cpp \
    testclass.cpp \
    qmlcpp.cpp

HEADERS += \
    datawidget.h \
    qmlcpp.h \
    qmltest.h \
    testclass.h
RESOURCES += \
    qmltest.qrc

OTHER_FILES += plugin_info.json
target.path = $$BIN_DIST_DIR/plugins
INSTALLS += target

FORMS += \
    datawidget.ui


