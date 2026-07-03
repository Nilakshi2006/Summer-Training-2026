//Polymorphism
//Same function and operator behave differently in differnt situations
//1.Compile time polymorphism
//Function overloading-Function having same name but different parameters
#include<iostream>
using namespace std;
class data{
public:
void area(int radius){
float pi=3.14;
cout<<"Area of Circle: "<<pi*radius*radius<<endl;
}
void area(float side){
    cout<<"Area of Square: "<<side*side<<endl;
}
void area(int length,int breadth){
    cout<<"Area of Rectangle: "<<length*breadth<<endl;
}
void show(int a){
cout<<"ASCII of variable: "<<a<<endl;
}
};
int main(){
    data a;
    a.area(10);
    a.area(3.6f);//by default compiler consider the decimal value as double so we use f here with decimal
    a.area(10,20); 
    a.show('A'); //if argument matches print otherwise convert in to int then matches with function
    return 0;
}