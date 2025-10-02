#include <stdio.h>
#include<string.h>
int main() {
    int  original, reversed = 0, remainder;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        remainder = n % 10;                 // take last digit
        reversed = reversed * 10 + remainder; // build reversed number
        n = n / 10; }                        // remove last digit
    if (original == reversed)
        printf("%d is a Palindrome number\n", original);
    else
        printf("%d is Not a Palindrome number\n", original);
    return 0;
}

