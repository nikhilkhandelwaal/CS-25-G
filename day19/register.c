#include <stdio.h>

int main() {

    register int a = 10;
    register int b = 20;
    int c = a + b;

    // printf("%d\n", c);

    printf("%p", &a);

    return 0;
}