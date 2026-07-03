// C program to create Simple Calculator using switch case.#include<stdio.h>
#include<stdio.h>
int main(){
    int a, b, choice;
    printf("Enter two Numbers (separated by comma): ");
    scanf("%d,%d", &a, &b);

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Sum: %d\n", a + b);
            break;
        case 2:
            printf("Difference: %d\n", a - b);
            break;
        case 3:
            printf("Product: %d\n", a * b);
            break;
        case 4:
            if(b != 0)
                printf("Quotient: %.2f\n", (float)a / b);
            else
                printf("Division by zero!\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}