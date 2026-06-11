//Binary to Decimal
#include<stdio.h>
int main(){
    int b;
    printf("Enter a binary value : ");
    scanf("%d",&b);
    int decimal=0;
    int base=1;
    while(b>0){
        int rem=b%10;
        decimal+=base*rem;
        base=base*2;
        b=b/10; 
    }
    printf("Decimal is :%d",decimal);
    return 0;
}