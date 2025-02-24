#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("Vowel\n");
    }
    else if(ch>="a" && ch<="z" || ch>="A" && ch<="Z"){
        printf("Consonant\n");
    }
    else if(ch>=0 && ch<=9){
        printf("Digit\n");
    }
    else{
        printf("Special Character");
    }
    return 0;
}

