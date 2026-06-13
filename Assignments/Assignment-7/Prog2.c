// C program to check whether a number is palindrome or not
#include<stdio.h>
int main(){
      int num, original,rev = 0, rem;

    printf("Enter the number: ");
    scanf("%d",&num);
    original=num;

while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
}
if(original==rev){
    printf("%d is Palindrome Number",original);
}else{
    printf("%d is not Palindrome Number",original);
}
return 0;
}