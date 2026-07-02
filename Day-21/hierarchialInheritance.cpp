//Hierarchical Inheritance
//one base class is inherited by multiple derived classes.
#include <iostream>
using namespace std;

class org
{
protected:
    string name, college;
    long long int contact;

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "College Name : " << college << endl;
        cout << "Contact Number : " << contact << endl;
    }
};

class faculty : public org
{
public:
    int salary, emp_id;

    void setdata1()
    {
        name = "abc";
        college = "RBPU";
        contact = 1234567890;
        emp_id = 2830;
        salary = 120000;
    }

    void show()
    {
        cout << "Faculty Details" << endl;
        cout << "Employee ID : " << emp_id << endl;
        display();
        cout << "Salary : " << salary << endl;
    }
};

class student : public org
{
public:
    int roll;
    float cgpa;

    void setdata2()
    {
        name = "Nilakshi";
        college = "RBPU";
        contact = 7717550186;
        roll = 562;
        cgpa = 8.1;
    }

    void show1()
    {
        cout << "\nStudent Details" << endl;
        cout << "Roll No. : " << roll << endl;
        display();
        cout << "CGPA : " << cgpa << endl;
    }
};

int main()
{
    faculty emp1;
    emp1.setdata1();
    emp1.show();

    student s1;
    s1.setdata2();
    s1.show1();

    return 0;
}