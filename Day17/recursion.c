#include <stdio.h>

int fact(int num) {
    // int factVal = 1;
    // for (int i = 1; i <= num; i++) {
    //     factVal *= i;
    // }
    // return factVal;
    if (num == 0) return 1;
    return num * fact(num - 1);
    // 5*fact(5-1) => 5*fact(4) => 5*24 => 120
    // 4*fact(4-1) => 4*fact(3) => 4*6 => 24
    // 3*fact(3-1) => 3*fact(2) => 3*2 => 6
    // 2*fact(2-1) => 2*fact(1) => 2*1 => 2
    // 1*fact(1-1) => 1*fact(0) => 1*1 => 1

}

int main() {

    int num1 = 5;
    int factValue = fact(num1);

    printf("%d\n", factValue);

    return 0;
}

/*
    !5 => 5*!4
    !4 => 4*!3
    !3 => 3*!2
    !2 => 2*!1
    !1 => 1

*/