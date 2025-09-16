#include "Sheep.h"
#include <cstdlib>
#include <memory>

int main() 
{
    std::unique_ptr<Animal> const dolly = std::make_unique<Sheep>("Dolly"); 
    std::unique_ptr<Animal> dollyClone = dolly->clone(); 
    
    // Trigger dolly sound
    dolly->makeSound();
    dollyClone->makeSound(); 

    return EXIT_SUCCESS;
};