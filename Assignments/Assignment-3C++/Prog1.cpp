//C++ Program that defines a shape class with a constructor that gives value to width and height. Then define two sub-classes triangle and rectangle, that calculate the area of the shape. In the main, define two objects a triangle and a rectangle and then call the area () function.
#include<iostream>
using namespace std;
class Shape{
    public:
    int height,width;
Shape(){
   cout<<"Enter the height: "<<endl;
   cin>>height;
   cout<<"Enter the width: "<<endl;
   cin>>width;
}
};
class triangle:public Shape{
    public:
void area1(){

    cout<<"Area of Triangle is: "<<0.5*width*height<<endl;;
}
};
class rectangle:public Shape{
    public:
void area2(){
cout<<"Area of Rectangle is: "<<height*width<<endl;
}
};
int main(){
triangle t;
t.area1();
rectangle r;
r.area2();
    return 0;
}
