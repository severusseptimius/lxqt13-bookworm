/* BEGIN_COMMON_COPYRIGHT_HEADER
 * (c)LGPL2+
 *
 * LXQt - a lightweight, Qt based, desktop toolset
 * https://lxqt.org
 *
 * Copyright: 2011 Razor team
 * Authors:
 *   Christian Surlykke <christian@surlykke.dk>
 *
 * This program or library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 *
 * END_COMMON_COPYRIGHT_HEADER */
#ifndef BATTERYHELPER_H
#define BATTERYHELPER_H

#include <QVariantMap>
#include <QDateTime>
#include <Solid/Battery>
#include <Solid/Device>

class BatteryHelper : public QObject
{
    Q_OBJECT

private:
    static QString formatTime(qlonglong sec);
public:
    static QString stateToString(Solid::Battery::ChargeState state);
    static QString technologyToString(Solid::Battery::Technology tech);
    static QString typeToString(Solid::Battery::BatteryType type);
    static QString timeToEmptyString(qlonglong remaingSec);
    static QString timeToFullString(qlonglong fullSec);
};
#endif
