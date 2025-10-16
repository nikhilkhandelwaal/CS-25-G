#include <stdio.h>

int main() {

    int arr[10] = { 10,20,30,40,50,60,70,80 };
    int count = sizeof(arr) / sizeof(arr[0]);
    // Insert a new value at zero index
    // for (int i = count - 1; i >= 0; i--) {
    //     arr[i] = arr[i - 1];
    // }
    // arr[0] = 5;

    // Insert a new value at Last index
    // arr[count - 1] = 5;

    // Insert a new value at Specific index
    int index = 5;

    for (int i = count - 1; i > index; i--) {
        arr[i] = arr[i - 1];
        // 9 =8
    }
    arr[index] = 55;

    for (int i = 0; i < count; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}