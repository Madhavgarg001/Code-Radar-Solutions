#include <stdio.h>

int main() {
    char c;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &c);

    // Check if the character is a vowel (both lowercase and uppercase)
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("The character is a vowel.\n");
    }
    // Otherwise, it must be a consonant
    else {
        printf("The character is a consonant.\n");
    }

    return 0;
}

