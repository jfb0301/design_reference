/*
    C++2 Concepts still express expected behavior. 
*/

template<typename InputIt, typename OutputIt>
constexpr OutputIt copy( InputIt first, InputIt last, OutputIt d_first)
{
    while (first != last) {
        *d_first++ = *first++; 
    }
    return d_first;
}

