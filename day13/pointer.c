#include <stdio.h>

int main() {

    int a = 10; // 1000
    int b = 10;

    int* aPtr = &a;
    int* bPtr = &b;

    // printf("%p\n", &a);
    // printf("%p\n", aPtr);
    // printf("%p\n", &b);
    // printf("%p\n", bPtr);
    printf("%d\n", *aPtr);
    printf("%d\n", *bPtr);

    *aPtr = 15;
    *bPtr = 25;

    printf("%d\n", a);
    printf("%d\n", b);




    return 0;
}

/*
    Pointer
        Varible Name, Varible Values, Varible Address

    a => Value of varible
    &a => Address of varible a
    *aPtr => value of at that address

    *aPtr = a
*/