#include "widget.h"
#include <iostream>
#include <cstdlib>

int main() {
    Widget w1{1, 12};
    Widget w2{2, 22};
    
    swap(w1, w2); 

    std::cout << "Value of w1: " << w1 << std::endl;
    std::cout << "Value of w2: " << w2 << std::endl;
    

    return EXIT_SUCCESS;
}

