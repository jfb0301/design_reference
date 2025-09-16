#include "Animal.h"
#include <string>

class Sheep : public Animal 
{
    public:
        explicit Sheep( std::string name ) : name_{ std::move(name) } {}

        void makeSound() const override; 
        std::unique_ptr<Animal> clone() const override; // Prototype design pattern 
        // More animal specific functions 

    private: 
        std::string name_; 
}; 