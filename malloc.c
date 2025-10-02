#include <stdio.h>
#include <stdlib.h>  // for malloc() and free()
int main() {
    int *arr;    // pointer to hold base address
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // allocate memory for n integers using malloc
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {  // check if allocation failed
        printf("Memory allocation failed!\n");
        return 1;
    }
    // input values
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);   // same as &arr[i]
    }
    // output values
    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));  // same as arr[i]
    }
    printf("\n");
    // free memory after use
    free(arr);
    return 0;
}
