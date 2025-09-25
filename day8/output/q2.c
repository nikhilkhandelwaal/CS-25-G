#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            if (i == j) {
                printf("A ");
                continue;
            }
            printf("%d%d ", i, j);
        }
        printf("\n");
    }
    return 0;
}
// A12 13 21 A 23 31 32 A
// 