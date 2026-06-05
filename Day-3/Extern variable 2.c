// #include<stdio.h>
// int z=10;

#include<stdio.h>
 int z=10;
 void hello(int y){
    static int x=10;
    printf("%d", ++x+y+z);
 }