// C++ program to create a class Calculator that performs addition, subtraction, multiplication, and division of two numbers using separate member functions.
#include<iostream>
using namespace std;
class Calculator{
    private:
    int a,b;
   
    int sum,sub,mul,div;
    public:
    void get(){
cout<<"Enter two integers: "<<endl;
cin>>a>>b;
    }
    void sum1(){
  cout<<"Addition is: "<<(a+b)<<endl;
    }
    void sub1(){
        cout<<"Substraction is: "<<(a-b)<<endl;
    }
    void mul1(){
      cout<<"Multipliaction is: "<<(a*b)<<endl;
    }
    void div1(){
        if(b<0){

            cout<<"Divison is: "<<(a/b)<<endl;
        }else{
            cout<<"Divison not possible"<<endl;
        }
    }

};

int main(){
    Calculator obj1;
    obj1.get();
    obj1.sum1();
    obj1.sub1();
    obj1.mul1();
    obj1.div1();


    return 0;
}