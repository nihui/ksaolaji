#include "cleaner_nepomukcache.h"

#include <KDebug>
#include <KLocale>
#include <Nepomuk/ResourceManager>

CleanerNepomukCache::CleanerNepomukCache()
{
}

CleanerNepomukCache::~CleanerNepomukCache()
{
}

QString CleanerNepomukCache::uniqueName()
{
    return QString( "nepomuk_resource_local_cache" );
}

QString CleanerNepomukCache::description()
{
    return i18n( "Nepomuk resource local cache" );
}

QString CleanerNepomukCache::iconName()
{
    return QString( "nepomuk" );
}

bool CleanerNepomukCache::youlaji()
{
    return Nepomuk::ResourceManager::instance()->initialized();
}

bool CleanerNepomukCache::saolaji()
{
    if ( Nepomuk::ResourceManager::instance()->initialized() )
        Nepomuk::ResourceManager::instance()->clearCache();
    return true;
}