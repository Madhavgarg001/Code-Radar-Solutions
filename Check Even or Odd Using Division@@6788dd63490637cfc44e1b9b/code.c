#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num / 2 * 2 == num) {
        printf("Even.\n");
    } else {
        printf("Odd.\n");
    }
    return 0;
}
