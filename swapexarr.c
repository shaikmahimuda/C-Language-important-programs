#include <stdio.h>rev
int main() {
    int n, i;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n], rev[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Copy elements in reverse order
    for (i = 0; i < n; i++) {
        rev[i] = arr[n - 1 - i];
    }
    printf("Reversed array (using extra array):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }
    printf("\n");
    return 0;
}
