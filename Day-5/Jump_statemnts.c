//Jump statements in C

//break statement
// #include <stdio.h>

// int main() {
//     int i;
//     for(i = 1; i <= 10; i++) {
//         if(i == 5) {
//             break; // Exit the loop when i is 5
//         }
//         printf("%d ", i);
//     }
//     printf("\nLoop exited at i = %d\n", i);
//     return 0;
// }


//continue statement
// #include <stdio.h>

// int main() {
//     int i;
//     for(i = 1; i <= 10; i++) {
//         if(i == 5) {
//             continue; // Skip the rest of the loop body when i is 5
//         }
//         printf("%d ", i);
//     }
//     printf("\nLoop completed\n");
//     return 0;
// }

// //goto statement
// #include <stdio.h>

// int main() {
//     int i;
//     goto label; // Jump to the label .label can be any name you choose, but it must be defined in the same function.

// label:
//     for(i = 1; i <= 10; i++) {
//         printf("%d ", i);
//     }
//     printf("\nLoop completed\n");
//     return 0;
// }

// //  return statement
#include <stdio.h>
int main() {
    int i;
    for(i = 1; i <= 10; i++) {
        if(i == 5) {
            return 0; // Exit the program when i is 5
        }
        printf("%d ", i);
    }
    printf("\nThis line will not be executed\n");
    return 0;
}