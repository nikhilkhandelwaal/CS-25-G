#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            i += 2;
            continue;
        }
        printf("%d ", i);
        if (i > 7)
            break;
    }
    return 0;
}
/*
    1     1,5     1,3,5,7     1,5,9    1,4,6
    1,3,5 

*/