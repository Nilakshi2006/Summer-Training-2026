// C program to find frequency of each digit in a given integer
#include<stdio.h>

int main(){
    int num, count[10] = {0}, rem;
    printf("Enter the number: ");
    scanf("%d", &num);

    while(num != 0){
        rem = num % 10;
        count[rem]++;
        num /= 10;
    }

    printf("Frequency of each digit:\n");
    for(int i = 0; i < 10; i++){
        if(count[i] > 0){
            printf("Digit %d: %d times\n", i, count[i]);
        }
    }
    return 0;
}