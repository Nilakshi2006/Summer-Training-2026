//Print first 10 fibbonacci series using for loop
#include<stdio.h>
int main(){
    int a=0,b=1,c,i;
    printf("%d %d ",a,b);

    for(i=2;i<10;i++){
        c=a+b;
        printf("%d ",c);
          a=b;
          b=c;
    }
}