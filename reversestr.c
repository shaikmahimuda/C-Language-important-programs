#include <stdio.h>
int main() {
    char str[100];
    int start = 0, end = 0;
    // Input string
    printf("Enter a string: ");
    scanf("%s", str);   // (reads single word)
    // Find length of string manually
    while (str[end] != '\0') {
        end++;
    }
    end--; // last character index
    // Reverse using swapping
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}
