#include<stdio.h>
#include<string.h>
int main(){

// char s[]={'a','b',3};
// printf("%u",sizeof(s[1]));  //1
// char str[]="Hello";   //copy all the string literal character from data segment
// str[1]='y';
// printf("%s",str);  //Hyllo
// char*st="Hello";   //Read Only Memory/data segment
// st[1]='y';
// printf("%s",st);


//to read the character
// char str[10];
// scanf("%[ab_c],str");
// printf("%s",str);


//to read full line
// char str[10];
// scanf("%[^\n]",str);
// printf("%s",str);


//fgets
char str[10];
fgets(str,sizeof(str),stdin);
printf("%s",str);

return 0;
}
