#include <stdio.h>


int main() {
    char c;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &c);

    // Check if the character is a vowel (both lowercase and uppercase)
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("Vowel.\n");
    }
    // Check if the character is a consonant (alphabetic but not a vowel)
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("Consonant.\n");
    }
    // Check if the character is a digit
    else if (c >= '0' && c <= '9') {
        printf("Digit.\n");
    }
    // Otherwise, it must be a special character
    else {
        printf("Special Character.\n");
    }

    return 0;
}
