#include <stdio.h>
#include<string.h>

struct user {
    char name[50];
    int age;
    float height;
};

int main() {

    struct user user1;
    user1.age = 25;
    user1.height = 5.5;
    strcpy(user1.name, "Hello");


    printf("%u\n", user1.name);
    printf("%u\n", &user1.age);
    printf("%u\n", &user1.height);


    return 0;
}
// Contgeous Memory Location

