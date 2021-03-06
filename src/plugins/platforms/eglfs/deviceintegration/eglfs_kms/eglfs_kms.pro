TARGET = qeglfs-kms-integration

PLUGIN_CLASS_NAME=QEglFSKmsIntegrationPlugin
PLUGIN_TYPE=egldeviceintegrations

load(qt_plugin)

QT += core-private gui-private platformsupport-private eglfs_device_lib-private

INCLUDEPATH += $$PWD/../..

# Avoid X11 header collision
DEFINES += MESA_EGL_NO_X11_HEADERS

CONFIG += link_pkgconfig
PKGCONFIG += libdrm gbm

CONFIG += egl
QMAKE_LFLAGS += $$QMAKE_LFLAGS_NOUNDEF

SOURCES += $$PWD/qeglfskmsmain.cpp \
           $$PWD/qeglfskmsintegration.cpp

HEADERS += $$PWD/qeglfskmsintegration.h

OTHER_FILES += $$PWD/eglfs_kms.json
