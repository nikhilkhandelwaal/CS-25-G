// Take 5 integer from scanf and print in reverse order
// Copy elements from one array to another array
// WAP to reverse an array with using another Array
// WAP to reverse an array without using another Array
// Check wheather array is palindrome or not ?
#include <stdio.h>

int main() {

    int a = 1, c = 0, n, d;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        c = a + c;
        printf("%d", c);
        a = a + 2;
        // d = a + c;
        // printf("%d\n", d);

    }

    return 0;
}