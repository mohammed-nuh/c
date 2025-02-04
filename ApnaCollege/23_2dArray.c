#include <stdio.h>

void storeTable(int arr[][10], int rowNumber, int columns, int number);

int main()
{
    int marks[2][3];

    marks[0][0] = 93;
    marks[0][1] = 98;
    marks[0][2] = 95;

    marks[1][0] = 87;
    marks[1][1] = 82;
    marks[1][2] = 86;

    printf("%d\n\n", marks[0][1]);

    int tables[2][10];
    storeTable(tables, 0, 10, 5);
    storeTable(tables, 1, 10, 6);

    printf("Table 5: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", tables[0][i]);
    }

    printf("\n\nTable 6: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", tables[1][i]);
    }

    return 0;
}

void storeTable(int arr[][10], int rowNumber, int columns, int number)
{
    for (int i = 0; i < columns; i++)
    {
        arr[rowNumber][i] = number * (i + 1);
    }
}