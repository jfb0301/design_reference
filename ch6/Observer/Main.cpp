#include "AddressObserver.h"
#include "NameObserver.h"
#include "Person.h"
#include <cstdlib>

int main() 
{
    NameObserver nameObserver; 
    AddressObserver addressObserver; 

    person homer("Homer", "Simpson")
    person marge("Marge", "Simpson")
    person monty("Montgomery", "Burns")

    // Attaching observers 

    homer.attach( &nameObserver );
    marge.attach( &addressObserver );
    monty.attach( &addressObserver );

    // Updating information about Homer

    homer.forename("Homer Jay"); 

    // Updating information about marge

    marge.address("712 Red Bark Lane")

    // Updating information about monty

    monty.address("Nuclear power plant")

    // Detaching observers

    homer.detach( &nameObserver ); 

    return EXIT_SUCCESS;
}; 







