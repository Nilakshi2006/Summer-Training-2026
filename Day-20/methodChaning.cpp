//Method chaning is used when to call multiple function in a single line
#include<iostream>
using namespace std;
class calculator{
    int value;
    public:
    calculator()//constructer 
    {
        value=0;
    }
    calculator & add(int x) //making of function for method chaning
    {
        value=value+x;
        cout<<"Value after addition: "<<value<<endl;
        return*this;  //imp to add if using method chaning
    }
    calculator & sub(int y){
        value=value-y;
        cout<<"Value after Substraction: "<<value<<endl;
         return*this;
    }
    calculator & mul(int z){
value=value*z;
cout<<"Value after Multiplication: "<<value<<endl;
 return*this;
    }
    void show(){
        cout<<"After all calculation value: "<<value<<endl;
        cout<<"Method Chaining";
    }
};
int main(){
    calculator c1;
    c1.add(50).sub(30).mul(10).show();  //calling of multiple functions in one go
    return 0;
}