#include <stdexcept>


/*
    Invariants of the super type must be preserved in a subtype: any
    expectation about the state of a super type must always be valid before
    and after all calls to any member function, including the member
    functions of the subtype:
*/

struct X 
{
    explicit X( int v = 1 )
    : value_(v)
    {
        if (v < 1 || v > 10) throw std::invalid_argument
    }

        virtual ~X() = default;

        int get() const { return value_; }

    protected:
        int value_;
}; 

struct Y : public X
{
    public:
        Y()
            : X()
        {
            value_  = 11;  // Broken invariant: After the constructor, 'value_'
                            // is out of expected range. One good reason to
                            // properly encapsulate invariants and to follow
                            // Core Guideline C.133: Avoid protected data.
        };
}