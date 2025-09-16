class shape
{
    public:
        virtual ~Shape() = default; 

        virtual void draw( /*Some arguments*/ ) const = 0;    
};

