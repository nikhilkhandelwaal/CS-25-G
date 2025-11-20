#include <stdio.h>
#include<string.h>

struct user {
    char name[100];
    int age;
    float height;
};

int main() {

    struct user user1;
    user1.age = 25;
    user1.height = 5.5;
    strcpy(user1.name, "Hello");

    struct user user2;
    user2.age = 30;
    user2.height = 6.5;
    strcpy(user2.name, "Welcome");

    printf("%d\n", user1.age);
    printf("%f\n", user1.height);
    printf("%s\n", user1.name);
    printf("%d\n", user2.age);
    printf("%f\n", user2.height);
    printf("%s\n", user2.name);




    return 0;
}

/*
    Predefined Data Types
        -
    User Defined data types
        -Structure




*/