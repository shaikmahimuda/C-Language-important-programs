#include<stdio.h>
void swap(int *a, int *b) {
    int temp;
    temp = *a; // store the value at address a in temp
    *a = *b;   // put the value at address b into address a
    *b = temp; // put the value in temp into address b
}
int main() {
    int x, y;
    printf("Enter value of x: "); 
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y); // pass the address of x and y to the function
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}