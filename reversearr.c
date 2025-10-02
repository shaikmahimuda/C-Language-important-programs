#include <stdio.h>
int main() {
    int n, i;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Two pointers: start and end
    int start = 0, end = n - 1;
    while (start < end) {
        // swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;   // move forward
        end--;     // move backward
    }
    // Print reversed array
    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
