// C program to find all roots of quadratic equation
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c, discriminant, root1, root2;
  
    printf("Enter value of a :");
    scanf("%f",&a);

    printf("Enter value of b :");
    scanf("%f",&b);

    printf("Enter value of c :");
    scanf("%f",&c);

    discriminant=b*b - 4*a*c;
    printf("Discriminant is :%.2f\n",discriminant);

    root1=(-b+sqrt(discriminant))/(2*a);

    root2=(-b-sqrt(discriminant))/(2*a);
    printf("Root is :%f\n",root1);
    printf("Root is :%f\n",root2);
    return 0;
}