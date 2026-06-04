/* C program that accepts an employee's ID, total worked hours of a month and the amount he
received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.*/

#include <stdio.h>

int main()
{

    char Emp_Id[20];
    float hoursWorked, amountPerHour, salary;

    printf("Enter Employee ID:");
    scanf("%s", Emp_Id);

    printf("Enter Total Worked Hours of a month: ");
    scanf("%f", &hoursWorked);

    printf("Enter Salary amount per hour: ");
    scanf("%f", &amountPerHour);

    salary = hoursWorked * amountPerHour;

    printf("Employees ID = %s\n", Emp_Id);
    printf("Salary = %.2f\n", salary);

    return 0;
}