//Friend Function
//It is used to access the private and protected member of class
#include<iostream>
using namespace std;
class student{
private:
int rollno;
public:
student(int x) //parametrize constructed
{
    rollno=x;
}
friend void display(student obj);//declaration of friend function
//u can also use any name instead of obj
};
void display(student obj)//friend function defined here
  //Normal function not member function so dont need obj to call in main
{
    cout<<"Roll Number: "<<obj.rollno<<endl;
}
int main(){
    student s1(562);
    display(s1);
    return 0;
}