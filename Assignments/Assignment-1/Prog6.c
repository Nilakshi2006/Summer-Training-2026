//C program that takes minutes as input, and display the total of hours and minutes
#include <stdio.h>

int main(){

    int minutes, hours, remainingMinutes;
    printf("Enter Minutes :");
    scanf("%d",&minutes);

    hours = minutes/60;
    remainingMinutes = minutes % 60;

    printf("Total no. of hours is: %d\n", hours);
    printf("Total no. of Remaining Minutes is: %d\n",remainingMinutes );

}