template<typename T>
class Visitor
{
    protected:
        ~Visitor() = default; 

    public:
        virtual void visit( T const& ) const = 0; 
}; 

