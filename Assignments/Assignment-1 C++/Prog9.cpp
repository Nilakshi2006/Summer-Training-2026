// C++ program to create a class Student and use an array of 5 objects to store student information. Display all student records and identify the student having the highest CGPA

// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     int ID;
// string name;
// int rollno;
// float cgpa;

// };
// int main(){
//    Student s[5];
//    int i;
//    for(i=0;i<5;i++){
//     cout<<"\nEnter Details of Student: "<<i+1<<endl;
//     cout<<"Enter ID: ";
//     cin>>s[i].ID;
//     cout<<"Enter Name: ";
//     cin>>s[i].name;
//     cout<<"Enter Rollno: ";
//     cin>>s[i].rollno;
//     cout<<"Enter CGPA: ";
//     cin>>s[i].cgpa;
//    }
//    for(i=0;i<5;i++){
// cout<<"\nStudents Details: "<<i+1<<endl;
// cout<<"Id is: "<<s[i].ID<<endl;
//        cout<<"Name is: "<<s[i].name<<endl;
//        cout<<"Rollno is: "<<s[i].rollno<<endl;
//        cout<<"CGPA is: "<<s[i].cgpa<<endl;
//    }
//    int max = 0;
//     for(i=1; i<5; i++){
//         if(s[i].cgpa > s[max].cgpa)
//             max = i;
//     }
//     cout<<"\nStudent with Highest CGPA:"<<endl;
//     cout<<"Id: "<<s[max].ID<<endl;
//     cout<<"Name: "<<s[max].name<<endl;
//     cout<<"Rollno: "<<s[max].rollno<<endl;
//     cout<<"CGPA: "<<s[max].cgpa<<endl;

//    return 0; 

// }




//Another way
#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rollno;
    float cgpa;
    void setdata(){
        cout<<"Enter Name: ";
        getline(cin,name);
        cout<<"Enter Roll Number: ";
        cin>>rollno;
        cout<<"Enter CGPA: ";
        cin>>cgpa;
        cin.ignore();
    }
    void getdata(){
        cout<<"\nStudent Details:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};

int main(){
    Student s[5];
    int i, index = -1;
    float max = s[0].cgpa;

    for(i=0; i<5; i++){
        cout<<"Enter Details of student "<<i+1<<":"<<endl;
        s[i].setdata();
    }

    for(i=0; i<5; i++){
        s[i].getdata();
        if(s[i].cgpa > max){
            max = s[i].cgpa;
            index = i;
        }
    }

    cout<<"\nStudent with Highest CGPA:"<<endl;
    cout<<"Name: "<<s[index].name<<endl;
    cout<<"Rollno: "<<s[index].rollno<<endl;
    cout<<"CGPA: "<<s[index].cgpa<<endl;

    return 0;
}