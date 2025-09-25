#include <stdio.h>
int main() {
    int num;
    for (num = 15; num > 5; num -= 2) {
        if (num > 10 && num < 14)
            printf("A");
        else if (num <= 10 || num >= 14)
            printf("B");
        if (num == 9 || num == 13)
            continue;
        printf("%d ", num);
    }
    return 0;
}