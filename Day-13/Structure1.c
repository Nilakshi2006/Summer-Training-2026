//Structure is user deifne datatype used to store values of diff datatype and is defined above main function (global scope)
// print result
#include<stdio.h>
struct Student{       
    //properties defined
int rollno;
char name[20];
char batch[10];
};
int main(){
//     data_type variable_name = Value;
struct Student s1={101,"Nilakshi","CSE"};//values assigned
struct Student s2={102,"abc","IT"};
struct Student s3={103,"xyz","CSE"};

// printf("%d %d",s1.rollno,s1.name);   //give adrees instead of name
printf("%d %s %s\n",s1.rollno,s1.name,s1.batch);
  printf("%d %s %s\n",s2.rollno,s2.name,s2.batch);
  printf("%d %s %s\n",s3.rollno,s3.name,s3.batch);
return 0;
}