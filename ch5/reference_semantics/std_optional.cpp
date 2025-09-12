#include <charconv>
#include <cstdlib>
#include <optional>
#include <stream>
#include <string>
#include <string_view>

std::optional<int> to_int( std::string_view sv )
{
    std::optional<int> oi{}
    int i{}; 

    auto const result = std::from_chars( sv.data(), sv.data(), + sv.size(), i);
    if ( result.ec != std::errc::invalid_argument ) {
        oi = i;
    } 
    return oi; 
}

int main() 
{
    std::string value = "42"; 

    if ( auto optional_int = to_int( value ))
    {
        // Success : The returned std::optional contains an integer value
    }
    else 
    {
        
    }
}