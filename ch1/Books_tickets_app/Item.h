#ifndef ITEM_H
#define ITEM_H
#include "Money.h"

// Item: Base class abstraction for anything that has price tag

class Item
{
    public:
        virtual ~Item() = default;
        virtual Money price() const = 0;
};


#endif
