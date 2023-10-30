#include <iostream>

// Base class (parent class)
class Shape {
public:
    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

protected:
    int width;
    int height;
};

// Derived class (child class) that inherits from Shape
class Rectangle : public Shape {
public:
    int getArea() {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    rect.setWidth(5);
    rect.setHeight(3);

    std::cout << "Area of the rectangle: " << rect.getArea() << std::endl;

    return 0;
}
