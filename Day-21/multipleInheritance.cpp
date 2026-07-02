//Multiple Inheritance
// A class can inherit properties and methods from more than one base class.
#include<iostream>
using namespace std;
class A{
    public:
    int x;
    void set1(int num1)
    {
        x=num1;
    }
};
class B{
    public:
    int y;
    void set2(int num2)
    {
        y=num2;
    }
};
class c: public A , public B{
    public:
    int sum;
    void addition()
    {
        sum =x+y;
        cout<<"addition of numbers:"<<sum<<endl;
    }
};
int main()
{
    c obj;
    obj.set1(50);
    obj.set2(100);
    obj.addition();
    return 0;
}