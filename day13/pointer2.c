#include <stdio.h>

int main() {

    int a = 10; // 1000
    // int b = 20;

    int* aPtr = &a;

    printf("%u\n", aPtr);

    aPtr++;

    printf("%u\n", aPtr);


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