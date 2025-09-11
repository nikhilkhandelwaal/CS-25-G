#include<stdio.h>
int main() {

    char letter;
    printf("Enter charactor: ");
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        printf("It is Vowel");
    }
    else {
        printf("It is Consonant");

    }

    return 0;
}