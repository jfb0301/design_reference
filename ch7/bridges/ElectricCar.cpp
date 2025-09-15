#include "ElectricCar.h"

ElectricCar::ElectricCar( /* Engine arguments */)
    : engine_{ std::make_unique<ElectricEngine>(/* Engine arguments */)}
    { }

