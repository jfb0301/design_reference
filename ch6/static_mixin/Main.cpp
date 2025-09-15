#include "Distances.h"
#include "Addable.h"
#include <cstdlib>

int main() 
{
    auto const m1 = Meter<long>{ 100 }; 
    auto const m2 = Meter<long>{ 50 };
    
    auto const m3 = m1 + m2; 
    
    return EXIT_SUCCESS;
}