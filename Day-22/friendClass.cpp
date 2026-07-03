//Frined class
//Class that can access the private and protected member of another class
#include<iostream>
using namespace std;
class data{
    private:
    int a,b;
    public:
    data(int x,int y)//parameterize constructor
    {
     a=x;
     b=y;
    }
    friend class add;    //friend class declared
    friend class sub;    //another friend class declared
};
class add{
    public:
void display(data obj)     //friend defined
{
    int sum=0;
sum=obj.a+obj.b;      //data member of class can be accessed by a object
cout<<"Addition of two number is: "<<sum<<endl;
}
};
class sub{
    public:
    void show(data obj)    //friend defined
     {
       int sub=0;
sub=obj.a-obj.b;
cout<<"Substraction of two Number is: "<<sub<<endl;
    }
};
int main(){
    data obj(50,40);
    add a1;
    a1.display(obj);
    sub s1;
    s1.show(obj);
    return 0;
}