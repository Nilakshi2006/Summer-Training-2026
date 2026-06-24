// C program to check whether a number is palindrome or not
#include<stdio.h>
int main(){
      int num, original,rev = 0, rem;

    printf("Enter the number: ");
    scanf("%d",&num);
    original=num;//Let number is 121

while(num!=0){
    rem=num%10;  //1->2->1
    rev=rev*10+rem;//0*10+1=1 -> 1*10+2=12 -> 12*10+1=121
    num/=10;     //to remove the last digits one by one 
}
if(original==rev){
    printf("%d is Palindrome Number",original);  //121
}else{
    printf("%d is not Palindrome Number",original);  //121
}
return 0;
}