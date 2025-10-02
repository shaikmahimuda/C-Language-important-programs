#include <stdio.h>
#include <string.h>
int main() {
    char str[100];  // string input
    int i, len;
    printf("Enter a string: ");
    scanf("%s", str);  // simple input (no spaces)
    len = strlen(str); // length of string
    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]); // print characters from end
    }
    printf("\n");
    return 0;
}
