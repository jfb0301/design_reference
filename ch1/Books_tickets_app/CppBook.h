#include "Money.h"
#include "Item.h"
#include <string>


class CppBook : public Item
{
    public:
        explicit CppBook(std::string title, std::string author, Money price) 
            : title_( std::move(title) )
            , author_( std::move(author) )
            , priceWithTax_( price * 1.15) // 15% tax rate
        {}
    
        std::string const& title() const {return title_;}
        std::string const& author() const {return author_;}

        Money price() const override { return priceWithTax_;}

    private:
        std::string title_;
        std::string author_;
        Money priceWithTax_;
};

/* Constructor of CppBook: Expects a title and author
    in the form of strings and price in the form of Money

*/