#include "Point.h"
#include "Shape.h"

class Square : public Shape
{
    public:
        explicit Square( double side )
            : side_( side )
        {
            /*
                Checking whether a given side length is valid 
            */
        }

        double side() const { return side_; }
        Point center() const { return center_; }

        void draw() const override; 

    private:
        double side_;
        Point center_{}; 
};


