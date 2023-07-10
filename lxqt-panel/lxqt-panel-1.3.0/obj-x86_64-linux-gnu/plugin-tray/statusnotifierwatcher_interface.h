/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -p statusnotifierwatcher_interface /home/debian/Lxqt1.3/lxqt-panel/lxqt-panel-1.3.0/plugin-tray/org.kde.StatusNotifierWatcher.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef STATUSNOTIFIERWATCHER_INTERFACE_H
#define STATUSNOTIFIERWATCHER_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.kde.StatusNotifierWatcher
 */
class OrgKdeStatusNotifierWatcherInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.kde.StatusNotifierWatcher"; }

public:
    OrgKdeStatusNotifierWatcherInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgKdeStatusNotifierWatcherInterface();

    Q_PROPERTY(bool IsStatusNotifierHostRegistered READ isStatusNotifierHostRegistered)
    inline bool isStatusNotifierHostRegistered() const
    { return qvariant_cast< bool >(property("IsStatusNotifierHostRegistered")); }

    Q_PROPERTY(int ProtocolVersion READ protocolVersion)
    inline int protocolVersion() const
    { return qvariant_cast< int >(property("ProtocolVersion")); }

    Q_PROPERTY(QStringList RegisteredStatusNotifierItems READ registeredStatusNotifierItems)
    inline QStringList registeredStatusNotifierItems() const
    { return qvariant_cast< QStringList >(property("RegisteredStatusNotifierItems")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> RegisterStatusNotifierHost(const QString &service)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(service);
        return asyncCallWithArgumentList(QStringLiteral("RegisterStatusNotifierHost"), argumentList);
    }

    inline QDBusPendingReply<> RegisterStatusNotifierItem(const QString &service)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(service);
        return asyncCallWithArgumentList(QStringLiteral("RegisterStatusNotifierItem"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void StatusNotifierHostRegistered();
    void StatusNotifierHostUnregistered();
    void StatusNotifierItemRegistered(const QString &in0);
    void StatusNotifierItemUnregistered(const QString &in0);
};

namespace org {
  namespace kde {
    typedef ::OrgKdeStatusNotifierWatcherInterface StatusNotifierWatcher;
  }
}
#endif
