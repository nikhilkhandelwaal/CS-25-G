#include <stdio.h>

int sum(int num1, int num2) {

    // printf("%d\n", num1 + num2);
    return num1 + num2;

}

int main() {

    int a = 10;
    int b = 20;
    int sum1 = sum(a, b);
    int sum2 = sum(15, 25);
    printf("%d\n", sum1);
    return 0;
}