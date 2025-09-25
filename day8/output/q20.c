#include<stdio.h>

int main() {

    int x = 5, y = 10, z = 0;
    if (++x > 6 && ++y > 10 && ++z > -1) {
        printf("X=%d, Y=%d, Z=%d\n", x, y, z);
    }
    if (--x == 5 || --y == 9) {
        printf("Final: X=%d, Y=%d", x, y);
    }

    return 0;
}

/*
    4,9,0   6,11,1,5,11         5,10    4,9

*/