#include <stdio.h>
#include<stdlib.h>

int main() {

    // int arr[10]; //Static Memory Allocatio
    int* arr;

    arr = (int*)malloc(5 * sizeof(int));

    arr[0] = 10;
    arr[1] = 20;

    free(arr);
    return 0;
}
/*
    Dynamic Memory Allocation
        malloc
        calloc
        free
        realloc


*/