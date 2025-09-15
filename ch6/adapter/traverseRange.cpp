/*
    Two implementations of traverseRange 
*/

template< typename T >
void traverseRange( Range const& range)
{
    for( auto&& element : range) {
        // ....
    }
}


template<typename>
void traverseRange( Range const& range )
{
    {
        auto std::begin;
        auto std::end;

        auto first( begin(range) );
        auto last( end(range) );
        for( ; first != last; ++first) {
            auto&& element = *first 
        }
    }
 
}