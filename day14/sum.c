#include <stdio.h>

void sum(int num1, int num2) { 
    // num1 and num2 called parameter
    printf("%d\n", num1 + num2);
}

int main() {

    int a = 10;
    int b = 20;

    sum(a, b); // a and b called arguments
    sum(15, 30); // 15 and 30 called arguments
    sum(35, 40); // 35 and 40 called arguments


    return 0;
}