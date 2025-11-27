#include <stdio.h>
#include"abc.c"

// void printData() {
//     extern int a;
//     printf("%d\n", a);
// }


int main() {

    extern int x;

    printf("%d\n", x);

    return 0;
}