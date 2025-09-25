#include <stdio.h>
int main() {
    int result;
    result = 7 / 2;
    printf("Result: %d\n", result);
    if (result == 3.5) {
        printf("Match!\n");
    }
    else {
        printf("Not Match!\n");
    }
    return 0;
}