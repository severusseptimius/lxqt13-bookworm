/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a org.lxqt.global_key_shortcuts.daemon -c OrgLxqtGlobalActionDaemonAdaptor -i daemon_adaptor.h -l DaemonAdaptor /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/daemon/org.lxqt.global_key_shortcuts.daemon.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "org.lxqt.global_key_shortcuts.daemon.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class OrgLxqtGlobalActionDaemonAdaptor
 */

OrgLxqtGlobalActionDaemonAdaptor::OrgLxqtGlobalActionDaemonAdaptor(DaemonAdaptor *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

OrgLxqtGlobalActionDaemonAdaptor::~OrgLxqtGlobalActionDaemonAdaptor()
{
    // destructor
}

QString OrgLxqtGlobalActionDaemonAdaptor::addCommandAction(const QString &shortcut, const QString &command, const QStringList &arguments, const QString &description, qulonglong &id)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.addCommandAction
    return parent()->addCommandAction(shortcut, command, arguments, description, id);
}

QString OrgLxqtGlobalActionDaemonAdaptor::addMethodAction(const QString &shortcut, const QString &service, const QDBusObjectPath &path, const QString &interface, const QString &method, const QString &description, qulonglong &id)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.addMethodAction
    return parent()->addMethodAction(shortcut, service, path, interface, method, description, id);
}

void OrgLxqtGlobalActionDaemonAdaptor::cancelShortcutGrab()
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.cancelShortcutGrab
    parent()->cancelShortcutGrab();
}

QString OrgLxqtGlobalActionDaemonAdaptor::changeShortcut(qulonglong id, const QString &shortcut)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.changeShortcut
    return parent()->changeShortcut(id, shortcut);
}

bool OrgLxqtGlobalActionDaemonAdaptor::enableAction(qulonglong id, bool enabled)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.enableAction
    return parent()->enableAction(id, enabled);
}

bool OrgLxqtGlobalActionDaemonAdaptor::getActionById(qulonglong id, QString &shortcut, QString &description, bool &enabled, QString &type, QString &info)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.getActionById
    return parent()->getActionById(id, shortcut, description, enabled, type, info);
}

QList<qulonglong> OrgLxqtGlobalActionDaemonAdaptor::getAllActionIds()
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.getAllActionIds
    return parent()->getAllActionIds();
}

QMap_qulonglong_GeneralActionInfo OrgLxqtGlobalActionDaemonAdaptor::getAllActions()
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.getAllActions
    return parent()->getAllActions();
}

bool OrgLxqtGlobalActionDaemonAdaptor::getClientActionInfoById(qulonglong id, QString &shortcut, QString &description, bool &enabled, QDBusObjectPath &path)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.getClientActionInfoById
    return parent()->getClientActionInfoById(id, shortcut, description, enabled, path);
}

QString OrgLxqtGlobalActionDaemonAdaptor::getClientActionSender(qulonglong id)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.getClientActionSender
    return parent()->getClientActionSender(id);
}

bool OrgLxqtGlobalActionDaemonAdaptor::getCommandActionInfoById(qulonglong id, QString &shortcut, QString &description, bool &enabled, QString &command, QStringList &arguments)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.getCommandActionInfoById
    return parent()->getCommandActionInfoById(id, shortcut, description, enabled, command, arguments);
}

bool OrgLxqtGlobalActionDaemonAdaptor::getMethodActionInfoById(qulonglong id, QString &shortcut, QString &description, bool &enabled, QString &service, QDBusObjectPath &path, QString &interface, QString &method)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.getMethodActionInfoById
    return parent()->getMethodActionInfoById(id, shortcut, description, enabled, service, path, interface, method);
}

uint OrgLxqtGlobalActionDaemonAdaptor::getMultipleActionsBehaviour()
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.getMultipleActionsBehaviour
    return parent()->getMultipleActionsBehaviour();
}

QString OrgLxqtGlobalActionDaemonAdaptor::grabShortcut(uint timeout, bool &failed, bool &cancelled, bool &timedout)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.grabShortcut
    return parent()->grabShortcut(timeout, failed, cancelled, timedout);
}

bool OrgLxqtGlobalActionDaemonAdaptor::isActionEnabled(qulonglong id)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.isActionEnabled
    return parent()->isActionEnabled(id);
}

bool OrgLxqtGlobalActionDaemonAdaptor::modifyActionDescription(qulonglong id, const QString &description)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.modifyActionDescription
    return parent()->modifyActionDescription(id, description);
}

bool OrgLxqtGlobalActionDaemonAdaptor::modifyCommandAction(qulonglong id, const QString &command, const QStringList &arguments, const QString &description)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.modifyCommandAction
    return parent()->modifyCommandAction(id, command, arguments, description);
}

bool OrgLxqtGlobalActionDaemonAdaptor::modifyMethodAction(qulonglong id, const QString &service, const QDBusObjectPath &path, const QString &interface, const QString &method, const QString &description)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.modifyMethodAction
    return parent()->modifyMethodAction(id, service, path, interface, method, description);
}

void OrgLxqtGlobalActionDaemonAdaptor::quit()
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.quit
    parent()->quit();
}

bool OrgLxqtGlobalActionDaemonAdaptor::removeAction(qulonglong id)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.removeAction
    return parent()->removeAction(id);
}

bool OrgLxqtGlobalActionDaemonAdaptor::setMultipleActionsBehaviour(uint behaviour)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.setMultipleActionsBehaviour
    return parent()->setMultipleActionsBehaviour(behaviour);
}

bool OrgLxqtGlobalActionDaemonAdaptor::swapActions(qulonglong id1, qulonglong id2)
{
    // handle method call org.lxqt.global_key_shortcuts.daemon.swapActions
    return parent()->swapActions(id1, id2);
}


#include "org.lxqt.global_key_shortcuts.daemon.moc"