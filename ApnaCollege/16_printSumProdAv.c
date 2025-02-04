#include <stdio.h>

int calc(float a, int b, int *sum, int *prod, float *av);

int main()
{
    float a = 5;
    int b = 10, sum, prod;
    float av;

    calc(a, b, &sum, &prod, &av);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", prod);
    printf("Average: %.1f\n", av);
    return 0;
}

int calc(float a, int b, int *sum, int *prod, float *av)
{
    *sum = a + b;
    *prod = a * b;
    *av = (a + b) / 2;
}