#include "Engine.h"
#include <memory>
#include <utility>

class Car
{
    protected:
        explicit Car( std::unique_ptr<Engine> engine )
        : pimpl_( std::move(engine) ) 
        {}
    public:
        virtual ~Void() = default;
        virtual void drive() = 0;

        // More car specific functions 
    
    protected: 
        Engine*           getEngine()        { return pimpl_.get(); }
        Engine const*     getEngine()  const { return pimpl_.get(); }

    private:
        std::unique_ptr<Engine> pimpl_; // Pointer to implementation 

        // More car specific data members 
}