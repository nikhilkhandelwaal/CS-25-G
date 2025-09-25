#include <stdio.h>
int main() {
    int n = 10;
    do {
        if (n % 3 == 0 && n % 4 == 0)
            printf("B");
        else if (n % 3 == 0)
            printf("T");
        else
            printf("%d", n);
        n--;
        if (n == 8)
            continue;
        printf(" ");
    } while (n > 5);
    return 0;
}