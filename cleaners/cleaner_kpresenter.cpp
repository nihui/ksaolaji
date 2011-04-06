/*
 *  This file is part of KSaoLaJi, an advanced system cleaner for KDE
 *  Copyright (C) 2011 Ni Hui <shuizhuyuanluo@126.com>

 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License as
 *  published by the Free Software Foundation; either version 2 of
 *  the License or (at your option) version 3 or any later version
 *  accepted by the membership of KDE e.V. (or its successor approved
 *  by the membership of KDE e.V.), which shall act as a proxy
 *  defined in Section 14 of version 3 of the license.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "cleaner_kpresenter.h"

#include <KConfig>
#include <KConfigGroup>
#include <KDebug>
#include <KLocale>

CleanerKPresenter::CleanerKPresenter()
{
}

CleanerKPresenter::~CleanerKPresenter()
{
}

QString CleanerKPresenter::uniqueName()
{
    return QString( "kpresenter_recent_files_and_dirs" );
}

QString CleanerKPresenter::description()
{
    return i18n( "KPresenter recent files and directories" );
}

QString CleanerKPresenter::iconName()
{
    return QString( "kpresenter" );
}

bool CleanerKPresenter::youlaji()
{
    KConfig c( "kpresenterrc" , KConfig::NoGlobals );
    KConfigGroup group( &c, "RecentFiles" );
    KConfigGroup group2( &c, "Recent Dirs" );
    KConfigGroup fs( &c, "KFileDialog Settings" );
    return group.exists() || group2.exists() || ( fs.exists() && fs.hasKey( "Recent Files" ) );
}

bool CleanerKPresenter::saolaji()
{
    KConfig c( "kpresenterrc" , KConfig::NoGlobals );
    KConfigGroup group( &c, "RecentFiles" );
    group.deleteGroup();
    KConfigGroup group2( &c, "Recent Dirs" );
    group2.deleteGroup();
    KConfigGroup fs( &c, "KFileDialog Settings" );
    fs.deleteEntry( "Recent Files" );
    c.sync();
    return true;
}
