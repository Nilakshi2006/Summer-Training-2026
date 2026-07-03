// C++ program to create a class Student that stores the student’s name, roll number, department, and CGPA. Accept the details from the user and display them using member functions.


// #include<iostream>
// using namespace std;
// class Student {
//     public:
//     string name;
//     int rollno;
//     string depar;
//     float cgpa;
//     void show(){
//         cout<<"Name is: "<<name<<endl;
//  cout<<"Rollno is: "<<rollno<<endl;
//   cout<<"Department is: "<<depar<<endl;
//    cout<<"CGPA is: "<<cgpa<<endl;
//     }
// };
// int main(){
//  Student obj1;
//  cout<<"Enter the name of student: " <<endl;
// cin>>obj1.name;

// cout<<"Enter the Roll Number of student: " <<endl;
// cin>>obj1.rollno;

// cout<<"Enter the Department of student: " <<endl;
// cin>>obj1.depar;

// cout<<"Enter the CGPA of student: " <<endl;
// cin>>obj1.cgpa;

// obj1.show();
//     return 0;
// }



//same ques using private access specifier
#include<iostream>
using namespace std;
class Student {
    private:
    string name;
    int rollno;
    string depar;
    float cgpa;
    public:
    void setData(){
        //function type no return type no argument
       cout<<"Enter the name of student: " <<endl;
getline(cin,name);

cout<<"Enter the Roll Number of student: " <<endl;
cin>>rollno;

cout<<"Enter the Department of student"<<endl;
cin.ignore();
//this is used when u click on enter button every time \n is stored in buffer and due to \n the getline gets terminated and dont accept value of department.so to ignore we made use of cin.ignore() function
getline(cin,depar);

cout<<"Enter the CGPA of student: " <<endl;
cin>>cgpa;
    }
    void getData(){
        cout<<"Student Details: "<<endl;
        cout<<"Name: "<<name<<endl;
               cout<<"Roll No.: "<<rollno<<endl;
                      cout<<"Department: "<<depar<<endl;
                             cout<<"CGPA "<<cgpa<<endl;
    }
};
int main(){
 Student obj1;
obj1.setData();
obj1.getData();
    return 0;
}