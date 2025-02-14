#include <stdio.h>

int main()
{
    int a = 5, b = 2;
    float result;

    result = a / b; // Integer division, result = 2 (not 2.5)

    printf("Without explicit conversion: %f\n", result);

    result = (float)a / b; // Explicit conversion of 'a' to float

    printf("With explicit conversion: %f\n", result);

    return 0;
}