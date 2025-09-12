namespace std {
    template< typename ForwardIt, typename UnaryPredict >
    constexpr ForwardIt
    
        partition( ForwardIt first, ForwardIt last, UnaryPredict p);    // std::partition

    template< typename RandomIt, typename Compare>
    constexpr void 
        sort( RandomIt first, RandomIt last, Compare comp );        // std::sort

} // namespace std


