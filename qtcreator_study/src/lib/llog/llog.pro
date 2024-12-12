QT += core

TEMPLATE = lib
DEFINES += LLOG_LIBRARY
include($$PWD/../../../qtcode.pri)
CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    llog.cpp

HEADERS += \
    llog_global.h \
    llog.h

INCLUDEPATH += $$DEPENCE_DIR
CONFIG(debug,debug|release) : TARGET = llogd
CONFIG(release,debug|release) : TARGET = llog

target.path = $$BIN_DIST_DIR/lib

incfiles.files = $$HEADERS
incfiles.path = $$BIN_DIST_DIR/include/llog

INSTALLS += target incfiles
DESTDIR = $$BIN_DIST_DIR
