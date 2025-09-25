#include <stdio.h>
int main() {
    int a = 5, b = 1;
    while (b < a) {
        printf("%d ", b++);
        if (b == 3) {
            a--;
            continue;
        }
        printf("%d ", a--);
    }
    return 0;
}