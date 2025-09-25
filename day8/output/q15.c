#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 8; i++) {
        if (i % 2 == 0)
            continue;
        if (i % 3 == 0)
            continue;
        printf("%d ", i);
        if (i == 7)
            break;
    }
    return 0;
}