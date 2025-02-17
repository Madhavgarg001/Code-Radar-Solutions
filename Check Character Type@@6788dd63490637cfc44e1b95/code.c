#include <stdio.h>
#include <ctype.h>

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
    // Check if the character is a consonant (alphabetic but not a vowel)
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("The character is a consonant.\n");
    }
    // Check if the character is a digit
    else if (c >= '0' && c <= '9') {
        printf("The character is a digit.\n");
    }
    // Otherwise, it must be a special character
    else {
        printf("The character is a special character.\n");
    }

    return 0;
}
