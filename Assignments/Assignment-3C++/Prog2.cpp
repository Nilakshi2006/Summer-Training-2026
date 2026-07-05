// C++ program with a mother class animal. Inside it define a name and an age variables, and set_value () function. Then create two sub class Zebra and Dolphin which write a message telling the age and name of animal, also giving some extra information for both sub class (e.g. place of origin).place of origin of zebra is Earth and place of origin of dolphin is water.
#include<iostream>
using namespace std;
class animal{
 protected:
    string name;
    int age;
    public:
void set_value(){
    cout<<"Enter the name of animal: "<<endl;
    cin>>name;
    cout<<"Enter the age of animal: "<<endl;
    cin>>age;
}
};
class Zebra :public animal{
private:
string origin="earth";
public:
void info1(){
    cout<<"Detail of Zebra: "<<endl;
    cout<<"Name of animal is: "<<name<<endl;
    cout<<"Age of animal is: "<<age<<endl;
    cout<<"Origin of animal is: "<<origin<<endl;
}
};
class dolphin : public animal{
private:
string origin="water";
public:
void info2(){
    cout<<"Detail of Dolphin: "<<endl;
     cout<<"Name of animal is: "<<name<<endl;
    cout<<"Age of animal is: "<<age<<endl;
    cout<<"Origin of animal is: "<<origin<<endl;
}
};
int main(){
    Zebra z;
    z.set_value();
    z.info1();
    dolphin d;
    d.set_value();
    d.info2();
    return 0;
}