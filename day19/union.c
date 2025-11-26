#include <stdio.h>

union user {
    char name[50];
    int age;
    float height;
};


int main() {

    // printf("%d\n", sizeof(union user));

    union user user1;
    user1.age = 25;
    printf("%d\n", user1.age);

    user1.height = 5.5;

    printf("%d\n", user1.age);
    printf("%f\n", user1.height);




    return 0;
}