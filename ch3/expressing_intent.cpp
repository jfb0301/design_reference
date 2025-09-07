template<class InputIt, class T, class BinayOperation >
constexpr T accumulate(InputIt first, InputIt last, T init, BinayOperation op); 


template< class InputIt, class T, class BinaryReductionStrategy >
constexpr T accumulate( InputIt first, InputIt last, T init, BinaryReductionStrategy op); 


// Command design pattern 

template< typename, class UnaryCommand >
constexpr UnaryCommand
    for_each( InputIt first, InputIt last, UnaryCommand f); 

    // std::for_each: allows you to apply any kind of unary operation to a range of elements. 

