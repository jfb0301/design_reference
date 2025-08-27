// Abstract Document class 

// Bad design: Too many dependencies

// Dependency 1: exportToJSON mandantes that all derived classes implement JSON export functionality
// Dependency 2: exportToJSON method's signature inadvertently expose implementation details of the JSON library
// Dependency 3: The serialize method, also a pure virtual function, requires derived classes to implement serialization to a ByteStream

// Document class is the 

class Document
{
    public:
        virtual ~Document() = default;

        virtual void exportToJSON(/* */) const = 0;
        virtual void serialize(ByteStream&, /* */) const = 0;
};


// Based on SRP, the class is refactored as:

class Document 
{
    public:
        virtual ~Document() = default;

        // No more ByteStream and JSON together
}



