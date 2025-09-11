#include<stdio.h>
int main() {

    int a, b, temp; // 10,20

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    temp = a; // temp =10
    a = b; // a=20
    b = temp; // b= 10;

    printf("a is %d & b is %d", a, b);




    return 0;
}