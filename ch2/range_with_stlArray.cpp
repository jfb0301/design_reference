#include <cstdlib>
#include <iostream>
#include <ranges>

// Prefer using STL array or vector instead of C 

template<typename Range>
void traverseRange( Range const& range )
{
    for auto(pos=range.begin(); pos!=range.end(); ++pos) {
        // ... 
    }
}

// The traverseRange function doesn't work with built in  C array 

int main() 
{
    int array[6] = {4, 8, 15, 16, 23}; 

    traverseRange(array);

    return EXIT_SUCCESS;
}

// Better option: Build on the overload set of free begin and end functions

template<typename Range>
void traverseRange( Range const& range )
{
    using std::begin;
    using std::end;

    for auto(pos=begin(range); pos!=end(range); ++pos){
        /* .. */
    }
}

