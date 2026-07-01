//Parameterize constructer
#include<iostream>
using namespace std;
class data{
    private:
    int a;
    float b;
    public:
    data(int x,float y)   //giving parameters-passing values thorugh variable
    {
        
        a=x;
        b=y;
        cout<<"Constructer is called"<<endl;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int main(){
 data obj(2,3.5);  //passing arguments through value
obj.show();
    return 0;
}