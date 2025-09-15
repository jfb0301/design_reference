#include "Observer.h"
#include <string>
#include <set>

class Person 
{
    public:
        enum StateChange
        {
            forenameChange,
            surnameChange, 
            addressChange
        };

        using PersonObserver = Observer<Person,StateChange>;

        explicit Person( std::string forename, std::string surname )
            : forename_{ std::move(forename) }
            , surname_{ std::move(surname) }
            {}

        bool attach( PersonObserver* observer );
        bool detach( PersonObserver* observer ); 
        
        void notify( StateChange property ); 

        void forename( std::string newForename ); 
        void surname( std::string newSurname ); 
        void address( std::string newAddress );

        std::string const& forename() const { return forename_; }
        std::string const& surname() const { return surname_; }
        std::string const& address() const { return address_; }

    private:
        std::string forename_;
        std::string surname_;
        std::string address_;

        std::set<PersonObserver*> observers_;
}; 


