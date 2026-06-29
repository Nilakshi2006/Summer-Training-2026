//Class:
// Class is user defined datat type that acts as a blueprint,templates,or prototype from which obj is created.It binds data(variables)and method(functions)in a single unit.
//Object:
//Object is instance of class.It is real world intity that has specific state(data)and behavior (functions/methods).
//Note:No memory allocated for class. Memory is allocated when obj is created.


// #include<iostream>
// using namespace std;
// class data{
//     public:  //acces specifier for security of data
//     //data(variable) or members
// string name;
// int a;
// float b;
// //method(function) or member function
// void show(){
//     cout<<"Name="<<name<<endl;
//     cout<<"a="<<a<<endl;
//         cout<<"b="<<b<<endl;
// }
// };
// int main(){
//     data obj1,obj2,obj3;  //You can make as many as object if u want same data type as class name-data
//     obj1.name="Nilakshi";
//     obj1.a=100;
//     obj1.b=45.60;
//     obj1.show();

//     obj2.name="abc";
//     obj2.a=200;
//     obj2.b=35.60;
//     obj2.show();

//      obj3.name="xyz";
//     obj3.a=600;
//     obj3.b=30.60;
//     obj3.show();
//     return 0;
// }


//can make arr of objects instead of creating mutiple objects to remove multiple code lines
#include<iostream>
using namespace std;
class Student{
    public:
string name;
int rollno;
float avgMarks;

};
int main(){
   Student s[4];
   int i;
   for(i=0;i<4;i++){
    cout<<"\nEnter Details of Student: "<<i+1<<endl;
    cout<<"Enter Name: ";
    cin>>s[i].name;
    cout<<"Enter Rollno: ";
    cin>>s[i].rollno;
    cout<<"Enter avg Marks: ";
    cin>>s[i].avgMarks;
   }
   for(i=0;i<4;i++){
cout<<"\nStudents Details: "<<i+1<<endl;
       cout<<"Name is: "<<s[i].name<<endl;
       cout<<"Rollno is: "<<s[i].rollno<<endl;
       cout<<"Avg Marks is: "<<s[i].avgMarks<<endl;
   }
   return 0; 

}