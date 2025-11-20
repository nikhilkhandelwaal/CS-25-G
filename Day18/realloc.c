#include <stdio.h>
#include<stdlib.h>

int main() {

    int* arr;
    arr = (int*)calloc(5, sizeof(int));

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    for (int i = 0; i < 9; i++) {
        printf("%d\n", arr[i]);
    }

    printf("--------------------\n");
    arr = realloc(arr, 9 * sizeof(int));
    arr[5] = 60;
    arr[6] = 70;
    arr[7] = 80;
    arr[8] = 90;

    for (int i = 0; i < 9; i++) {
        printf("%d\n", arr[i]);
    }


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