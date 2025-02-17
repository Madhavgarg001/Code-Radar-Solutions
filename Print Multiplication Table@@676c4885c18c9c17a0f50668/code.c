#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);  // Correct format specifier

    for (int i = 1; i <= 10; i++) {  // Fix the comparison operator
        printf("%d x %d = %d\n", a, i, a * i);
    }

    return 0;
}
