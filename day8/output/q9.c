#include <stdio.h>
int main() {
    int a = 2, b = 3;
    while (a < 8) {
        b = b + a++;
        printf("%d ", b);
        if (b > 10) {
            a--;
            break;
        }
        b--;
    }
    printf("A%dB%d", a, b);
    return 0;
}
