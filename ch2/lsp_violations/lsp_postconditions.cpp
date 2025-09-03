/*
    Postconditions cannot be weakened in a subtype:
*/

struct X 
{
    virtual ~X() = default;

    virtual int f() const
    {
        int i;
        // ... 
        assert(i > 0);
        return i;
    }
};

struct Y : public X 
{
    int f(int i) const override 
    {
        int i;
        // ...
        return i; 
    }
}; 


