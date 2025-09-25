#include <stdio.h>
int main() {
    int i = 1, j;
    while (i <= 3) {
        j = 1;
        while (j <= 2) {
            if (i == j)
                printf("S");
            else
                printf("D");
            j++;
        }
        printf(" ");
        i++;
    }
    return 0;
}