#include <stdio.h>
#include <string.h>

int main()
{
    // strlen-find length of string
    //  char str[20] = "Hello";
    //  printf("%d\n", strlen(str)); // give length of only visible character dont count null character


    //    sizeof(str)-give size fo string
    // char str[20] = "Hello";
    // printf("%d\n", sizeof(str)); //  give size of string that is defined in char str[20] means 20


    // strcmp-compare two strings
    //  char s1[10]="Hello";
    //  char s2[20]="HellP";
    //  printf("%d",strcmp(s1,s2));


    // strcpy-copy string data to another string
    // char s1[10] = "HEy";
    // char s2[20] = "HellO";
    // printf("%s", strcpy(s2, s1)); //copy s1 to s2 ,s1 is souce and s2 is destination

    // this shows undefined behavior because size is not applicabe for character sto be stored
    //  char s1[10] = "HEy";
    //  char s2[20] = "HellO";
    //  printf("%s", strcpy(s2, s1));


    // strcat-addtion of string
    //       char s1[10] = "Hellooo";
    //     char s2[20] = "HellP";
    //     printf("%s",strcat(s2,s1));
    //    return 0;


    // strupr-for uppercase
    //  char str[20]="Hello";
    //  printf("%s",strupr(str));
    //  return 0;


    // strlwr-for lowercase
    // char str[20] = "Hello";
    // printf("%s", strlwr(str));
    // return 0;

    
    // strrev-to reverse the srting
    char str[20] = "Hello";
    printf("%s", strrev(str));
    return 0;
}