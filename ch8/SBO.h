#include <array>
#include <cstdlib>
#include <memory>

template< size_t Capacity = 32U, size_t Alignment = alignof(void*) >
class Shape
{
    public:
        // ... 
    private:
        // ... 

        Concept* pimpl()
        {
            return reinterpret_cast<Concept*>( buffer_.data() );
        }

        Concept const* pimpl() const
        {
            return reinterpret_cast<Concept const*>(buffer_.data() ); 
        }

        alignas(Alignment) std::array<std::byte, Capacity> buffer_; 
}; 
