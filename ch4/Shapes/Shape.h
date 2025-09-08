#pragma once

enum ShapeType
{
    circle,
    square 
};

class Shape
{
    protected:                                          
        explicit Shape( ShapeType type )        // Protected constructor
            : type_(type)
        {}

    public:
        virtual ~Shape() = default;     // Virtual destructor 

        ShapeType getType() const { return type_; }     // ShapeType : Initialized by the constructor

    private: 
        ShapeType type_;
}; 



