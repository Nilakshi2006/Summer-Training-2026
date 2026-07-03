// C++ program to create a class Rectangle that accepts the length and breadth of a rectangle and calculates its area and perimeter using member functions.
#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length,breadth;
    int Area,Perimeter;
    void calculate(){
Area=length*breadth;
Perimeter=2*(length*breadth);
    }
    void show(){
        cout<<"Area of Recatngle is: "<<Area<<endl;
        cout<<"Perimeter os Rectangle is: "<<Perimeter<<endl;
    }
};
int main(){
Rectangle obj1;
cout<<"Enter the Length of Rectangle: "<<endl;
cin>>obj1.length;

cout<<"Enter the breadth of Rectangle: "<<endl;
cin>>obj1.breadth;

obj1.calculate();
obj1.show();
return 0;

}