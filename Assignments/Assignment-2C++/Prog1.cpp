// C++ Program to print the area of a rectangle by creating a class named 'Area' having one function. Length and breadth of the rectangle are entered through keyboard using Parameterized constructor.
#include<iostream>
using namespace std;
class Area{
    public:
    Area(int length,int breadth){
cout<<"Area of Rectangle: "<<length*breadth<<endl;
    }
};
int main(){
   int l,b;
cout<<"Enter the length: "<<endl;
cin>>l;
cout<<"Enter the breadth: "<<endl;
cin>>b;
Area a(l,b);
    return 0;
}