#include <stdio.h>
int main() {
    int n, i, key, found = 0;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    // Linear search logic
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d (index %d)\n", key, i + 1, i);
            found = 1;
            break; // stop after finding first match
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }
    return 0;
}
