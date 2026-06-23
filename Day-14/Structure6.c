//Taking values from user using pointer
#include<stdio.h>
struct Student{       
int rollno;
char name[20];
char batch[10];
};
int main(){
    struct Student s1;
    struct Student*ptr=&s1;
    printf("Enter Rollno: ");
    scanf("%d",&ptr->rollno);
    printf("Enter Name: ");
    scanf("%s",&ptr->name);
    printf("Enter Batch: ");
    scanf("%s",&ptr->batch);

   printf("%d %s %s",ptr->rollno,ptr->name,ptr->batch);
}