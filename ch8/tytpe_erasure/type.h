#include <any>
#include <cstdlib>
#include <string>
using namespace std::string_literals; 

int main() 
{
    {
        // Creating a std::shared_ptr with a custom deleter 
        std::shared_ptr<int> s{ new int{42}, [](int* ptr) { delete ptr; } }; 
    }

    // The std::shared_ptr is destroyed 

    return EXIT_SUCCESS;
}