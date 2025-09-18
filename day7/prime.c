#include<stdio.h>

int main() {

    int number, flag = 1;
    // flag = 1=> Prime number   flag=0 => not prime number
    printf("Enter the number to check: ");
    scanf("%d", &number);

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("It is prime number");
    }
    else {
        printf("It is not prime number");
    }

    return 0;
}