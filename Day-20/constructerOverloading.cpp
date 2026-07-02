//Constructor Overloading
// More than one Constructer having same name but diff parameters
#include<iostream>
using namespace std;

class Student {
public:
    // Constructor 1 (no args)
    Student() {
        cout << "Default constructor called\n";
    }
    // Constructor 2 (1 arg)
    Student(string name) {
        cout << "Name: " << name << endl;
    }
    // Constructor 3 (2 args)
    Student(string name, int rollno) {
        cout << "Name: " << name << ", Rollno: " << rollno << endl;
    }
    //constructor 4(3 args)
    Student(string name,int rollno, float cgpa){
cout << "Name: " << name << ", Rollno: " << rollno <<",CGPA: "<<cgpa<< endl;
    }
};

int main() {
    Student s1; // Default
    Student s2("Nilakshi"); // 1 arg
    Student s3("Nilakshi", 2305562); // 2 args
    Student s4("Nilakshi", 2305562,81.7); // 3 args
    return 0;
}