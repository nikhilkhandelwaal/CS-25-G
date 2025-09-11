#include<stdio.h>
int main() {

    int orderSize;
    printf("Enter orderSize: ");
    scanf("%d", &orderSize);

    if (orderSize % 3 == 0 && orderSize % 5 == 0) {
        // 18%3==0 && 18%5==0 => 1 && 0 => 0
        printf("Offer is On");
    }
    else {
        printf("Offer is not Valid");
    }

    return 0;
}