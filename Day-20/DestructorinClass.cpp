//Destructor
//It is used to free the memory spac occupied by the object.
#include<iostream>
using namespace std;
class data{
int *ptr=NULL;
public:
data(int x){
ptr=new int;
*ptr=x;
cout<<"Constructor called!";
}
void show(){
    cout<<"Value: "<<*ptr<<endl;
    delete ptr;
    ptr=NULL;
}
~data() //destructor
{
    delete ptr;
    *ptr=NULL;
    cout<<"Destrucotr called!"<<endl;
}
};
int main(){
    data obj(50);
    obj.show();
    return 0;
}