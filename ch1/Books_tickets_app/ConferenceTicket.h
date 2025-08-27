#include "Money.h"
#include "Item.h"
#include <string>

class ConferenceTicket : public Item
{
    public:
        explicit ConferenceTicket(std::string name, Money price)
        : name_(std::move(name) )
        , priceWithTax_(price * 1.15) // Tax rate
        {}

        std::string const& name() const { return name_; }

        Money price() const override {return priceWithTax_; }

    private:
        std::string name_;
        Money priceWithTax_;
};
