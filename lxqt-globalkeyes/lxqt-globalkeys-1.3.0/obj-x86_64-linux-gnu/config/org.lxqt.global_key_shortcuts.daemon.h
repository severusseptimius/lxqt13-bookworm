/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -i /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/daemon/meta_types.h -p org.lxqt.global_key_shortcuts.daemon /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/config/org.lxqt.global_key_shortcuts.daemon.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef ORG_LXQT_GLOBAL_KEY_SHORTCUTS_DAEMON_H
#define ORG_LXQT_GLOBAL_KEY_SHORTCUTS_DAEMON_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "/home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/daemon/meta_types.h"

/*
 * Proxy class for interface org.lxqt.global_key_shortcuts.daemon
 */
class OrgLxqtGlobal_key_shortcutsDaemonInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.lxqt.global_key_shortcuts.daemon"; }

public:
    OrgLxqtGlobal_key_shortcutsDaemonInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgLxqtGlobal_key_shortcutsDaemonInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString, qulonglong> addCommandAction(const QString &shortcut, const QString &command, const QStringList &arguments, const QString &description)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(shortcut) << QVariant::fromValue(command) << QVariant::fromValue(arguments) << QVariant::fromValue(description);
        return asyncCallWithArgumentList(QStringLiteral("addCommandAction"), argumentList);
    }
    inline QDBusReply<QString> addCommandAction(const QString &shortcut, const QString &command, const QStringList &arguments, const QString &description, qulonglong &id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(shortcut) << QVariant::fromValue(command) << QVariant::fromValue(arguments) << QVariant::fromValue(description);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("addCommandAction"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 2) {
            id = qdbus_cast<qulonglong>(reply.arguments().at(1));
        }
        return reply;
    }

    inline QDBusPendingReply<QString, qulonglong> addMethodAction(const QString &shortcut, const QString &service, const QDBusObjectPath &path, const QString &interface, const QString &method, const QString &description)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(shortcut) << QVariant::fromValue(service) << QVariant::fromValue(path) << QVariant::fromValue(interface) << QVariant::fromValue(method) << QVariant::fromValue(description);
        return asyncCallWithArgumentList(QStringLiteral("addMethodAction"), argumentList);
    }
    inline QDBusReply<QString> addMethodAction(const QString &shortcut, const QString &service, const QDBusObjectPath &path, const QString &interface, const QString &method, const QString &description, qulonglong &id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(shortcut) << QVariant::fromValue(service) << QVariant::fromValue(path) << QVariant::fromValue(interface) << QVariant::fromValue(method) << QVariant::fromValue(description);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("addMethodAction"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 2) {
            id = qdbus_cast<qulonglong>(reply.arguments().at(1));
        }
        return reply;
    }

    inline QDBusPendingReply<> cancelShortcutGrab()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("cancelShortcutGrab"), argumentList);
    }

    inline QDBusPendingReply<QString> changeShortcut(qulonglong id, const QString &shortcut)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id) << QVariant::fromValue(shortcut);
        return asyncCallWithArgumentList(QStringLiteral("changeShortcut"), argumentList);
    }

    inline QDBusPendingReply<bool> enableAction(qulonglong id, bool enabled)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id) << QVariant::fromValue(enabled);
        return asyncCallWithArgumentList(QStringLiteral("enableAction"), argumentList);
    }

    inline QDBusPendingReply<bool, QString, QString, bool, QString, QString> getActionById(qulonglong id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id);
        return asyncCallWithArgumentList(QStringLiteral("getActionById"), argumentList);
    }
    inline QDBusReply<bool> getActionById(qulonglong id, QString &shortcut, QString &description, bool &enabled, QString &type, QString &info)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("getActionById"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 6) {
            shortcut = qdbus_cast<QString>(reply.arguments().at(1));
            description = qdbus_cast<QString>(reply.arguments().at(2));
            enabled = qdbus_cast<bool>(reply.arguments().at(3));
            type = qdbus_cast<QString>(reply.arguments().at(4));
            info = qdbus_cast<QString>(reply.arguments().at(5));
        }
        return reply;
    }

    inline QDBusPendingReply<QList<qulonglong> > getAllActionIds()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getAllActionIds"), argumentList);
    }

    inline QDBusPendingReply<QMap_qulonglong_GeneralActionInfo> getAllActions()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getAllActions"), argumentList);
    }

    inline QDBusPendingReply<bool, QString, QString, bool, QDBusObjectPath> getClientActionInfoById(qulonglong id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id);
        return asyncCallWithArgumentList(QStringLiteral("getClientActionInfoById"), argumentList);
    }
    inline QDBusReply<bool> getClientActionInfoById(qulonglong id, QString &shortcut, QString &description, bool &enabled, QDBusObjectPath &path)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("getClientActionInfoById"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 5) {
            shortcut = qdbus_cast<QString>(reply.arguments().at(1));
            description = qdbus_cast<QString>(reply.arguments().at(2));
            enabled = qdbus_cast<bool>(reply.arguments().at(3));
            path = qdbus_cast<QDBusObjectPath>(reply.arguments().at(4));
        }
        return reply;
    }

    inline QDBusPendingReply<QString> getClientActionSender(qulonglong id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id);
        return asyncCallWithArgumentList(QStringLiteral("getClientActionSender"), argumentList);
    }

    inline QDBusPendingReply<bool, QString, QString, bool, QString, QStringList> getCommandActionInfoById(qulonglong id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id);
        return asyncCallWithArgumentList(QStringLiteral("getCommandActionInfoById"), argumentList);
    }
    inline QDBusReply<bool> getCommandActionInfoById(qulonglong id, QString &shortcut, QString &description, bool &enabled, QString &command, QStringList &arguments)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("getCommandActionInfoById"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 6) {
            shortcut = qdbus_cast<QString>(reply.arguments().at(1));
            description = qdbus_cast<QString>(reply.arguments().at(2));
            enabled = qdbus_cast<bool>(reply.arguments().at(3));
            command = qdbus_cast<QString>(reply.arguments().at(4));
            arguments = qdbus_cast<QStringList>(reply.arguments().at(5));
        }
        return reply;
    }

    inline QDBusPendingReply<bool, QString, QString, bool, QString, QDBusObjectPath, QString, QString> getMethodActionInfoById(qulonglong id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id);
        return asyncCallWithArgumentList(QStringLiteral("getMethodActionInfoById"), argumentList);
    }
    inline QDBusReply<bool> getMethodActionInfoById(qulonglong id, QString &shortcut, QString &description, bool &enabled, QString &service, QDBusObjectPath &path, QString &interface, QString &method)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("getMethodActionInfoById"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 8) {
            shortcut = qdbus_cast<QString>(reply.arguments().at(1));
            description = qdbus_cast<QString>(reply.arguments().at(2));
            enabled = qdbus_cast<bool>(reply.arguments().at(3));
            service = qdbus_cast<QString>(reply.arguments().at(4));
            path = qdbus_cast<QDBusObjectPath>(reply.arguments().at(5));
            interface = qdbus_cast<QString>(reply.arguments().at(6));
            method = qdbus_cast<QString>(reply.arguments().at(7));
        }
        return reply;
    }

    inline QDBusPendingReply<uint> getMultipleActionsBehaviour()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getMultipleActionsBehaviour"), argumentList);
    }

    inline QDBusPendingReply<QString, bool, bool, bool> grabShortcut(uint timeout)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(timeout);
        return asyncCallWithArgumentList(QStringLiteral("grabShortcut"), argumentList);
    }
    inline QDBusReply<QString> grabShortcut(uint timeout, bool &failed, bool &cancelled, bool &timedout)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(timeout);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("grabShortcut"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 4) {
            failed = qdbus_cast<bool>(reply.arguments().at(1));
            cancelled = qdbus_cast<bool>(reply.arguments().at(2));
            timedout = qdbus_cast<bool>(reply.arguments().at(3));
        }
        return reply;
    }

    inline QDBusPendingReply<bool> isActionEnabled(qulonglong id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id);
        return asyncCallWithArgumentList(QStringLiteral("isActionEnabled"), argumentList);
    }

    inline QDBusPendingReply<bool> modifyActionDescription(qulonglong id, const QString &description)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id) << QVariant::fromValue(description);
        return asyncCallWithArgumentList(QStringLiteral("modifyActionDescription"), argumentList);
    }

    inline QDBusPendingReply<bool> modifyCommandAction(qulonglong id, const QString &command, const QStringList &arguments, const QString &description)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id) << QVariant::fromValue(command) << QVariant::fromValue(arguments) << QVariant::fromValue(description);
        return asyncCallWithArgumentList(QStringLiteral("modifyCommandAction"), argumentList);
    }

    inline QDBusPendingReply<bool> modifyMethodAction(qulonglong id, const QString &service, const QDBusObjectPath &path, const QString &interface, const QString &method, const QString &description)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id) << QVariant::fromValue(service) << QVariant::fromValue(path) << QVariant::fromValue(interface) << QVariant::fromValue(method) << QVariant::fromValue(description);
        return asyncCallWithArgumentList(QStringLiteral("modifyMethodAction"), argumentList);
    }

    inline Q_NOREPLY void quit()
    {
        QList<QVariant> argumentList;
        callWithArgumentList(QDBus::NoBlock, QStringLiteral("quit"), argumentList);
    }

    inline QDBusPendingReply<bool> removeAction(qulonglong id)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id);
        return asyncCallWithArgumentList(QStringLiteral("removeAction"), argumentList);
    }

    inline QDBusPendingReply<bool> setMultipleActionsBehaviour(uint behaviour)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(behaviour);
        return asyncCallWithArgumentList(QStringLiteral("setMultipleActionsBehaviour"), argumentList);
    }

    inline QDBusPendingReply<bool> swapActions(qulonglong id1, qulonglong id2)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(id1) << QVariant::fromValue(id2);
        return asyncCallWithArgumentList(QStringLiteral("swapActions"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void actionAdded(qulonglong id);
    void actionEnabled(qulonglong id, bool enabled);
    void actionModified(qulonglong id);
    void actionRemoved(qulonglong id);
    void actionShortcutChanged(qulonglong id);
    void actionsSwapped(qulonglong id1, qulonglong id2);
    void clientActionSenderChanged(qulonglong id, const QString &sender);
    void multipleActionsBehaviourChanged(uint behaviour);
};

namespace org {
  namespace lxqt {
    namespace global_key_shortcuts {
      typedef ::OrgLxqtGlobal_key_shortcutsDaemonInterface daemon;
    }
  }
}
#endif
