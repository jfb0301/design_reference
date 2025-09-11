#include "Calculator.h"
#include "Substract.h"
#include "Add.h"
#include <cstdlib.h>

int main()
{
    Calculator calculator{}; 

    auto op1 = std::make_unique<Add>(5); 
    auto op2 = std::make_unique<Add>(5); 
    auto op3 = std::make_unique<Substract>(4); 
    auto op4 = std::make_unique<Substract>(2);
    
    calculator.compute( std::move(op1) ); 
    calculator.compute( std::move(op2) ); 
    calculator.compute( std::move(op3) ); 
    calculator.compute( std::move(op4) ); 

    calculator.undoLast();

    int const res = calculator.result();

    // ...

    return EXIT_SUCCESS;
}