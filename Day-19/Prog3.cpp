//accessing the private member thoru public class

#include<iostream>
using namespace std;
class demo{
    private:
    void data(){
        int a=10,b=20;
        cout<<"a="<<a<<endl;
         cout<<"b="<<b<<endl;
    }
public:
void display(){
    data();
}  
};
int main(){
    //to access function
    demo obj;
    obj.display();
    return 0;
}

