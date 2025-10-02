#include <stdio.h>
int main() {
    int n, original, remainder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        remainder = n % 10;           // get last digit
        sum = sum + (remainder * remainder * remainder); // cube
        n = n / 10; }                  // remove last digit
    if (sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);
    return 0;
}
// What is an Armstrong Number?

// A number is called an Armstrong number (or Narcissistic number) if the sum of its digits
//  raised to the power of the number of digits equals the number itself.

// Examples:

// 153 → 1³ + 5³ + 3³ = 153 ✅

// 9474 → 9⁴ + 4⁴ + 7⁴ + 4⁴ = 9474 ✅

// 123 → 1³ + 2³ + 3³ = 36 ❌

// 🔹 Algorithm (Step-by-Step)

// Read the number.

// Count total digits d.

// Extract each digit, raise it to power d, and sum.

// If sum == original number → Armstrong number.
