#include <stdio.h>
int main() {
    char str[100];
    int i = 0, vowelCount = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);   // reads full line including spaces
    while (str[i] != '\0') {
        char ch = str[i];
        // check for vowels (both uppercase & lowercase)
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            vowelCount++;
        }
        i++;
    }
    printf("Number of vowels = %d\n", vowelCount);
    return 0;
}
