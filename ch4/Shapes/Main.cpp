#include "Circle.h"
#include "Square.h"
#include "DrawAllShapes.h"
#include <memory>
#include <vector>
#include <cstdlib>

int main() 
{
    using Shapes = std::vector<std::unique_ptr<Shape>>; 

    // Creating some shapes

    Shapes shapes; 
    shapes.emplace_back( std::make_unique<Circle>(2.3) ); 
    shapes.emplace_back( std::make_unique<Square>(1.2) ); 
    shapes.emplace_back( std::make_unique<Circle>(4.3) );
    
    // Drawing all shapes
    DrawAllShapes( shapes ); 

    return EXIT_SUCCESS; 
}
