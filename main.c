#include <stdio.h>

int main() {
    int n, i;

    // Taking user input
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Printing the multiplication table
    printf("Multiplication table of %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
