//Hybrid Inheritance
//Hybrid inheritance combines multiple inheritance types (e.g., multiple, multilevel, hierarchical).
#include<iostream>
using namespace std;
class org{
    public:
    string name,college;
    long long int contact;
    void display(){
        cout << "Name : " << name << endl;
        cout << "College Name : " << college << endl;
        cout << "Contact Number : " << contact << endl;
    }
};
//Virtual keyword is used when than one class inherits the same properties
class faculty:virtual public org{

};
class student:virtual public org{

};
// The "diamond problem" occurs when a class inherits from two classes that share a common base class, creating ambiguity.
class account:public faculty,public student{
    public:
    void getdata(){
        name="Nilakshi";
        college="RBPU";
        contact=7717550186;
    }
    void show(){
        cout<<"Details: "<<endl;
        display();
    }
};
int main(){
account s1;
s1.getdata();
s1.show();
return 0;
}