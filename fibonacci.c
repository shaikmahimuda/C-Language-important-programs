// #include<stdio.h>
// int main(){
//     int a=0,b=1,num=10,i,c;
//     for ( i = 0; i <=num; i++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//         printf("%d\n",c);
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;  // sum of last two numbers
        a = b;         // shift
        b = next;          // shift
    }
    return 0;
}
