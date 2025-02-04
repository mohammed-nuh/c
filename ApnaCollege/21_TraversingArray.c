#include <stdio.h>

int main()
{
    int marks[3];
    int size_of_marks = sizeof(marks) / sizeof(marks[0]);

    printf("%u\n", marks);
    printf("%u\n", &marks[0]);
    printf("%u\n", &marks[1]);
    printf("%u\n", &marks[2]);

    // Code for taking input (marks) from user
    for (int i = 0; i < size_of_marks; i++)
    {
        printf("Enter marks %d: ", i);
        scanf("%d", &marks[i]);
    }

    // Code for printing elements in marks array
    for (int i = 0; i < size_of_marks; i++)
    {
        printf("Marks %d: ", i);
        printf("%d\n", marks[i]);
    }
    return 0;
}