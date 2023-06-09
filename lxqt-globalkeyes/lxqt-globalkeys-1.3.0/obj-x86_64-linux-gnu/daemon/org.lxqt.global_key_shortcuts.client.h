/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -p org.lxqt.global_key_shortcuts.client /home/debian/Lxqt1.3/lxqt-globalkeyes/lxqt-globalkeys-1.3.0/obj-x86_64-linux-gnu/daemon/org.lxqt.global_key_shortcuts.client.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef ORG_LXQT_GLOBAL_KEY_SHORTCUTS_CLIENT_H
#define ORG_LXQT_GLOBAL_KEY_SHORTCUTS_CLIENT_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.lxqt.global_key_shortcuts.client
 */
class OrgLxqtGlobal_key_shortcutsClientInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.lxqt.global_key_shortcuts.client"; }

public:
    OrgLxqtGlobal_key_shortcutsClientInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgLxqtGlobal_key_shortcutsClientInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> activated()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("activated"), argumentList);
    }

    inline QDBusPendingReply<> shortcutChanged(const QString &oldShortcut, const QString &newShortcut)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(oldShortcut) << QVariant::fromValue(newShortcut);
        return asyncCallWithArgumentList(QStringLiteral("shortcutChanged"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace lxqt {
    namespace global_key_shortcuts {
      typedef ::OrgLxqtGlobal_key_shortcutsClientInterface client;
    }
  }
}
#endif
