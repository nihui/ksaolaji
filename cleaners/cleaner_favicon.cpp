/*
 *  This file is part of KSaoLaJi, an advanced system cleaner for KDE
 *  Copyright (C) 2011 Ni Hui <shuizhuyuanluo@126.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "cleaner_favicon.h"

#include <KDebug>
#include <KLocale>
#include <KIO/DeleteJob>
#include <KIO/Job>
#include <KIO/NetAccess>
#include <KUrl>
#include <KStandardDirs>

#include <QDir>

CleanerFavicon::CleanerFavicon()
{
}

CleanerFavicon::~CleanerFavicon()
{
}

QString CleanerFavicon::uniqueName()
{
    return QString( "cached_site_favicons" );
}

QString CleanerFavicon::description()
{
    return i18n( "Cached site favicons" );
}

QString CleanerFavicon::iconName()
{
    return QString( "bookmarks" );
}

bool CleanerFavicon::youlaji()
{
    QDir cachedir( KStandardDirs::locateLocal( "cache", "favicons" ) );
    QStringList faviconfs = cachedir.entryList( QDir::Files | QDir::NoSymLinks | QDir::Writable );
    return !faviconfs.isEmpty();
}

bool CleanerFavicon::saolaji()
{
    KIO::Job* faviconjob = KIO::del( KStandardDirs::locateLocal( "cache", "favicons" ), KIO::HideProgressInfo );
    KIO::NetAccess::synchronousRun( faviconjob, 0 );
    return true;
}
