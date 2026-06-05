//how memory is allocated for Extern/External variables in C?

// #include <stdio.h>
//  #include "Extern variable 2.c"    //linking the file to access the value of z
// extern int z;
// void hello(int y){
//     static int x=10;
//     printf("%d", ++x+y+z);
// }
// int main()
// {
//     hello(10);
//     hello(10);
//     hello(10);
    
//     return 0;
// }



//can also use function in another file by using extern keyword and linking the file in which the function is defined
#include <stdio.h>
#include "Extern variable 2.c"    //linking the file to access the value of z
extern int z;
extern void hello(int y);

int main()
{
    hello(10);
    hello(10);
    hello(10);
    
    return 0;
}

