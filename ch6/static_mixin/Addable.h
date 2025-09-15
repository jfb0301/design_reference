template< typename Derived >
struct Addable              // CRTP Base class 
{
    friend Derived& operator+=( Derived& lhs, Derived const& rhs) {
        lhs.get() += rhs.get();
        return lhs; 
    }

    friend Derived operator+=( Derived& lhs, Derived const& rhs) {
        return Derived{ lhs.get() + rhs.get() }; 
    }
}; 

