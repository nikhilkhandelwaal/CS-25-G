#include <stdio.h>
#include<string.h>

struct user {
    char name[50];
    int age;
    float height;
};

int main() {

    struct user userData[5];
    userData[0].age = 25;
    userData[0].height = 5.5;
    strcpy(userData[0].name, "Hello");
    userData[1].age = 25;
    userData[1].height = 5.5;
    strcpy(userData[1].name, "Hello");

    return 0;
}