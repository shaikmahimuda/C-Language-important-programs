#include <stdio.h>
#include <string.h>
// define structure
struct Student {
    int rollNo;
    char name[50];
    float marks;
};
int main() {
    struct Student s1;          // structure variable
    struct Student *ptr = &s1;  // pointer to structure
    // input values using pointer and arrow operator
    ptr->rollNo = 101;
    strcpy(ptr->name, "Mahi");
    ptr->marks = 92.5;
    // print values using pointer
    printf("Student Details:\n");
    printf("Roll No: %d\n", ptr->rollNo);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);
    return 0;
}
