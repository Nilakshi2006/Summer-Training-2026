#include <stdio.h>

int main()
{
    int arr[5]= {2, 3 , 4, 5};

    // printf("%d", sizeof(arr));
    printf("%p", arr); // address of first index
    // p is used to represent in hexadecimal 

    printf("%d\n", *arr); // value of first index

    printf("%d\n", *arr + 4); //output = 6

    printf("%d\n", *(arr+3)); // access element present at index 3 

    char str[6] = "hihih";
    printf("%s\n", str);

    return 0;
}