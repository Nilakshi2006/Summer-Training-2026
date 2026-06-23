// // employye structure
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




//optimized way of employee structure
#include<stdio.h>
struct Employee{
    int empID;
    char empName[50];
    int empSalary;
    char empPost[10];
};
int main(){
struct Employee e1[2];  //array of struct
for(int i=0;i<2;i++){
    printf("Enter ID,Name,Salary,Post:");
scanf("%d%s%d%s",&e1[i].empID,&e1[i].empName,&e1[i].empSalary,&e1[i].empPost);
}
printf("Data:\n");
for(int i=0;i<2;i++){
printf("%d %s %d %s\n",e1[i].empID,e1[i].empName,e1[i].empSalary,e1[i].empPost);
}
return 0;
}