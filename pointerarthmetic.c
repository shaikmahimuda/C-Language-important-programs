#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // array with 5 integers
    int *ptr;   // pointer to integer
    ptr = arr;  // store address of first element in pointer
    printf("Accessing array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
        // *(ptr + i) means: go i steps forward and take value
    }
    return 0;
}
