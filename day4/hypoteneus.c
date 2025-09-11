#include<stdio.h>
#include<math.h>

int main() {

    int base, height;
    float hypotenus;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter height: ");
    scanf("%d", &height);

    hypotenus = sqrt((base * base) + (height * height));

    printf("Hypoteneus is %f", hypotenus);

    return 0;
}