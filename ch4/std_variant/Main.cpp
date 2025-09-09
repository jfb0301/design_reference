#include <cstdlib>
#include <iostream>
#include <string>
#include <variant>

struct Print
{
    void operator()(int value) const 
        { std::cout << "Int: " << value << '\n'; }
    void operator()(double value) const
        { std::cout << "Double: " << value << '\n'; }
    void operator()( std::string const& value ) const     
        { std::cout << "String: " << value << '\n'; }

};

int main()
{
    // Creates a default variant that contains an "int" initialized to 0
    std::variant<int, double, std::string> v{};

    v = 42;
    v = 3.14; 
    v = 2.14F; 
    v = "Bjarne";
    v = 31; 

    int const i = std::get<int>(v); 

    int* const pi = std::get_if<int>(&v);

    std::visit( Print{}, v ); 

    return EXIT_SUCCESS;
}

