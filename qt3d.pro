######################################################################
# Automatically generated by qmake (2.01a) Tue Nov 25 22:10:41 2008
######################################################################

TEMPLATE = app
TARGET = 
DEPENDPATH += .
INCLUDEPATH += .

QMAKE_CXXFLAGS += -g

QT += webkit script

contains(QT_CONFIG, opengl):{
QT += opengl
unix:!contains(QT_CONFIG, opengles2): LIBS += -lGLEW
}

contains(QT_CONFIG, phonon):{
DEPENDPATH += mediaplayer

QT += phonon

FORMS += mediaplayer/settings.ui
RESOURCES += mediaplayer/mediaplayer.qrc

SOURCES += mediaplayer/mediaplayer.cpp
HEADERS += mediaplayer/mediaplayer.h

DEFINES += USE_PHONON

wince*{
DEPLOYMENT_PLUGIN += phonon_ds9 phonon_waveout
}

}

# Input
HEADERS += entity.h mazescene.h scriptwidget.h
SOURCES += main.cpp entity.cpp mazescene.cpp scriptwidget.cpp

# From modelviewer
HEADERS += modelitem.h model.h
SOURCES += model.cpp modelitem.cpp
