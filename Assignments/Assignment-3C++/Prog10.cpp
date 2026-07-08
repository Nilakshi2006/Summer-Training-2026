// We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the average marks of the class. The number of students in the class are entered by the user. Create a class named Marks with data members for roll number, name and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used to define marks in individual subject of each student. Roll number of each student will be generated automatically.
#include <iostream>
#include <string>

using namespace std;

// Base class Marks
class Marks {
protected:
    int rollNumber;
    string name;

public:
    static int rollCounter;

    Marks(string name) {
        this->name = name;
        rollNumber = ++rollCounter;
    }

    virtual void displayDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

int Marks::rollCounter = 0;

// Derived classes for individual subjects
class Physics : public Marks {
private:
    double marks;

public:
    Physics(string name, double marks) : Marks(name) {
        this->marks = marks;
    }

    void displayDetails() override {
        Marks::displayDetails();
        cout << "Physics Marks: " << marks << endl;
    }

    double getMarks() {
        return marks;
    }
};

class Chemistry : public Marks {
private:
    double marks;

public:
    Chemistry(string name, double marks) : Marks(name) {
        this->marks = marks;
    }

    void displayDetails() override {
        Marks::displayDetails();
        cout << "Chemistry Marks: " << marks << endl;
    }

    double getMarks() {
        return marks;
    }
};

class Mathematics : public Marks {
private:
    double marks;

public:
    Mathematics(string name, double marks) : Marks(name) {
        this->marks = marks;
    }

    void displayDetails() override {
        Marks::displayDetails();
        cout << "Mathematics Marks: " << marks << endl;
    }

    double getMarks() {
        return marks;
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Physics* physics[numStudents];
    Chemistry* chemistry[numStudents];
    Mathematics* mathematics[numStudents];

    for (int i = 0; i < numStudents; i++) {
        string name;
        double physicsMarks, chemistryMarks, mathematicsMarks;

        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter physics marks: ";
        cin >> physicsMarks;
        cout << "Enter chemistry marks: ";
        cin >> chemistryMarks;
        cout << "Enter mathematics marks: ";
        cin >> mathematicsMarks;

        physics[i] = new Physics(name, physicsMarks);
        chemistry[i] = new Chemistry(name, chemistryMarks);
        mathematics[i] = new Mathematics(name, mathematicsMarks);
    }

    double totalPhysics = 0, totalChemistry = 0, totalMathematics = 0;

    for (int i = 0; i < numStudents; i++) {
        cout << "\nStudent " << i + 1 << " Details:" << endl;
        physics[i]->displayDetails();
        chemistry[i]->displayDetails();
        mathematics[i]->displayDetails();

        totalPhysics += physics[i]->getMarks();
        totalChemistry += chemistry[i]->getMarks();
        totalMathematics += mathematics[i]->getMarks();
    }

    double averagePhysics = totalPhysics / numStudents;
    double averageChemistry = totalChemistry / numStudents;
    double averageMathematics = totalMathematics / numStudents;

    cout << "\nAverage Physics Marks: " << averagePhysics << endl;
    cout << "Average Chemistry Marks: " << averageChemistry << endl;
    cout << "Average Mathematics Marks: " << averageMathematics << endl;

    for (int i = 0; i < numStudents; i++) {
        delete physics[i];
        delete chemistry[i];
        delete mathematics[i];
    }

    return 0;
}