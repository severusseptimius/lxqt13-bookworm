/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a applicationadaptorfreedesktopfilemanager -c ApplicationAdaptorFreeDesktopFileManager -i application.h -l PCManFM::Application /home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/pcmanfm/org.freedesktop.FileManager1.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "applicationadaptorfreedesktopfilemanager.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class ApplicationAdaptorFreeDesktopFileManager
 */

ApplicationAdaptorFreeDesktopFileManager::ApplicationAdaptorFreeDesktopFileManager(PCManFM::Application *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ApplicationAdaptorFreeDesktopFileManager::~ApplicationAdaptorFreeDesktopFileManager()
{
    // destructor
}

void ApplicationAdaptorFreeDesktopFileManager::ShowFolders(const QStringList &in0, const QString &in1)
{
    // handle method call org.freedesktop.FileManager1.ShowFolders
    parent()->ShowFolders(in0, in1);
}

void ApplicationAdaptorFreeDesktopFileManager::ShowItemProperties(const QStringList &in0, const QString &in1)
{
    // handle method call org.freedesktop.FileManager1.ShowItemProperties
    parent()->ShowItemProperties(in0, in1);
}

void ApplicationAdaptorFreeDesktopFileManager::ShowItems(const QStringList &in0, const QString &in1)
{
    // handle method call org.freedesktop.FileManager1.ShowItems
    parent()->ShowItems(in0, in1);
}


#include "applicationadaptorfreedesktopfilemanager.moc"
