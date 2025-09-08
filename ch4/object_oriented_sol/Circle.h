#include "Point.h"
#include "Shape.h"

class Circle : public Shape 
{
    public:
        explicit Circle( double radius )
            : radius_( radius )
        {
            /*
                Checking whether given radius is valid 
            */
        }

        double radius() const { return radius_; }
        Point center() const { return center_; }

        void draw() const override; 

    private: 
        double radius_;
        Point center_{}; 
};

