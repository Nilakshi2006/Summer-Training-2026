// C+++ program as per following details Create one base class Teacher
// Data members Name, Department, College name, Email id.
// Create sub classes for Math Teacher, English Teacher, and Science Teacher, Data member Qualification, Expertise and salary.
// Display following details for each teacher
// Name:
// Department:
// College name:
// Email id:
// Qualification:
// Expertise:
// Salary:


#include<iostream>
using namespace std;

class Teacher {
protected:
    string name, department, collegeName, emailId;
public:
    void setBase() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Department: ";
        getline(cin, department);
        cout << "Enter College Name: ";
        getline(cin, collegeName);
        cout << "Enter Email ID: ";
        getline(cin, emailId);
    }
    void showBase() {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "College Name: " << collegeName << endl;
        cout << "Email Id: " << emailId << endl;
    }
};

class MathTeacher : public Teacher {
private:
    string qualification;
    int expertise, salary;
public:
    void set() {
        setBase();
        cout << "Enter highest Qualification: ";
        getline(cin, qualification);
        cout << "Enter expertise (years): ";
        cin >> expertise; cin.ignore();
        cout << "Enter Salary: ";
        cin >> salary; cin.ignore();
    }
    void show() {
        showBase();
        cout << "Qualification: " << qualification << endl;
        cout << "Expertise: " << expertise << " years" << endl;
        cout << "Salary: " << salary << endl;
    }
};

class EnglishTeacher : public Teacher {
private:
    string qualification;
    int expertise, salary;
public:
    void set() {
        setBase();
        cout << "Enter highest Qualification: ";
        getline(cin, qualification);
        cout << "Enter expertise (years): ";
        cin >> expertise; cin.ignore();
        cout << "Enter Salary: ";
        cin >> salary; cin.ignore();
    }
    void show() {
        showBase();
        cout << "Qualification: " << qualification << endl;
        cout << "Expertise: " << expertise << " years" << endl;
        cout << "Salary: " << salary << endl;
    }
};

class ScienceTeacher : public Teacher {
private:
    string qualification;
    int expertise, salary;
public:
    void set() {
        setBase();
        cout << "Enter highest Qualification: ";
        getline(cin, qualification);
        cout << "Enter expertise (years): ";
        cin >> expertise; cin.ignore();
        cout << "Enter Salary: ";
        cin >> salary; cin.ignore();
    }
    void show() {
        showBase();
        cout << "Qualification: " << qualification << endl;
        cout << "Expertise: " << expertise << " years" << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    MathTeacher m; m.set(); m.show();
    EnglishTeacher e; e.set(); e.show();
    ScienceTeacher s; s.set(); s.show();
    return 0;
}