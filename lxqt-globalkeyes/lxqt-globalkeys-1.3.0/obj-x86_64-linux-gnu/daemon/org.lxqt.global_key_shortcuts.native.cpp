/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a org.lxqt.global_key_shortcuts.native -c OrgLxqtGlobalActionNativeAdaptor -i native_adaptor.h -l NativeAdaptor /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/daemon/org.lxqt.global_key_shortcuts.native.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "org.lxqt.global_key_shortcuts.native.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class OrgLxqtGlobalActionNativeAdaptor
 */

OrgLxqtGlobalActionNativeAdaptor::OrgLxqtGlobalActionNativeAdaptor(NativeAdaptor *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

OrgLxqtGlobalActionNativeAdaptor::~OrgLxqtGlobalActionNativeAdaptor()
{
    // destructor
}

QString OrgLxqtGlobalActionNativeAdaptor::addClientAction(const QString &shortcut, const QDBusObjectPath &path, const QString &description, qulonglong &id)
{
    // handle method call org.lxqt.global_key_shortcuts.native.addClientAction
    return parent()->addClientAction(shortcut, path, description, id);
}

void OrgLxqtGlobalActionNativeAdaptor::cancelShortcutGrab()
{
    // handle method call org.lxqt.global_key_shortcuts.native.cancelShortcutGrab
    parent()->cancelShortcutGrab();
}

QString OrgLxqtGlobalActionNativeAdaptor::changeClientActionShortcut(const QDBusObjectPath &path, const QString &shortcut)
{
    // handle method call org.lxqt.global_key_shortcuts.native.changeClientActionShortcut
    return parent()->changeClientActionShortcut(path, shortcut);
}

bool OrgLxqtGlobalActionNativeAdaptor::deactivateClientAction(const QDBusObjectPath &path)
{
    // handle method call org.lxqt.global_key_shortcuts.native.deactivateClientAction
    return parent()->deactivateClientAction(path);
}

bool OrgLxqtGlobalActionNativeAdaptor::enableClientAction(const QDBusObjectPath &path, bool enabled)
{
    // handle method call org.lxqt.global_key_shortcuts.native.enableClientAction
    return parent()->enableClientAction(path, enabled);
}

QString OrgLxqtGlobalActionNativeAdaptor::grabShortcut(uint timeout, bool &failed, bool &cancelled, bool &timedout)
{
    // handle method call org.lxqt.global_key_shortcuts.native.grabShortcut
    return parent()->grabShortcut(timeout, failed, cancelled, timedout);
}

bool OrgLxqtGlobalActionNativeAdaptor::isClientActionEnabled(const QDBusObjectPath &path)
{
    // handle method call org.lxqt.global_key_shortcuts.native.isClientActionEnabled
    return parent()->isClientActionEnabled(path);
}

bool OrgLxqtGlobalActionNativeAdaptor::modifyClientAction(const QDBusObjectPath &path, const QString &description)
{
    // handle method call org.lxqt.global_key_shortcuts.native.modifyClientAction
    return parent()->modifyClientAction(path, description);
}

bool OrgLxqtGlobalActionNativeAdaptor::removeClientAction(const QDBusObjectPath &path)
{
    // handle method call org.lxqt.global_key_shortcuts.native.removeClientAction
    return parent()->removeClientAction(path);
}


#include "org.lxqt.global_key_shortcuts.native.moc"