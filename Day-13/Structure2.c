
// take input from user
#include<stdio.h>
struct Student{       
    //properties defined
int rollno;
char name[20];
char batch[10];
};
int main(){
    struct Student s1;
    printf("Enter Rollno:");
scanf("%d ",&s1.rollno);
printf("Enter name:");
scanf("%s", &s1.name);
printf("Enter batch:");
scanf("%s", &s1.batch);

printf("%d %s\n",s1.rollno,s1.name);
return 0;
    
}

