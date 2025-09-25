#include <stdio.h>
int main() {
    int n = 1;
    do {
        if (n % 2 == 1 && n < 5)
            printf("%d ", n);
        else if (n % 2 == 0)
            printf("X ");
        n++;
    } while (n <= 6);
    return 0;
}
//    