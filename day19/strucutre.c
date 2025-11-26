#include <stdio.h>

struct user {
    char name[100];
    int age;
    float height;
};

int main() {

    struct user user1 = { "Hello",25,5.5 };
    struct user* user1Ptr = &user1;

    // printf("%s\n", user1.name);
    // printf("%d\n", user1.age);
    // printf("%f\n", user1.height);
    // printf("%s\n", (*user1Ptr).name);
    // printf("%d\n", (*user1Ptr).age);
    // printf("%f\n", (*user1Ptr).height);
    printf("%s\n", user1Ptr->name);
    printf("%d\n", user1Ptr->age);
    printf("%f\n", user1Ptr->height);



    return 0;
}