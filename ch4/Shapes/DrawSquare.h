#include "DrawSquare.h"  // Assuming you have this with void draw(const Square& s);
#include "Square.h"
#include <iostream>

void draw(const Square& s) {
    std::cout << "Drawing a square with side " << s.getSide() << std::endl;
    // Later: Add graphics
}