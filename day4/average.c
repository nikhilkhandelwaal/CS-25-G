#include<stdio.h>
int main() {

    int marks1, marks2, marks3, total;

    printf("Enter marks 1: ");
    scanf("%d", &marks1);
    printf("Enter marks 2: ");
    scanf("%d", &marks2);
    printf("Enter marks 3: ");
    scanf("%d", &marks3);

    total = marks1 + marks2 + marks3;

    printf("Average Marks: %f", total / 3.0);

    return 0;
}