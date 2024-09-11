#include <stdio.h>

int main() {
    printf("Enter a character to check if a character is vowel or consonant: ");
    char iC;
    scanf("%c", &iC);

    if (iC == 'a' || iC == 'A' || iC == 'e' || iC == 'E' || iC == 'i' || iC == 'I' || iC == 'o' || iC == 'O' || iC == 'u' || iC == 'U') {
        printf("The Character entered is vowel \n");
    } else {
        printf("The Character entered is consonant \n");
    }
}