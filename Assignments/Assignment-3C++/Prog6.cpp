// Write a program as per following details
// Create one base class PERSON with following data members Name, College name
// Create one sub class STUDENT derived from PERSON with following data members
// Student_id , Marks of five subject, percentage	Member function:	showResult( )-Calculate total,percentage and finding class(Dist,First,second,pass)
// Create one sub class EMPLOYEE derived from PERSON with following data members Emp_id, qualification , basic salary
// Member function to calculate Net salary and print Net salary DA=189% of Basic salary
// HRA=10% of Basic salary TA=500
// Income tax=5 % of basic salary, if basic salary >50000 Income tax=0, if Basic salary <=50000

// Netsalary=(basicsalary+da+hra+ta) - income tax
// Write appropriate setter function in each class and display detail of student and employee in main.

#include <iostream>
using namespace std;

// Base class PERSON
class Person {
protected:
    string name, collegeName;
public:
    void setPerson(string n, string c) {
        name = n;
        collegeName = c;
    }
    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "College Name: " << collegeName << endl;
    }
};

// Subclass STUDENT
class Student : public Person {
private:
    int student_id, marka, markb, markc, markd, marke;
    float percentage;
public:
    void setStudent(int id, int a, int b, int c, int d, int e) {
        student_id = id;
        marka = a; markb = b; markc = c; markd = d; marke = e;
    }
    void showResult() {
        int total = marka + markb + markc + markd + marke;
        percentage = (float)total / 5;
        showPerson();
        cout << "Student ID: " << student_id << endl;
        cout << "Marks: " << marka << ", " << markb << ", " << markc << ", " << markd << ", " << marke << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << endl;
        if (percentage >= 75) cout << "Class: Distinction" << endl;
        else if (percentage >= 60) cout << "Class: First" << endl;
        else if (percentage >= 50) cout << "Class: Second" << endl;
        else if (percentage >= 40) cout << "Class: Pass" << endl;
        else cout << "Class: Fail" << endl;
    }
};

// Subclass EMPLOYEE
class Employee : public Person {
private:
    int emp_id;
    string qualification;
    float basic_salary;
public:
    void setEmployee(int id, string q, float s) {
        emp_id = id;
        qualification = q;
        basic_salary = s;
    }
    void showEmployee() {
        float da = 1.89 * basic_salary;
        float hra = 0.1 * basic_salary;
        float ta = 500;
        float income_tax = (basic_salary > 50000) ? 0.05 * basic_salary : 0;
        float net_salary = basic_salary + da + hra + ta - income_tax;
        showPerson();
        cout << "Employee ID: " << emp_id << endl;
        cout << "Qualification: " << qualification << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "Net Salary: " << net_salary << endl;
    }
};

int main() {
    Student s;
    s.setPerson("John", "ABC College");
    s.setStudent(1, 90, 80, 70, 60, 50);
    s.showResult();

    Employee e;
    e.setPerson("Jane", "XYZ University");
    e.setEmployee(2, "MBA", 60000);
    e.showEmployee();

    return 0;
}