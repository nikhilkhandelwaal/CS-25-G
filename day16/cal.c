#include <stdio.h>

void calculate(int num1, int num2, int* sum, int* subs) {
    *sum = num1 + num2;
    *subs = num1 - num2;
}

int main() {

    int a = 10;
    int b = 20;
    int sum, subs;

    calculate(a, b, &sum, &subs);
    printf("Sum is  %d\n", sum);
    printf("Subs is  %d\n", subs);

    return 0;
}

/*
    Pass by ref
        - Multiple value return
        - Memory saving

*/