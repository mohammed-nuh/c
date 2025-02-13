#include <stdio.h>

int main()
{
    int nums[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int(*ptr)[3] = nums; // Pointer to an array of 3 integers

    printf("First row using (*ptr): ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", (*ptr)[i]); // Accessing first row
    }

    ptr++; // Move to the next row

    printf("\nSecond row using (*ptr): ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", (*ptr)[i]); // Accessing second row
    }

    return 0;
}
