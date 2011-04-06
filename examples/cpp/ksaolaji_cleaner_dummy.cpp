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

#include "ksaolaji_cleaner_dummy.h"

#include <KDebug>
#include <KLocale>

KSAOLAJI_EXPORT_PLUGIN( CleanerDummy )

CleanerDummy::CleanerDummy( QObject* parent, const QVariantList& args )
: KSaoLaJi::CleanerPlugin(parent, args)
{
}

CleanerDummy::~CleanerDummy()
{
}

bool CleanerDummy::isThreadSafe() const
{
    return true;
}

QString CleanerDummy::uniqueName()
{
    return QString( "dummy_plugin" );
}

QString CleanerDummy::description()
{
    return i18n( "Dummy = =!!!" );
}

QString CleanerDummy::iconName()
{
    return QString( "konqueror" );
}

bool CleanerDummy::youlaji()
{
    kWarning() << "CleanerDummy::youlaji";
    return true;
}

bool CleanerDummy::saolaji()
{
    kWarning() << "CleanerDummy::saolaji";
    return true;
}
