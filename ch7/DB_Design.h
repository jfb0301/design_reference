// Differences between Strategy and Bridge pattern 

class DatabaseEngine
{
    public:
        virtual ~DatabaseEngine() = default; 
            // Many more database-specific functions 
}; 

class Database 
{
    public:
        explicit Database( std::unique_ptr<DatabaseEngine> engine); 
            // Many more database-specific functions 

    private:
        std::unique_ptr<DatabaseEngine> engine_; 
}; 

// The database is unaware of any implementation details 

Database::Database( std::unique_ptr<DatabaseEngine> engine )
    : engine_{ std::move(engine) }
    {}


// Strategy design pattern: The actual type of DatabaseEngine 
// Is passed from the outside  


