//c++ Program to calculate Volume of Cube using parameterized constructor.
#include<iostream>
using namespace std;
class Cube{
    public:
    int s;
    Cube(int side){
        s=side;
    }
    void volume(){
        cout<<"Volume of Cube is: "<<s*s*s<<endl;
    }
};
int main(){
int side;

cout<<"Enter the side of cube: ";
cin>>side;

Cube c(side);
c.volume();
    return 0;
}