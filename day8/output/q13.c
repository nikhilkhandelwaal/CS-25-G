#include <stdio.h>
int main() {
    int i, step = 1;
    for (i = 2; i <= 10; i += step) {
        printf("%d ", i);
        step++;
        if (i == 5)
            continue;
        if (i > 7)
            break;
    }
    return 0;
}