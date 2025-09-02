template<typename InputIt, typename T>
constexpr InputIt find( InputIt first, InputIt last, T const& value);

template<typename InputIt, typename UnaryPredict>
constexpr InputIt find_if(InputIt first, InputIt last, UnaryPredict p)

/*
    find and find_if enables you to use your own iterator types 
    to perform a search 
*/