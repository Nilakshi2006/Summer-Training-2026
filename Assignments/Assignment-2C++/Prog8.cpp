// C++ program to create a class for Employee to get and display following Employee information using constructor:
// Empcode,Emp name, Basicsalary
#include<iostream>
using namespace std;
class Employee{
public:
int empCode;
string empName;
int basicSalary;
Employee(int eCode,string eName,int bSalary){
empCode=eCode;
empName=eName;
basicSalary=bSalary;
}
void get(){
    // int eCode;
    // string eName;
    // int bSalary;
    cout<<"Enter the Employee Code: "<<endl;
    cin>>empCode;
    cout<<"Enter the Name: "<<endl;
      cin.ignore();
    getline(cin,empName);
    cout<<"Enter the basic salary: "<<endl;
    cin>>basicSalary;
}
void show(){
    //   int eCode;
    // string eName;
    // int bSalary;
    cout<<"Employee Details are given as: "<<endl;
    cout<<"Employee Code is: "<<empCode<<endl;
    cout<<"Name of Employee is: "<<empName<<endl;
    cout<<"Basic Salary of employee is: "<<basicSalary<<endl;
}
};
int main(){
    Employee e(0," ",0);
e.get();
e.show();
return 0;
}