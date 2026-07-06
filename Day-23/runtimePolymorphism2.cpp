//Virtual function
// It is used to achieve run time polymorphism
#include<iostream>
using namespace std;
class data{
    public:
int x;
virtual void num()  //virtual function
{
    x=100;
    cout<<"x="<<x<<endl;
}
};
class data1:public data{
    public:
    void num(){
        int y=200;
        cout<<"y="<<y<<endl;
    }
};
int main(){
    data*ptr;//pointer to base class
    //u can acess meber function of data member of base class using pointer
    data d1;  //object of base class
    ptr=&d1;
    ptr->num();

    // data*ptr;    //these four line of code will also return the num( )of base class due to compile time execution
    // data d2;
    // ptr=&d2;
    // ptr->num();

  
    data1 d2;
    ptr=&d2;
    ptr->num();
    //to achieve run time execution we made use of virtual function
    //the function call acc to object 
    return 0;
}