#include <Calculator.h>

void Calculator::compare( std::unique_ptr<CalculatorCommand> command)
{
    current = command->execute( current_ );
    stack._push( std::move(command) );
}

void Calculator::undoLast() 

{
    if ( stack_.empty() ) return; 

    auto command = std::move(stack.top());
    stack_.pop(); 

    current_ = command->undo(current_); 
}

int Calculator::result() const 
{
    return current_;
}

void Calculator::clear() 
{
    current_ = 0;
    CommandStack{}.swap( stack_ );
}

