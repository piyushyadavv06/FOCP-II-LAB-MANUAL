// Create a class Shape with a function draw(). Derive two classes Circle and Rectangle,
// each having a function area(). Show how both derived classes use the base class
// function. (ShapeCircle , ShapeRectangle)

#include <iostream>
using namespace std;

class Shape {
public:
    void draw() {
        cout << "Drawing shape" << endl;
    }
};
class Circle : public Shape {
public:
    void area() {
        float r;
        cout << "Enter radius of circle: ";
        cin >> r;
        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};
class Rectangle : public Shape {
public:
    void area() {
        float l, b;
        cout << "Enter length and breadth of rectangle: ";
        cin >> l >> b;
        cout << "Area of Rectangle: " << l * b << endl;
    }
};
int main() {
    Circle c;
    Rectangle r;
    c.draw();   
    c.area();   

    r.draw();  
    r.area();  
    return 0;
}