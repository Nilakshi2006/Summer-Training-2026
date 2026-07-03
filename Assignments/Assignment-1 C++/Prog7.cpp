// C++ program to create a class Circle that accepts the radius of a circle and calculates its area and circumference using the value of π = 3.14159.
// Area = π × radius², Circumference = 2 × π × radius
#include<iostream>
using namespace std;
class Circle{
private:
int pi=3.14159,radius;
public:
void get(){
    cout<<"Enter the radius of circle: "<<endl;
    cin>>radius;
}
void area(){
    cout<<"Area of cicle is: "<<(pi*radius*radius)<<endl;
}
void circumference(){
    cout<<"Circumference of circle is: "<<(2*pi*radius)<<endl;
}
};

int main(){
    Circle obj1;
    obj1.get();
    obj1.area();
    obj1.circumference();
    return 0;
}