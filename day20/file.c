#include <stdio.h>

int main() {

    FILE* fPtr;
    char name[100];
    int age;
    float height;

    fPtr = fopen("test.txt", "r");

    if (fPtr == NULL) {
        printf("File not availbale");
        return 0;
    }
    else {
        // printf("File is availbale");
        // fprintf(fPtr, "%s\t%d\t%f\n", "Hello1", 30, 4.5);
        fscanf(fPtr, "%s %d %f", name, &age, &height);
        printf("%s\t%d\t%f\n", name, age, height);
    }


    fclose(fPtr);

    return 0;
}

/*
   Types of Files
        Text Files
        Binary Files

    Operation in Files
        Read Data
        Write Data
        Append Data

*/