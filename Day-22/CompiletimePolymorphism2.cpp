//2.Operator Overloading
//Operator overloading is used to perform function on userdefined datatypes instead of pre defined
#include<iostream>
using namespace std;
class complex{
    private:
int real,imag;
public:
complex(int x,int y){
    real=x;
    imag=y;
}
complex operator + (complex obj)  //operator overloading  obj=c2
{
    //complex temp;  is wrong because compiler here first search for default constructor
    complex temp(0,0);  //either u can do temo(0,0) or make default constructor
    temp.real=real+obj.real;    //can be writeen as temp.real=this->real+obj.real
    temp.imag=imag+obj.imag;    //imag has c1 and obj.imag has c2 same for real part too
    return temp;
}
void display(){
    cout<<real<<" + "<<imag<<"i"<<endl;
}
};
int main(){
    complex c1(4,6);
    complex c2(2,3);
    cout<<"First Complex Number: "<<endl;
    c1.display();
    cout<<"Second Complex Number: "<<endl;
    c2.display();
  complex c3=c1+c2;   //can also be written as c1 operator+(c2)  
  cout<<"Addition is: "<<endl;
    c3.display();
    return 0;
}