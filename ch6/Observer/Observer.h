// First alternative

class Observer
{
    public:
        virtual ~Observer() const = default; 

        virtual void update()(/* ... */) = 0;
};


// Second alternative 

class Observer
{
    public:
        virtual void update( Subject const& subject ) = 0;
};



// Third alternative 

class Observer
{
    public:
        virtual ~Observer() = default; 

        virtual void update(Subject const& subject
                            , /*Subject-specific type*/ property) = 0;   
}; 

