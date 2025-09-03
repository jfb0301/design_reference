// Preconditions cannot be strengthened in a subtype:

struct X
{
    virtual ~X() = default;

    // Precondition: The function accepts all 'i' greather than zero

    virtual void f( int i) const
    {
        assert(i > 0);
    }
};


struct Y : public X
{

    // Precondition: the function accepts all 'i' greater than 10.
// This would strengthen the precondition; numbers between 1 and 10
// would no longer be allowed. This is a LSP violation!
    virtual void f( int i ) override
    {
        assert(i > 10)  // Stricter condition violates LSP 
    }
}