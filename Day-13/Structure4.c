
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
