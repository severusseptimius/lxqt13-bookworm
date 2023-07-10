/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a applicationadaptor -c ApplicationAdaptor -i application.h -l PCManFM::Application /home/debian/Lxqt1.3/pcmanfm-qt/pcmanfm-qt-1.3.0/pcmanfm/org.pcmanfm.Application.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef APPLICATIONADAPTOR_H
#define APPLICATIONADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "application.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.pcmanfm.Application
 */
class ApplicationAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.pcmanfm.Application")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.pcmanfm.Application\">\n"
"    <method name=\"preferences\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"desktopPrefrences\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"desktopManager\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"launchFiles\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"as\"/>\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"quit\"/>\n"
"    <method name=\"setWallpaper\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"findFiles\">\n"
"      <arg direction=\"in\" type=\"as\"/>\n"
"    </method>\n"
"    <property access=\"read\" type=\"b\" name=\"desktopManagerEnabled\"/>\n"
"  </interface>\n"
        "")
public:
    ApplicationAdaptor(PCManFM::Application *parent);
    virtual ~ApplicationAdaptor();

    inline PCManFM::Application *parent() const
    { return static_cast<PCManFM::Application *>(QObject::parent()); }

public: // PROPERTIES
    Q_PROPERTY(bool desktopManagerEnabled READ desktopManagerEnabled)
    bool desktopManagerEnabled() const;

public Q_SLOTS: // METHODS
    void desktopManager(bool in0);
    void desktopPrefrences(const QString &in0);
    void findFiles(const QStringList &in0);
    void launchFiles(const QString &in0, const QStringList &in1, bool in2, bool in3);
    void preferences(const QString &in0);
    void quit();
    void setWallpaper(const QString &in0, const QString &in1);
Q_SIGNALS: // SIGNALS
};

#endif
