#include <stdio.h>

int main()
{
    int row1[] = {1, 2, 3};
    int row2[] = {4, 5, 6};
    int *ptr[] = {row1, row2}; // Array of pointers to integer arrays

    printf("First row using ptr[]: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", ptr[0][i]); // Access first row
    }

    printf("\nSecond row using ptr[]: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", ptr[1][i]); // Access second row
    }

    return 0;
}
