// C program to check whether a number is Armstrong number or not
#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);

    int num = a; //store number so that data don't lost in further steps
    int cnt = 0;
    //count digits
    while(num > 0){
        num /= 10;
        cnt++;
    }

    num = a; //reset num
    int sum = 0;
    while(num > 0){
        //For number 153
        int rem = num % 10; //3->5->1
        sum += pow(rem, cnt); //27->27+125->27+125+1
        num /= 10; //153->15>1->0
    }

    if(sum == a){
        printf("Number is armstrong");
    }else{
        printf("Number is not armstrong");
    }
    return 0;
}