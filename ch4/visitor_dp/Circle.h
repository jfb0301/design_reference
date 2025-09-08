#include "Shape.h"

class Circle : public Shape
{
    public:
        explicit Circle( double radius )
        : radius_( radius )
        {
            /*
                Checking that the given radius is valid 
            */
        }
        
        void accept( ShapeVisitor const& v) override { v.visit(*this ); }

        double radius() const { return radius_; }

    private:
    double radius_;
}; 

