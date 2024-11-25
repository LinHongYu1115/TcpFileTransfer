#-------------------------------------------------
#
# Project created by QtCreator
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TcpFileTransfer
TEMPLATE = app

SOURCES += main.cpp\
        tcpfilesender.cpp\
        tcpfileserver.cpp

HEADERS  += tcpfilesender.h\
        tcpfileserver.h
