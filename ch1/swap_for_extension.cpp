// Compile - time extensibility

// For value like types, consider providing a nonexcept swap function
// Use std::swap for your own type

namespace {
    custom

class CustomType{
        /* Implementation requires special form of swap*/
};

void swap( customType& a, customType& b) {
    /*  Special implementation for swapping two instances of type 'Custom type' */
}

}   // namespace custom


/*If swap is used correctly, the custom function perfrom a special kind of swap operation*/

template<typename T>
void some_function(T& value)
{
    T tmp(  /* ...*/);

    using std::swap;    // Enable compiler to consider std::swap for subsequent call

    swap(tmp, value);   // Swap two values; thanks to the unqualified call and thanks 
                        // to ADL this would call 'custom::swap()'
}


/*
    std::swap() is designed as a customization point, allowing you to plug 
    in new custom types and behaviors
*/



