#include <stdio.h>
// Recursive function to find sum of digits
int sumOfDigits(int n) {
    if (n == 0)          // Base condition
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10); // Recursive call
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d = %d\n", num, sumOfDigits(num));
    return 0;
}
