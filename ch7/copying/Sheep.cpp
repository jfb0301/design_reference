#include "Sheep.h"
#include <iostream>

void Sheep::makeSound() const
{
    std::cout << "Baa\n";
};

std::unique_ptr<Animal> Sheep::clone() const
{
    return std::make_unique<Sheep>(*this);
}