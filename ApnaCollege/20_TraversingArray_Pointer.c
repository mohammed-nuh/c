#include <stdio.h>

int main()
{
    int marks[3];
    int size_of_marks = sizeof(marks) / sizeof(marks[0]);
    int *marksPtr = &marks[0]; // or int *marksPtr = marks;

    // Code for taking input (marks) from user
    for (int i = 0; i < size_of_marks; i++)
    {
        printf("Enter marks %d: ", i);
        scanf("%d", (marksPtr + i));
    }

    // Code for printing elements in marks array
    for (int i = 0; i < size_of_marks; i++)
    {
        printf("Marks %d: ", i);
        printf("%d\n", *(marksPtr + i));
    }
    return 0;
}