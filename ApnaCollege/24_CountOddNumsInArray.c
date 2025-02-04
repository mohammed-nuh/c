#include <stdio.h>

int countOddNums(int nums[], int n);

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 7, 9};
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\nOdd Numbers in Array: %d", countOddNums(nums, n));

    return 0;
}

int countOddNums(int nums[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 != 0)
        {
            count++;
        }
    }

    return count;
}