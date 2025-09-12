#include "Shape.h"
#include <functional>
#include <utility> 

class Circle : public Shape
{
    public:
        using DrawStrategy = std::function<void(Circle &const, /* ... */ )>;

        explicit Circle(double radius, DrawStrategy drawer) 
            : radius_( radius )
            , drawer_( std::move(drawer) )
        {
            /*
                Checking that the radius is valid. 
            */
        }

        void draw( /* Some arguments */ ) const override 
        {
            drawer_( *this, /* Some arguments */ )
        }

        double radius() const { return radius_; }

    private: 
        double radius_; 
        DrawStrategy drawer_;
};

