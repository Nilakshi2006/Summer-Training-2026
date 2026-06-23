
#include<stdio.h>
struct Student{       
int rollno;
char name[20];
struct Student *p;  //store adress of struct student type
};
int main(){
    struct Student s1={101,"Nilakshi",NULL};
    struct Student*ptr=&s1;  //pointer first points to s1 block

       struct Student s2={102,"abc",NULL};
       s1.p=&s2;//s1 block de pointer ch s2 da address store ho raha hai
       
         struct Student s3={103,"xyz",NULL};
         s2.p=&s3; //s2 block de pointer ch s3 da address store ho raha hai


// printf("%d %s\n",ptr->rollno,ptr->name);
// // ptr=&s2;   // starting pointer ch s2 da address store ho raha hai
// ptr=ptr->p;   //above line can be written as
// printf("%d %s\n",ptr->rollno,ptr->name); //so yeh line bhi s2 ko print kregi
// // ptr=&s3;  //starting pointer ch s3 da address store ho raha hai
// ptr=ptr->p;   //above line can be written as
// printf("%d %s\n",ptr->rollno,ptr->name);//so yeh line bhi s3 ko print kregi
//     return 0;

//line 19 to 26 can be written as ..
while(ptr!=NULL){
    printf("%d %s\n",ptr->rollno,ptr->name);
 ptr=ptr->p;   
}
}