//Assign value by pointer of structure studnet type
#include<stdio.h>
struct student{
    int rollno;
    char name[10];
};
int main(){
    struct student *ptr=(struct student *)malloc(sizeof(struct student));  //instead of 4 we pass the size of struct student
ptr->rollno=101;   
// ptr->name="Nilakshi";      //arr is constant pointer we cant change the value so we cant directly assignm value we have to copy using strcpy

printf("%d\n",ptr->rollno);
strcpy(ptr->name,"Nilakshi");
printf("%s",ptr->name);
return 0;
}