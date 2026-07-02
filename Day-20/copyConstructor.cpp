//copy constructer is used to copy data from previous object into another
#include<iostream>
using namespace std;
class info{
    public:
    string name;
    int age;
    info(string name,int age)//parametrise constrcuter
    {
        this->name=name;
        this->age=age;
    }
    void show(){
        cout<<"Details: "<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
    }
    info(const info &obj)  //copy constructer obj stores addresss of typw info
    {
name=obj.name;
age=obj.age;
    }

};
int main(){
    info s1("Nilakshi",19);
s1.show();
// info s2=s1;
//or the above lien can be writeen as
info s2(s1);
cout<<"Value of second object- "<<endl;
s2.show();
    return 0;
}