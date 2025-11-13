#include <stdio.h>

void arraySum(int* arrAdd, int count, int* sum) {
    for (int i = 0; i < count; i++) {
        *sum = *sum + *(arrAdd + i);
    }
}

int main() {

    int arr[] = { 10,20,30,40,50 };
    int count = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;


    arraySum(arr, count, &sum);
    printf("%d\n", sum);

    return 0;
}