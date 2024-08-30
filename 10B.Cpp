#include <iostream>
class c_polygon {
public:
virtual float area() const {
return 0.0; // Base class provides a default implementation
}
};
class c_rectangle : public c_polygon {
private:
float length;
float width;
public:
c_rectangle(float l, float w) : length(l), width(w) {}
// Override the base class virtual function
float area() const override {
return length * width;
}
};
class c_triangle : public c_polygon {
private:
float base;
float height;
public:
c_triangle(float b, float h) : base(b), height(h) {}
// Override the base class virtual function
float area() const override {
return 0.5 * base * height;
}
};
int main() {
c_polygon* poly;
// Create a rectangle object
c_rectangle rectangle(5.0, 3.0);
poly = &rectangle;
std::cout << "Area of Rectangle: " << poly->area() << std::endl;
// Create a triangle object
c_triangle triangle(4.0, 6.0);
poly = &triangle;
std::cout << "Area of Triangle: " << poly->area() << std::endl;
return 0;
}
