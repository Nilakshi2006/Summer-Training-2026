// C++ program to create a class Student and use an array of 5 objects to store student information. Display all student records and identify the student having the highest CGPA

#include<iostream>
using namespace std;
class Student{
    public:
    int ID;
string name;
int rollno;
float cgpa;

};
int main(){
   Student s[5];
   int i;
   for(i=0;i<5;i++){
    cout<<"\nEnter Details of Student: "<<i+1<<endl;
    cout<<"Enter ID: ";
    cin>>s[i].ID;
    cout<<"Enter Name: ";
    cin>>s[i].name;
    cout<<"Enter Rollno: ";
    cin>>s[i].rollno;
    cout<<"Enter CGPA: ";
    cin>>s[i].cgpa;
   }
   for(i=0;i<5;i++){
cout<<"\nStudents Details: "<<i+1<<endl;
cout<<"Id is: "<<s[i].ID<<endl;
       cout<<"Name is: "<<s[i].name<<endl;
       cout<<"Rollno is: "<<s[i].rollno<<endl;
       cout<<"CGPA is: "<<s[i].cgpa<<endl;
   }
   int max = 0;
    for(i=1; i<5; i++){
        if(s[i].cgpa > s[max].cgpa)
            max = i;
    }
    cout<<"\nStudent with Highest CGPA:"<<endl;
    cout<<"Id: "<<s[max].ID<<endl;
    cout<<"Name: "<<s[max].name<<endl;
    cout<<"Rollno: "<<s[max].rollno<<endl;
    cout<<"CGPA: "<<s[max].cgpa<<endl;

   return 0; 

}