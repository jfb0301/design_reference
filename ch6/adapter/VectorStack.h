#include "stack.h"

template< typename T > 
class VectorStack : public Stack<T>
{
    public:
        T& top() override { return vec_.back(); }
        bool empty() const override { return vec_.empty(); }
        size_t size() const override { return vec_.size(); }
        void push( T const& value ) override { vec_.push_back( value ); }
        void pop() override { vec_.pop_back(); }
        
    private: 
        std::vector<T> vec_;
}; 

