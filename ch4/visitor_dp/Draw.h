// Draw() : Enables drawing shapes

#include "Visitor.h"

class Draw : public ShapeVisitor
{
    public:
        void visit( Circle const& c, /* ... */) const override; 
        void visit( Square const& c, /* ... */) const override; 
};

// This respect the OCP principle 