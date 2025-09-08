#include "DrawAllShapes.h"
#include "Circle.h"
#include "Square.h"


void DrawAllShapes( std::vector<std::unique_ptr<Shape>> const& shapes )
{
    for ( auto const& shape : shapes )
    {
        switch( shape->getType() )
        {
            case circle:
                draw( static_cast<Circle const&>( *shape ) ); 
                break; 
            case square:
                draw( static_cast<Square const&>( *shape ) ); 
                break; 
        }
    }
}

// DrawAllShapes() takes a vector of shapes in the form of std::unique_ptr<Shape>

