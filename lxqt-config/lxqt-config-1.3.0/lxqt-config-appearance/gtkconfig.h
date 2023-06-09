/* BEGIN_COMMON_COPYRIGHT_HEADER
 * (c)LGPL2+
 *
 * LXQt - a lightweight, Qt based, desktop toolset
 * https://lxqt-project.org/
 *
 * Copyright: 2022 LXQt team
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

#ifndef GTKCONFIG_H
#define GTKCONFIG_H

#include <QWidget>
#include "ui_gtkconfig.h"
#include "configothertoolkits.h"

namespace Ui {
    class GTKConfig;
}

class GTKConfig : public QWidget
{
    Q_OBJECT

public:
    explicit GTKConfig(LXQt::Settings *configAppearanceSettings,
                       ConfigOtherToolKits *configOtherToolKits,
                       QWidget *parent = nullptr);
    ~GTKConfig();

    void applyGTKStyle();

public slots:
    void initControls();

signals:
    void settingsChanged();

private slots:
    void showAdvancedOptions(bool on);

private:
    Ui::GTKConfig *ui;
    LXQt::Settings *mConfigAppearanceSettings;
    ConfigOtherToolKits *mConfigOtherToolKits;
};

#endif // GTKCONFIG_H
