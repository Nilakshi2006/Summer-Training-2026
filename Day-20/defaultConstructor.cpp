//Constructer
// Constructer is special member function of the class that is used to initialize the data members.
//Defualt Constructer
#include<iostream>
using namespace std;
class data{
    private:
    //declaration of data members
    int a;
    float b;
    public:
    data() //default constructer
    {
        //intialization of data members
        a=10;
        b=50.5;
        cout<<"Constructer is called"<<endl;
    }
    void show()//normal member function
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int main(){
    data obj;  //cosntrcuter called automaticaly
    obj.show();
    return 0;
}