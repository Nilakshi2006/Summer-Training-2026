/* C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and
Computer.
Calculate percentage and grade according to following:
Percentage >= 90% : Grade A Percentage
>= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F */

#include <stdio.h>

int main() {
    float phy, chem, bio, math, comp, percent;
    printf("Enter marks of five subjects (out of 100):\n");
    printf("Physics: ");
    scanf("%f", &phy);
    printf("Chemistry: ");
    scanf("%f", &chem);
    printf("Biology: ");
    scanf("%f", &bio);
    printf("Mathematics: ");
    scanf("%f", &math);
    printf("Computer: ");
    scanf("%f", &comp);

    percent = (phy + chem + bio + math + comp) / 5;

    printf("Percentage: %.2f%%\n", percent);
    printf("Grade: ");
    if (percent >= 90) printf("A\n");
    else if (percent >= 80) printf("B\n");
    else if (percent >= 70) printf("C\n");
    else if (percent >= 60) printf("D\n");
    else if (percent >= 40) printf("E\n");
    else printf("F\n");

    return 0;
}