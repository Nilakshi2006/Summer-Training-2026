//Pure virtual function
//when virtual function has no defination such function is known as do nothing or pure virtual function
//class containg pure virtual function cannot be used to declare objects of its ow ,such classes are known as abstract base class
//main aim of base class is to provide trait to derived classes and to create bse pointer used for achieving run time polymorphismn 

#include<iostream>
using namespace std;
class number{
   protected:
    int x;
    public:
    void value(int num){
        x=num;
    }
    virtual void display()=0;    //pure virtual function
};
class decimal:public number{
public:
void display(){
    cout<<"Decimal Number: "<<x<<endl;
}
};
class octal :public number{
public:
void display(){
    cout<<"Octal Number: "<<x<<endl;
}
};
class hextype:public number{
    void display(){

        cout<<"Hexadecimal Number: "<<x<<endl;
    }
};
int main(){
    number*ptr; //pointer to base class
    octal o1;
    o1.value(100);
    ptr=&o1;
    ptr->display();
    hextype h1;
    h1.value(500);
    ptr=&h1;
    ptr->display();
    return 0;
}