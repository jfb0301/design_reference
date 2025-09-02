#include <cassert>
#include <cstdlib>

class Rectangle 
{
public:
    virtual ~Rectangle() = default;   // 1: Virtual destructor provided

    int getWidth() const { return width; }   // 3: Return width
    int getHeight() const { return height; } // 3: Return height

    virtual void setWidth(int w) { width = w; }  // 4: Set width
    virtual void setHeight(int h) { height = h; } // 4: Set height

    virtual int getArea() const { return width * height; } // 5: Compute area

private:
    int width = 0;   // 2: Initialize width
    int height = 0;  // 2: Initialize height
};   

class Square : public Rectangle     // 6: Square inherits from Rectangle
{
public:
    void setWidth(int size) override {  // 7: Override to set both dimensions
        Rectangle::setWidth(size);
        Rectangle::setHeight(size);
    }

    void setHeight(int size) override { // 8: Override to set both dimensions
        Rectangle::setWidth(size);
        Rectangle::setHeight(size);
    }

    int getArea() const override {     // 9: Compute area (width * height)
        return Rectangle::getArea();
    }
};

void transform(Rectangle& rectangle)   // 10: Takes any Rectangle (or derived)
{
    rectangle.setWidth(7);    // 11: Set width to 7
    rectangle.setHeight(4);   // 12: Set height to 4

    assert(rectangle.getArea() == 28); // assert() crash with SIGKILL signal. 
}

int main() {
    Square s{}; 
    s.setWidth(6); // Sets both width and height to 6

    transform(s);  // Sets both width and height to 4 (due to Square's overrides)

    return EXIT_SUCCESS;
}