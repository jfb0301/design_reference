#include "DrawCircle.h"
#include "Circle.h"
#include <iostream>  // For std::cout

void draw(const Circle& c) {  // Fixed: No semicolon; body starts here
    /*
        Simple logic for drawing circle: Just print to console
    */
    std::cout << "Drawing a circle with radius " << c.getRadius() << std::endl;
    // Later: Add graphics like sf::CircleShape if you want
}