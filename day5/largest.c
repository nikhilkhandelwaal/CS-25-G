#include<stdio.h>
int main() {

    int number1, number2;
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);

    if (number1 > number2) {
        printf("%d Number1 is biggest number", number1);
    }
    else {
        printf("%d Number2 is biggest number", number2);
    }

    return 0;
}