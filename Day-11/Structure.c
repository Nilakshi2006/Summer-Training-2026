#include<stdio.h>

struct student{
    char name[30];
    int rollno;
    char add[50];
    char section[20];
};
int main(){
    // struct student s1={"Nilakshi",562,"Hoshiarpur","B"};

    // printf("%s %d %s %s\n",s1.name,s1.rollno,s1.add,s1.section);
    // printf("%d",sizeof(s1));

    struct student s1[5];
    for(int i=0;i<5;i++){
        scanf("%s[^\n]",s[i].name);
        scanf("%d",s[i].rollno);
        scanf("%s[^\n]",s[i].add);
          scanf("%s[^\n]",s[i].section);
    }
        return 0;
}