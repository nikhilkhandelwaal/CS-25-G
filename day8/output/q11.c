#include <stdio.h>
int main() {
    int x = 1, y = 10;
    while(x < y) {
        printf("%d ", x);
        x = x + 2;
        y = y - 1;
        if(x == 5)
            continue;
        printf("%d ", y);
    }
    return 0;
}
// 1,3    1937     1938    