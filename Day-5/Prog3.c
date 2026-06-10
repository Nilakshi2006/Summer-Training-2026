//print first 10 fibonacci series using goto statement
#include <stdio.h>
int main()
{
    int a=0,b=1,c,i=2;
    printf("%d %d ",a,b);
    loop:
    if(i<10)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
        goto loop;
    }
    return 0;
}