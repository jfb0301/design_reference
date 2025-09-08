class ShapeVisitor 
{
    public:
        virtual ~ShapeVisitor() = default; 

        virtual void visit( Circle const&, /* ... */) const = 0;
        virtual void visit( Square const&, /* ... */) const = 0;
        // Possibly more visit() functions for each new shape
}
