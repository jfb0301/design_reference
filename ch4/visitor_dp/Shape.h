class Shape
{
    public:
        virtual ~Shape() = default;
        virtual void accept( ShapeVisitor const& v) = 0;

        // ... 
};

