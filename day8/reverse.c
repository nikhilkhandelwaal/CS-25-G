#include<stdio.h>

int main() {

    int number, lastDigit, reverse = 0, original;
    printf("Enter the number: ");
    scanf("%d", &number);
    original = number;

    while (number != 0) {
        lastDigit = number % 10; // 1
        number = number / 10; // 0
        reverse = reverse * 10 + lastDigit; // 321
    }

    if (reverse == original) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }

    return 0;
}