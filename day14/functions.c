#include <stdio.h>

// Function Defination
void printHello() {
    printf("Hello world!\n");
}

void hello() {
    printf("Welcome to NCU\n");
    printHello();
}

int main() {

    printf("Welcome everyone\n");
    hello();
    printHello(); // Function Calling
    printf("Bye Bye\n");

    return 0;
}

/*
   Function
    - To Store Block of code
    - Reusability
    - Collect inputs and return the output
    - Run whenever we want

*/