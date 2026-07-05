// Create a class named Shape with a function that prints "This is a shape". Create another class named Polygon inheriting the Shape class with the same function that prints "Polygon is a shape". Create two other classes named Rectangle and Triangle having the same function which prints "Rectangle is a polygon" and "Triangle is a polygon" respectively. Again, make another class named Square having the same function which prints "Square is a rectangle". Now, try calling the function by the object of each of these classes.
#include <iostream>
using namespace std;

// Base class Shape
class Shape {
public:
    void print() {
        cout << "This is a shape" << endl;
    }
};

// Subclass Polygon
class Polygon : public Shape {
public:
    void print() {
        cout << "Polygon is a shape" << endl;
    }
};

// Subclass Rectangle
class Rectangle : public Polygon {
public:
    void print() {
        cout << "Rectangle is a polygon" << endl;
    }
};

// Subclass Triangle
class Triangle : public Polygon {
public:
    void print() {
        cout << "Triangle is a polygon" << endl;
    }
};

// Subclass Square
class Square : public Rectangle {
public:
    void print() {
        cout << "Square is a rectangle" << endl;
    }
};

int main() {
    Shape s;
    Polygon p;
    Rectangle r;
    Triangle t;
    Square sq;

    s.print();
    p.print();
    r.print();
    t.print();
    sq.print();

    return 0;
}