#include <stdio.h>

int sum(int n);
int factorial(int n);

int main()
{
    int n = 5;

    printf("Sum of first %d natural numbers is: %d\n", n, sum(n));
    printf("Factorial %d is: %d", n, factorial(n));

    return 0;
}

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int sumNm1 = sum(n - 1);
        int sumN = sumNm1 + n;
        return sumN;
    }
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        int factorialNm1 = factorial(n - 1);
        int factorialN = factorialNm1 * n;
        return factorialN;
    }
}

/*
sum(4) + 5
sum(3) + 4 + 5
sum(2) + 3 + 4 + 5
sum(1) + 2 + 3 + 4 + 5
sum(0) + 1 + 2 + 3 + 4 + 5
0 + 1 + 2 + 3 + 4 + 5
*/