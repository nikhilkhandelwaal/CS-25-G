#include<stdio.h>
int main() {

    int dayNum;
    printf("Enter day number: ");
    scanf("%d", &dayNum);

    if (dayNum == 1) {
        printf("Monday");
    }
    else if (dayNum == 2) {
        printf("Tuesday");
    }
    else if (dayNum == 3) {
        printf("Wednesday");
    }
    else if (dayNum == 4) {
        printf("Thursday");
    }
    else if (dayNum == 5) {
        printf("Friday");
    }
    else if (dayNum == 6) {
        printf("Saturday");
    }
    else if (dayNum == 7) {
        printf("Sunday");
    }
    else {
        printf("Invalid Day number");
    }

    return 0;
}