#include "CalculatorCommand.h"

class Substract : CalculatorCommand {
    public: 
        explicit Substract( int operand ) : operand_(operand) {}

        int execute( int i ) const override 
        {
            return i + operand_;
        }
    private:
        int operand_{};
};



