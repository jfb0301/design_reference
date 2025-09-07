namespace std {

    template<Class T ,
        , Class Allocator = std::allocator<T> >
class vector; 

template<Class key,
        , class compare = std::less<key> 
        , class Allocator = std::allocator<key> >
class set; 

} // namespace std 

