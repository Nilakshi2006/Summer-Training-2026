// C program to find maximum between three numbers using conditional operator

#include<stdio.h>
int main(){
int a,b,c;
printf("Enter three numbers: ");
scanf("%d,%d,%d",&a,&b,&c);
if(a>b && a>c)
{
    printf("%d is Maximum",a);
}else if(b>a && b>c){
    printf("%d is Maximum",b);
}else{
    printf("%d is Maximum",c);
}
return 0;
}