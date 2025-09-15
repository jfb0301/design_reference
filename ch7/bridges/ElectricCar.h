#include "ElectricEngine.h"
#include <memory>

class ElectricCar : public Car  // Now inherits from Car Base class
{
    public:
        ElectricCar( /* Engine arguments */); 

        void drive(); 

    private:
        Engine engine_; 

        // More car specific data members
        // A better alternative is to store a pointer to ElectricEngine
        
        // std::unique_ptr<Engine> engine;  
}; 

