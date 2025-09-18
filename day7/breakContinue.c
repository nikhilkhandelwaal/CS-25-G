#include<stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {


        if (i == 5) {
            continue;
        }
        printf("%d\n", i);


    } // 5to10   1to5   1 to4       

    return 0;
}