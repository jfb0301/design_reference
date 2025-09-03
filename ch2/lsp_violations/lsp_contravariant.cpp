/*
Function return types in a subtype must be covariant: member
functions of the subtype can return a type that is itself a subtype of the
return type of the corresponding member function in the super type.
*/

struct Base{ /* ...Some virtual functions, including destructor... */}
struct Derived : public Base{ /* ... */}


struct X 
{
    virtual ~X() = default;
    virtual void* f( Derived* ); 
}; 

struct Y : public X 
{
    void* f( Base* ) override;
};

