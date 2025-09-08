#include "Point.h"
#include "Shape.h"

class Square : public Shape
{
    public:
        explicit Square( double side )
        : Shape( square )
        , side_(side)
        {
            /*
                Checking that the given side is valid
            */
        }

        double side() const { return side_; }
        Point center() const { return center_; }

    private: 
        double side_;
        Point center_{}; 
}; 

