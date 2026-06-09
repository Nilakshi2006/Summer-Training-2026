// Loop statements in C

// for loop
// #include <stdio.h>
// int main() {
//     int i;
//     for(i = 1; i <= 10; i++) {
//         printf("%d ", i);
//     }
//     printf("\n");
//     return 0;
// }

// while loop
// #include <stdio.h>
// int main() {
//     int i = 1;
//     while(i <= 10) {
//         printf("%d ", i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }

// do-while loop
#include <stdio.h>
int main() {
    int i = 1;
    do {
        printf("%d ", i);
       i++;
    } while(i <= 10);
    printf("\n");
    return 0;
}
