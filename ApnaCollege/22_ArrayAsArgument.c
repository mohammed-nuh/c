#include <stdio.h>

void printNumbers(int arr[], int n);
void _printNumbers(int *arr, int n);

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    printNumbers(numbers, n);
    _printNumbers(numbers, n);
    return 0;
}

void printNumbers(int arr[], int n)
{
    printf("Numbers through arr[] \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void _printNumbers(int *arr, int n)
{
    printf("Numbers through *arr \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
        // printf("%d\t", *(arr + i));
    }
}