// C program to write an amount (integer value) and break the amount into smallest possible number of bank notes (100, 50, 20, 10, 5, 2, 1)

#include <stdio.h>

int main()
{
int amount, remaining;
int note_100, note_50, note_20;
int note_10, note_5, note_2, note_1;

printf("Input the amount: ");
scanf("%d", &amount);

remaining = amount;

note_100 = remaining / 100;
remaining %= 100;

note_50 = remaining / 50;
remaining %= 50;

note_20 = remaining / 20;
remaining %= 20;

note_10 = remaining / 10;
remaining %= 10;

note_5 = remaining / 5;
remaining %= 5;

note_2 = remaining / 2;
remaining %= 2;

note_1 = remaining;

printf("Breakdown of %d:\n", amount);
printf("%d note(s) of 100\n", note_100);
printf("%d note(s) of 50\n", note_50);
printf("%d note(s) of 20\n", note_20);
printf("%d note(s) of 10\n", note_10);
printf("%d note(s) of 5\n", note_5);
printf("%d note(s) of 2\n", note_2);
printf("%d note(s) of 1\n", note_1);

return 0;

}
