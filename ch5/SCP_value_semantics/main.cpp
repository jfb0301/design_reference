#include "function.h"

int main()
{
    /*
        Create a default std::function instance 
        calling it results in a std::bad_function_call exception 
    */
    std::function<void(int)> f{}; 

    f = []( int i ) {                              // Assigning a callable to f
        std::cout << "Lambda: " << i << '\n'; 
    };

    f(1);                                    // Calling f to the integer '1' 

    auto g = f;                             // Copying f into g

    f = foo;                                // Assign a different callable to f

    f(2);                                // Calling f with the integer '2' 
    g(3);                                // Calling g with the integer '3' 

    return EXIT_SUCCESS;
}