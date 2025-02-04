#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *intPtr;
    float *floatPtr;

    // Allocate memory using calloc
    intPtr = (int *)calloc(5, sizeof(int));
    floatPtr = (float *)calloc(5, sizeof(float));

    // Check if memory allocation was successful
    if (intPtr == NULL || floatPtr == NULL)
    {
        printf("Memory allocation failed\n");
    }

    // Print integer array (initialized to 0)
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", intPtr[i]);
    }
    printf("\n");

    // Print float array (initialized to 0.000000)
    for (int j = 0; j < 5; j++)
    {
        printf("%f\t", floatPtr[j]);
    }
    printf("\n");

    // Free allocated memory
    free(intPtr);
    free(floatPtr);

    return 0;
}
