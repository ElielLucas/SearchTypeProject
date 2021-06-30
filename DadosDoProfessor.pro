QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    buscapormatricula.cpp \
    buscapornome.cpp \
    dadosdoarquivo.cpp \
    main.cpp \
    mainwindow.cpp \
    metododeordenacao.cpp \
    orderdepartamentotitulacaonome.cpp \
    orderdeptoname.cpp \
    orderdepttipocontratonome.cpp \
    ordertipocontratonome.cpp \
    ordertitulacaonome.cpp \
    professor.cpp

HEADERS += \
    buscapormatricula.h \
    buscapornome.h \
    dadosdoarquivo.h \
    mainwindow.h \
    metododeordenacao.h \
    orderdepartamentotitulacaonome.h \
    orderdeptoname.h \
    orderdepttipocontratonome.h \
    ordertipocontratonome.h \
    ordertitulacaonome.h \
    professor.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
