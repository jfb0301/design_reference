#include "Shape.h"
#include <functional>
#include <utility> 

class Square : public Shape
{
    public:
        using DrawStrategy = std::function<void(Square const&, /* ... */ )>;

        explicit Square( doble side, DrawStrategy drawer )
            : side_( side )
            , drawer_( std::move(drawer) )
        {
            /*
                Checking that the given side length is valid and that
                std::function instance is not empty
            */
        }

        void draw( /* Some arguments */ ) const override
        {
            drawer_( *this, /* Some arguments*/ )
        }

        double side() const { return side_; }

    private:
        double side_;
        DrawStrategy drawer_; 
}; 