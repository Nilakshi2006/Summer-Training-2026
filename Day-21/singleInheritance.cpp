//Single Inheritance
//It has one base class and one derived class
#include<iostream>
using namespace std;
class Vehicle{
    public:
    string brand;
    int fuel;
};
class car:public Vehicle{
    public:
    int wheel;
void set(){
    brand="BMW";
    fuel=600;
    wheel=4;
}
void show(){
    cout<<"Car Details: "<<endl;
    cout<<"Brand Name: "<<brand<<endl;
  cout<<"Fuel Capacity: "<<fuel<<endl;
  cout<<"Number of wheels: "<<wheel<<endl;
}
};
int main(){
 car obj;  //child class object
 obj.set();
 obj.show();
return 0;

}