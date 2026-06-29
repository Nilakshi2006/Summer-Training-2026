#include<iostream>
using namespace std;
int main(){
    string name;
    int rollno;
    float m1,m2,m3;

    cout<<"Enter Name: ";
    // cin>>name;
    getline(cin,name);     //getline is used so that coin dont get terminated by adding space in string

    cout<<"Enter Rollno: ";
    cin>>rollno;

    cout<<"Enter Marks of C: ";
    cin>>m1;

     cout<<"Enter Marks of C++: ";
    cin>>m2;

     cout<<"Enter Marks of Java: ";
    cin>>m3;

    cout<<"Student Detail:"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Rollno: "<<rollno<<endl;
    cout<<"Marks in C: "<<m1<<endl;
       cout<<"Marks in C++: "<<m2<<endl;
          cout<<"Marks in Java: "<<m3<<endl;
    return 0;
}