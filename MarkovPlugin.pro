#-------------------------------------------------
#
# Project created by QtCreator 2014-03-02T03:51:34
#
#-------------------------------------------------

include(/usr/local/share/iris/iris_plugin.pri)

TARGET = $$qtLibraryTarget(xclueless.iris.Markov)

LIBS += -lIris

QT       -= gui

CONFIG +=  c++11 plugin
SOURCES += MarkovPlugin.cpp \
    MarkovCommand.cpp \
    MarkovCommandFactory.cpp
HEADERS += MarkovPlugin.hpp \
    MarkovCommand.hpp \
    MarkovCommandFactory.hpp
