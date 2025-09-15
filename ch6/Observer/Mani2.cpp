// ALTERNATIVE IMPLEMENTATION USING STD::FUNCTION 

#include "Observer.h"
#include "Person.h"
#include <cstdlib>

void PropertyChange( Person const& person, Person::StateChange property)
{
    if( property == Person::forenameChanged ||
        property == Person::surnameChanged)
        {
            // ... Respond to changed name 
        }
}

int main()
{
    using PersonObserver = Observer<Person, Person::StateChange>;

    PersonObserver nameObserver( PropertyChanged ); 
    PersonObserver addressObserver([ /*Captured state*/]( Person const& person, Person::StateChange property
    ){
        if(property == Person::addressChanged)
        {
            // Respond to changed address
        }
    } );

    Person homer("homer", "Simpson"); 
    Person marge("marge", "Simpson");
    
    // Attaching observers 

    homer.attach( &nameObserver );
    merge.attach( &addressObserver );

    // ... 

    return EXIT_SUCCESS; 
}