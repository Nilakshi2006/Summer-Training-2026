//Fuction overriding
//Function having same name and same parameters 
//inheritance mandatory
#include<iostream>
using namespace std;
class animal{
    public:
    void sound() ///same parameter
    {
        cout<<"hey...."<<endl;
    }
};
class dog:public animal{
    public:
    void sound()  //same parameter
    {
cout<<"Barks..."<<endl;
    }
};
int main(){
    dog d1;
    d1.sound();//child class
    animal a;
    a.sound();//parent class
    return 0;
}


