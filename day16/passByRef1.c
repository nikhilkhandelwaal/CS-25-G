#include <stdio.h>

void value(int* num1) {
    // printf("%u\n", *num1);
    *num1 = 20;
}

int main() {

    int a = 10;
    printf("value of a before passing%d\n", a);
    value(&a);
    printf("value of a after passing%d\n", a);

    return 0;
}