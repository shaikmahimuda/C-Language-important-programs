#include <stdio.h>
int main() {
    int x, y, i;
    long result = 1;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);
    for (i = 1; i <= y; i++) {
        result = result * x; // multiply x, y times
    }
    printf("%d^%d = %ld\n", x, y, result);
    return 0;
}
