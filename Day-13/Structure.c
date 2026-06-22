// //Structure is user deifne datatype used to store values of diff datatype and is defined above main function (global scope)
// #include<stdio.h>
// struct Student{       
//     //properties defined
// int rollno;
// char name[20];
// char batch[10];
// };
// int main(){
// //     data_type variable_name = Value;
// struct Student s1={101,"Nilakshi","CSE"};//values assigned
// struct Student s2={102,"abc","IT"};
// struct Student s3={103,"xyz","CSE"};

// // printf("%d %d",s1.rollno,s1.name);   //give adrees instead of name
// printf("%d %s %s\n",s1.rollno,s1.name,s1.batch);
//   printf("%d %s %s\n",s2.rollno,s2.name,s2.batch);
//   printf("%d %s %s\n",s3.rollno,s3.name,s3.batch);
// return 0;
// }




// #include<stdio.h>
// struct Student{       
//     //properties defined
// int rollno;
// char name[20];
// char batch[10];
// };
// int main(){
//     struct Student s1;
//     printf("Enter Rollno:");
// scanf("%d ",&s1.rollno);
// printf("Enter name:");
// scanf("%s", &s1.name);
// printf("Enter batch:");
// scanf("%s", &s1.batch);

// printf("%d %s\n",s1.rollno,s1.name);
// return 0;
    
// }



// #include<stdio.h>
// struct Employee{
//     int empID;
//     char empName[50];
//     int empSalary;
//     char empPost[10];
// };
// int main(){
// struct Employee e1;
// printf("Enter Id:");
// scanf("%d",&e1.empID);

// printf("Enter Name:");
// scanf("%s",&e1.empName);

// printf("Enter Salary:");
// scanf("%d",&e1.empSalary);

// printf("Enter Post:");
// scanf("%s",&e1.empPost);

// printf("%d %s %d %s\n",e1.empID,e1.empName,e1.empSalary,e1.empPost);



// struct Employee e2;
// printf("Enter Id:");
// scanf("%d",&e2.empID);

// printf("Enter Name:");
// scanf("%s",&e2.empName);

// printf("Enter Salary:");
// scanf("%d",&e2.empSalary);

// printf("Enter Post:");
// scanf("%s",&e2.empPost);

// printf("%d %s %d %s\n",e2.empID,e2.empName,e2.empSalary,e2.empPost);
// return 0;
// }



// //optimized way
// #include<stdio.h>
// struct Employee{
//     int empID;
//     char empName[50];
//     int empSalary;
//     char empPost[10];
// };
// int main(){
// struct Employee e1[2];  //array of struct
// for(int i=0;i<2;i++){
//     printf("Enter ID,Name,Salary,Post:");
// scanf("%d%s%d%s",&e1[i].empID,&e1[i].empName,&e1[i].empSalary,&e1[i].empPost);
// }
// printf("Data:\n");
// for(int i=0;i<2;i++){
// printf("%d %s %d %s\n",e1[i].empID,e1[i].empName,e1[i].empSalary,e1[i].empPost);
// }
// return 0;
// }



//Structure padding -extra space is padding 
// #include<stdio.h>
// struct Student{       
// int rollno;
// // double d;
// // int d;
// char ch[10];
// float f;
// };
// int main(){
// struct Student s1;
// printf("%d",sizeof(s1));
// }


//to ignore padding
#include<stdio.h>
#pragma pack(1)    //to ignore padding it take only that much storage that is needed
struct Student{       
int rollno;
// double d;
// int d;
char ch;

};
int main(){
struct Student s1;
printf("%d",sizeof(s1));
}
