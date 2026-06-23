//accessing values through pointer in structure
#include<stdio.h>
struct Student{       
int rollno;
char name[20];
char batch[10];
};
int main(){
    // int i;
    struct Student s1={101,"Nilakshi","CSE"};
    struct Student*ptr=&s1;//pointes to struct Studnet type
printf("%d %s %s",ptr->rollno,ptr->name,ptr->batch);//access values thorugh pointer with arrow(->) opeartor
    return 0;
}