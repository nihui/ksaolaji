#ifndef CLEANER_KLIPPER_H
#define CLEANER_KLIPPER_H

#include "cleaner.h"

class CleanerKlipper : public Cleaner
{
    Q_OBJECT
    public:
        explicit CleanerKlipper( QObject* parent = 0 );
        virtual ~CleanerKlipper();
        virtual QString description();
        virtual QString iconName();

        /** you mei you la ji ? */
        virtual bool youlaji();
        /** sao la ji */
        virtual bool saolaji();
};

#endif // CLEANER_KLIPPER_H
