#include <stdio.h>
int main() {
    int i, j = 0;
    for (i = 1; i <= 5; i++) {
        j += i;
        if (j > 10)
            break;
        if (i % 2 == 0)
            continue;
        printf("%d ", j);
    }
    return 0;
}
// i=5, j=15   
// 1 6 