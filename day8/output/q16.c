#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 3; i++) {
        for (j = i; j <= 3; j++) {
            printf("%d%d ", i, j);
            if (i + j == 4)
                break;
        }
        if (i == 2)
            break;
    }
    return 0;
}