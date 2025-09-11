#include<stdio.h>
int main() {

    int devicesOn; // 15
    printf("Enter number of devices which are on: ");
    scanf("%d", &devicesOn);

    if (devicesOn % 2 == 0) { // 15%2==0 => 1==0
        printf("Even Devices are On");
    }
    else {
        printf("Odd Devices are On");
    }

    return 0;
}