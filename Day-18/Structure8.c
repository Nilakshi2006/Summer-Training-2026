//finding difference between date using structure
#include<stdio.h>
struct date{
int day,month,year;
};
int main(){
struct date d1,d2,d3;
d1.day=20;
d1.month=6;
d1.year=2002;
printf("Date 1(DD-MM-YY): %d-%d-%d",d1.day,d1.month,d1.year);

d2.day=25;
d2.month=9;
d2.year=1990;
printf("\nDate 2(DD-MM-YY): %d-%d-%d",d2.day,d2.month,d2.year);

if(d2.day>d1.day){
    d1.day=d1.day+30;
    d1.month=d1.month-1;
    d3.day=d1.day-d2.day;
}
else{
    d3.day=d1.day-d2.day;
}

if(d2.month >d1.month){
    d1.month=d1.month+12;
    d1.year=d1.year-1;
    d3.month=d1.month-d2.month;
}else{
    d3.month=d1.month-d2.month;
}

if(d2.year>d1.year){
    printf("Enter the Greater year.\n");
}else{
    d3.year=d1.year-d2.year;
}
printf("\nDate 3(DD-MM-YY): %d-%d-%d",d3.day,d3.month,d3.year);
return 0;
}