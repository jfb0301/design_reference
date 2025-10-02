// StrongType class template: Represents a wrapper around any other type to create a unique named type
// It can be used to define Meters, kilometers, surnames 

#include <utility>

template< typename T, typename Tag >
struct StrongType
{
    public:
        using value_type = T; 

        explicit StrongType( T const& value ) : value_(value) {}

        T&  get()               { return value_; }
        T const&  get() const  { return value_; }

    private:
        T value_; 
};

// Extending StrongType with an addition operator 


template< typename T, typename Tag >
StrongType<T, Tag>
    operator+( StrongType<T,Tag> const& a, StrongType<T,Tag> const& b) 
{
    return StrongType<T,Tag>( a.get() + b.get() ); 
}


// To avoid inherit the addition operator
// Provide mixins in the form of optional template arguments  

template< typename T, typename Tag, template<typename>, class... Skills >
struct StrongType
    : private : Skills< StrongType<T, Tag, Skills...> >...
    {   /* ... */   }; 

