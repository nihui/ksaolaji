#ifndef CLEANER_KONQLOCBAR_H
#define CLEANER_KONQLOCBAR_H

#include "cleaner.h"

class CleanerKonqLocBar : public KSaoLaJi::Cleaner
{
    public:
        explicit CleanerKonqLocBar();
        virtual ~CleanerKonqLocBar();
        virtual QString uniqueName();
        virtual QString description();
        virtual QString iconName();
        virtual bool youlaji();
        virtual bool saolaji();
};

#endif // CLEANER_KONQLOCBAR_H