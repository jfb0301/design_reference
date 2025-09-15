#include <numeric>
#include <iosfwd>
#include <iterator>
#include <vector>

template< typename T>
class DynamicVector
{
    public:
        using value_type          = T; 
        using iterator            = typename std::vector<T>::iterator; 
        using const_iterator      = typename std::vector<T>::const_iterator; 

    // ... Constructors and special member functions 

    size_t size() const; 

    T&  operator[](size_t index); 
    T const&  operator[](size_t index) const;
    
    iterator begin(); 
    const_iterator begin() const; 
    iterator end(); 
    const_iterator end() const; 
    
    // Numeric functions 

    private:
        std::vector<T> values_; 
}; 

template< typename T >
std::ostream& operator<<( std::ostream& os, DynamicVector const<T>& vector )
{

    os << "(";
    for( auto const& element : vector ) {
        os << " " << element;
}
        os << " )";

    return os;
}

template< typename T >
auto l2norm( DynamicVector const<T>& vector )
{
        using std::begin, std::end;
        return std::sqrt( std::inner_product( begin(vector), end(vector)
                                            , begin(vector), T{} ) );

}