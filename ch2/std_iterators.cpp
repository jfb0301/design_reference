/*
    Separate concerns when defining a concept
*/

template<typename I>
concept input_or_output_iterator = 
/* .. */;

template<typename I>
concept input_iterator = 
    std::input_or_output_iterator<I> &&

template<typename I>
concept forward_iterator = 
    std::input_iterator<I> && 
/* ... */; 

