// put member function outside of class but declaration of that member function should be in class
#include<iostream>
using namespace std;
class demo{
public:
void display();   //declaration of member function inside class
};
//putting member function outside of class
 //returntype classname :: functionName()
void demo :: display(){
     cout<<"Welcome to C++ programming";
}
int main(){
    //to access function
    demo obj;
    obj.display();
    return 0;
}