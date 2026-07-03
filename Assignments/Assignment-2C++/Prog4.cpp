// C++ Program To calculate area of Box using parameterized Constructor.
#include<iostream>
using namespace std;
class Box{
    public:
    int l,b,h;
    Box(int length,int breadth, int height){
        l=length;
        b=breadth;
        h=height;
    }
    void show(){
        cout<<"Area of Box is: "<<2*(l+b+h)<<endl;
    }

};
int main(){
    int length,breadth,height;
    cout<<"Enter the Length: "<<endl;
    cin>>length;
    cout<<"Enter the Breadth: "<<endl;
    cin>>breadth;
    cout<<"Enter the Height: "<<endl;
    cin>>height;

    Box b(length,breadth,height);
    b.show();
return 0;

}