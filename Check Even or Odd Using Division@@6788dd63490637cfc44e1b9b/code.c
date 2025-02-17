#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is even or odd using division
    if (num / 2 * 2 == num) {
        printf("Even.\n");
    } else {
        printf("Odd.\n");
    }

    return 0;
}
