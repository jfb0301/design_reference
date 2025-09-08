class Shape
{
    public:
        Shape() = default; 

        virtual ~Shape() = default; 

        virtual void draw() const = 0; 
};

// Given this base class, derived classes now have to implement only draw function
