#include <stdio.h>

// function decleration with defination
int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {

    int a = 10;
    int b = 20;
    int sum1 = sum(a, b); // function calling
    printf("%d\n",sum1);

    return 0;
}