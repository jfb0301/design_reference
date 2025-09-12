#include "Calculator.h"

void set( std::unique_ptr<CalculatorStrategy> operation )
{
    operation_ = std::move(operation); 
}

void Calculator::compute( int value )
{
    current_ = operation_.compute( value ); 
}

