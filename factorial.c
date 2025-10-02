#include <stdio.h>
int main() {
    int n, i;
    int fact = 1; // factorial result
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact = fact * i; // multiply step by step
        }
        printf("Factorial of %d = %d\n", n, fact);
    }
    return 0;
}

