#include<stdio.h>
int main() {

    int num1, num2, num3;

    printf("Enter the number 1: ");
    scanf("%d", &num1);
    printf("Enter the number 2: ");
    scanf("%d", &num2);
    printf("Enter the number 3: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        // num1 is largest
        if (num2 > num3) {
            printf("%d %d %d", num3, num2, num1);
        }
        else {
            printf("%d %d %d", num2, num3, num1);
        }
    }
    else if (num2 > num1 && num2 > num3) {
        // num2 is largest
        if (num1 > num3) {
            printf("%d %d %d", num3, num1, num2);
        }
        else {
            printf("%d %d %d", num1, num3, num2);
        }
    }
    else {
        // num3 is largest
        if (num1 > num2) {
            printf("%d %d %d", num2, num1, num3);
        }
        else {
            printf("%d %d %d", num1, num2, num3);
        }
    }


    return 0;
}