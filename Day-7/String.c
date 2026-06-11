#include<stdio.h>
#include<string.h>
int main(){
char str[10];
scanf("%s",str); //after space or new stop reading
//for multiple word-single line
//gets() -removed from c (latest) ,because after overflow of character reading the character
//fgets(variableName,sizeof(variableName),stdin)
//%[^\n]-[abc]-sets,^-not ,the synatx tell read everything except new line
gets(str);
// scanf("%[^\n]",str);
printf("%s",str);
}
