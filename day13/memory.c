#include <stdio.h>

int main() {

    // int arr[] = { 10,20,30,40,50 };

    // printf("%u\n", &arr);
    // printf("%u\n", &arr[0]);
    // printf("%u\n", &arr[1]);
    // printf("%u\n", &arr[2]);
    // printf("%u\n", &arr[3]);
    // printf("%u\n", &arr[4]);


    int a = 10;

    int* aPtr = &a;
    int** aaPtr = &aPtr;

    printf("%d\n", a); // Value of a
    printf("%u\n", &a); // address of a
    printf("%u\n", aPtr); // address of a
    printf("%d\n", *aPtr); // Value of a
    printf("%u\n", &aPtr); // address of aPtr
    printf("%u\n", aaPtr); // address of aPtr
    printf("%u\n", *aaPtr);// value of aPtr or address of a
    printf("%u\n", &aaPtr);// address of aaPtr
    printf("%u\n", **aaPtr);// value of a


    return 0;
}
/*
    Contigeous Memory Location
    // ** => Pointer to Pointer

*/