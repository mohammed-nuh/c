#include <stdio.h>

void reverseArray(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Nums Array: ");
    printArray(nums, size);

    reverseArray(nums, size);

    printf("\n\nReversed Nums Array: ");
    printArray(nums, size);
    return 0;
}

void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstVal = arr[i];
        int secVal = arr[n - 1 - i];
        arr[i] = secVal;
        arr[n - 1 - i] = firstVal;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}