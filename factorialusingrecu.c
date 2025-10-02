#include <stdio.h>
// Recursive function to find factorial
int factorial(int n) {
    if (n == 0 || n == 1)  // Base condition
        return 1;
    else
        return n * factorial(n - 1);  // Recursive call
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}
