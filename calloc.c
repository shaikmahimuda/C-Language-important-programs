#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr;
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // allocate memory for n integers using calloc
    arr = (int*) calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    // input values
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    // output values
    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    // free memory
    free(arr);
    return 0;
}
