// A class has an integer data member 'i' and a function named 'printNum' to print the value of 'i'. Its subclass also has an integer data member 'j' and a function named 'printNum' to print the value of 'j'. Make an object of the subclass and use it to assign a value to 'i' and to 'j'. Now call the function 'printNum' by this object.
#include<iostream>
using namespace std;
class Number1{
    public:
int i;
void printNum1(){
    cout<<"Enter the value of i: "<<endl;
    cin>>i;
}
};
class Number2 : public Number1{
public:
int j;
void printNum2(){
    cout<<"Enter the Value of j: "<<endl;
    cin>>j;
}
};
int main(){
    Number2 n;
n.printNum1();
n.printNum2();
cout<<"The value of i,j is: ";
cout<<n.i<<","<<n.j;
    return 0;
}