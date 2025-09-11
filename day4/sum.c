#include<stdio.h>
int main() {

    int amnt1, amnt2;
    printf("Enter first amount: ");
    scanf("%d", &amnt1);
    printf("Enter Second amount: ");
    scanf("%d", &amnt2);

    printf("Total Amount: %d", amnt1 + amnt2);

    return 0;
}