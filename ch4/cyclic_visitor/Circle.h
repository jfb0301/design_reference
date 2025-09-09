

class Circle : public Shape
{
    public:
        explicit Circle( double radius )
            : radius_(radius)
        {
            /*
                Checking that the given radius is valid. 
            */
        }

        void accept( AbstractVisitor const& v ) override {
            if ( auto const* cv = dynamic_cast<Visitor<Circle > const*>(&v) ) {
                cv->visit( *this ); 
            }
        }

        double radius() const { return radius_; }
        Point center() const { return center_; }

    private:
        double radius_;
        Point center_;
}