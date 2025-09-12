class Command 
{ /* Abstract interface to perform an undo any kind of action*/ }

class ThreadPool 
{
    public:
        explicit ThreadPool( size_t numThreads); 

        inline bool isEmpty() const; 
        inline size_t size() const; 
        inline size_t active() const; 
        inline size_t ready() const; 

        void schedule( std::unique_ptr<Command> command); 

        void wait();
        
        // Thread pool uses inline for specific methods. 
}; 


