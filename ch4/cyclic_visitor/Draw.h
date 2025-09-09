class Draw : public AbstractVisitor 
           , public Visitor<Circle>
           , public Visitor<Square>
           
{
    public:
        void visit( Circle const& c ) const override
            { /* ... Implementing the logic for drawing circle  */}
        void visit( Square const& s ) const override
            { /* ... Impleting  the logic for drawing square */ } 
}


