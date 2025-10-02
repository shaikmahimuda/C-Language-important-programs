#include<stdio.h>
int main(){
    int a=20, b=30;
    printf("Before swapping: a=%d, b=%d\n", a, b);
    a += b; // a now becomes 50
    b = a-b; // b becomes 20
    a = a - b; // a becomes 
    printf("After swapping: a=%d, b=%d\n", a, b);
    return 0;
}