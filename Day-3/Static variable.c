// How memory is allocated for static variables in C?

#include <stdio.h>

void hello(int y){
    static int x=10;
    printf("%d", ++x+y);
}
int main()
{
    hello(10);
    hello(10);
    hello(10);
    
    return 0;
}

