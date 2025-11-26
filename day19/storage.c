#include <stdio.h>

void value() {
    static int a = 10;
    a++;
    printf("%d\n", a);
}

int main() {

    value();
    value();
    value();

    return 0;
}

/*
    Storeage Classes
        Auto Static register extern


*/