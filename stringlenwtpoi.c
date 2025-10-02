#include <stdio.h>
int stringLength(char *str) {
    char *start = str;   // keep base address
    while (*str) {       // loop until null char
        str++;           // move pointer
    }
    return str - start;  // difference = length
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Length: %d\n", stringLength(str));
    return 0;
}
