#include "CalculatorStrategy.h"

class Calculator
{
    public:
        void set( std::unique_ptr<CalculatorStrategy> operation );
        void compute( int value ); 
        
        // ...

    private: 
        int current_{};
        std::unique<CalculatorStrategy> operation_; // Requires a default 
}; 