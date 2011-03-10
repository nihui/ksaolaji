#ifndef CLEANER_KRITA_H
#define CLEANER_KRITA_H

#include "cleaner.h"

class CleanerKrita : public KSaoLaJi::Cleaner
{
    public:
        explicit CleanerKrita();
        virtual ~CleanerKrita();
        virtual QString uniqueName();
        virtual QString description();
        virtual QString iconName();
        virtual bool youlaji();
        virtual bool saolaji();
};

#endif // CLEANER_KRITA_H