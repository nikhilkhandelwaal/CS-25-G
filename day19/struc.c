#include <stdio.h>

typedef struct user {
    char name[100];
    int age;
    float height;
} uData;

void valueUpdate(struct user* userInfo) {
    userInfo->age = 30;
    printf("Inside Functio: %d\n", userInfo->age); //30

}

int main() {

    uData user1 = { "Hello",25,5.5 };

    printf("Before: %d\n", user1.age); //25

    valueUpdate(&user1);
    printf("After: %d\n", user1.age); //30

    return 0;
}