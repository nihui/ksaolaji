#ifndef CLEANER_KAFFEINE_H
#define CLEANER_KAFFEINE_H

#include "cleaner.h"

class CleanerKaffeine : public Cleaner
{
    Q_OBJECT
    public:
        explicit CleanerKaffeine( QObject* parent = 0 );
        virtual ~CleanerKaffeine();
        virtual QString description();
        virtual QString iconName();

        /** you mei you la ji ? */
        virtual bool youlaji();
        /** sao la ji */
        virtual bool saolaji();
};

#endif // CLEANER_KAFFEINE_H
