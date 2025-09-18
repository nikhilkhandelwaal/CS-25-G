#include<stdio.h>

int main() {

    int count, entry, largest = 0;
    printf("Enter number of Entries: ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++) {
        printf("Enter your %d entry: ", i);
        scanf("%d", &entry);

        if (entry > largest) {
            largest = entry;
        }
    }
    // Largest = 35

    printf("Largest value is %d\n", largest);

    return 0;
}