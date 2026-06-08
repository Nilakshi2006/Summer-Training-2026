//Control statements in C

//Decision making statements in C
#include<stdio.h>
int main()
{
    // int x ;

    //if statement
    // if(x==0){

    //     printf("x is equal to 0");
    // }

    // //if-else statement
    // if(x%2==0){
    //     printf("x is even");
    // }
    // else{
    //     printf("x is odd");
    // }

    // //if-else-if statement
    // if(x>0){
    //     printf("x is positive");
    // }
    // else if(x<0){
    //     printf("x is negative");
    // }
    // else{
    //     printf("x is zero");
    // }


    //Switch Statement
float a,b;
printf("Enter two Numbers :");
scanf("%f %f",&a,&b);
printf("Enter an Operator :");
char op;
scanf(" %c",&op);  //space is marked because %c is used to consume any whitespace char

switch(op){
    case '+':
    printf("%f",a+b);
    break;

      case '-':
    printf("%f",a-b);
    break;

      case '*':
    printf("%f",a*b);
    break;

      case '/':
  if(b!=0){
    printf("%f",a/b);
  }
  else{
    printf("Diviosn not possible");
  }
    break;
    default:
    printf("Operator is not valid");
}
    return 0;
}
