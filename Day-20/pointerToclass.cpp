//Pointer to Class
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;

    void setdata(){
        cout<<"Enter the Name: ";
        getline(cin,name);
        cout<<"Enter the Roll number: ";
        cin>>roll;
    }
    void getdata(){
        cout<<"\nStudents Details: "<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Roll Number: "<<roll<<endl;
    }
};
int main(){
    Student s;
    Student*ptr;  //pointer to class
     ptr=&s;      //storing address of object variable
     //More accurate to use -> instead od . when deal with pointer
     ptr->setdata();  //instead of . here -> is used in case of pointer 
     //if dont want to use -> but acces through ptr u can use
     //  ptr->getdata();
     (*ptr).getdata();
    return 0;
}