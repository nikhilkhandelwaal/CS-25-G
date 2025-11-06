#include <stdio.h>

void table(int num) {
    // int num;
    // printf("Enter the number: ");
    // scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i * num);
    }
    printf("\n");
}

int main() {

    int a = 10;
    table(a);

    int b = 15;
    table(b);

    table(7);

    return 0;
}

/*
    Parameter and arguments
*/