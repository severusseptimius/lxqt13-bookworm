/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a applicationadaptor -c ApplicationAdaptor -i application.h -l PCManFM::Application /home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/pcmanfm/org.pcmanfm.Application.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "applicationadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class ApplicationAdaptor
 */

ApplicationAdaptor::ApplicationAdaptor(PCManFM::Application *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ApplicationAdaptor::~ApplicationAdaptor()
{
    // destructor
}

bool ApplicationAdaptor::desktopManagerEnabled() const
{
    // get the value of property desktopManagerEnabled
    return qvariant_cast< bool >(parent()->property("desktopManagerEnabled"));
}

void ApplicationAdaptor::desktopManager(bool in0)
{
    // handle method call org.pcmanfm.Application.desktopManager
    parent()->desktopManager(in0);
}

void ApplicationAdaptor::desktopPrefrences(const QString &in0)
{
    // handle method call org.pcmanfm.Application.desktopPrefrences
    parent()->desktopPrefrences(in0);
}

void ApplicationAdaptor::findFiles(const QStringList &in0)
{
    // handle method call org.pcmanfm.Application.findFiles
    parent()->findFiles(in0);
}

void ApplicationAdaptor::launchFiles(const QString &in0, const QStringList &in1, bool in2, bool in3)
{
    // handle method call org.pcmanfm.Application.launchFiles
    parent()->launchFiles(in0, in1, in2, in3);
}

void ApplicationAdaptor::preferences(const QString &in0)
{
    // handle method call org.pcmanfm.Application.preferences
    parent()->preferences(in0);
}

void ApplicationAdaptor::quit()
{
    // handle method call org.pcmanfm.Application.quit
    parent()->quit();
}

void ApplicationAdaptor::setWallpaper(const QString &in0, const QString &in1)
{
    // handle method call org.pcmanfm.Application.setWallpaper
    parent()->setWallpaper(in0, in1);
}


#include "applicationadaptor.moc"
