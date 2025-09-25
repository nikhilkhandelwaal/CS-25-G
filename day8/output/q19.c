#include <stdio.h>
int main() {
    int x = 1;
    for (; x <= 3; x++) {
        int y = x;
        while (y > 0) {
            if (y == 2)
                break;
            printf("%d", y);
            y--;
        }
        if (x == 2)
            continue;
        printf(" ");
    }
    return 0;
}