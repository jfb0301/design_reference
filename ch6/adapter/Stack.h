template< typename T >
class 
{
    public:
        virtual ~Stack() = default; 

        virtual &T top() = 0; 
        virtual bool empty() const = 0; 
        virtual size_t size() const = 0;
        virtual void push(T const& value) = 0; 
        virtual void pop() =0; 
}; 