//  C++ program to create a class Employee that stores the employee ID, employee name, and basic salary. Calculate HRA (20%), DA (10%), and Gross Salary, and display all the details.
#include<iostream>
using namespace std;
class Employee{
    public:
    int ID;
    string name;
    int bSalary;
    float HRA,DA,gSalary;
    void calculate(){
     HRA = 0.20 * bSalary;
        DA = 0.10 * bSalary;
        gSalary = bSalary + HRA + DA;
}
    void show(){
        cout<<"Id of employee is: "<<ID<<endl;
            cout<<"Name of employee is: "<<name<<endl;
                cout<<"Basic Salary of employee is: "<<bSalary<<endl;
                cout<<"HRA of employee is: "<<HRA<<endl;
                 cout<<"DA of employee is: "<<DA<<endl;
                  cout<<"Gross Salary of employee is: "<<gSalary<<endl;

    }

};
int main(){
    Employee obj1;
    cout<<"Enter the Id of employee: "<<endl;
    cin>>obj1.ID;
    cout<<"Enter Name of employee: "<<endl;
    cin.ignore();
    getline(cin,obj1.name);
    cout<<"Enter the Basic Salary of employee: "<<endl;
    // cin.ignore();
  cin>>obj1.bSalary;

  obj1.calculate();

  cout<<"HRA of the employee is: "<<obj1.HRA<<endl;
  cout<<"DA of the employee is: "<<obj1.DA<<endl;
  cout<<"Gross Salary of the employee is: "<<obj1.gSalary<<endl;

obj1.show();
  
    return 0;
}