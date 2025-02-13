#include <stdio.h>

void fib_series(int fib[], int size); // through array
void print_fib_series(int fib[], int size);

int fib_nth(int n); // through recursion

int main()
{
    // using array
    int num, nth;
    printf("Enter no to get fibonnaci series: ");
    scanf("%d", &num);

    int fib[num];
    fib_series(fib, num);

    print_fib_series(fib, num);

    // using recursion
    printf("\nEnter no to get nth fibonnaci no: ");
    scanf("%d", &nth);
    printf("%dth no of Fibonacci series is %d", nth, fib_nth(nth));

    return 0;
}

void fib_series(int fib[], int size)
{
    if (size == 1)
    {
        fib[0] = 0;
    }
    else if (size == 2)
    {
        fib[0] = 0;
        fib[1] = 1;
    }
    else
    {
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i < size; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
    }
}

void print_fib_series(int fib[], int size)
{
    printf("Fibonacci Series: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", fib[i]);
    }
}

int fib_nth(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fib_nth(n - 1) + fib_nth(n - 2);
    }
}

/*
0 1 1 2 3
fib_nth(5) => fib_nth(4) + fib_nth(3)
fib_nth(5) => fib_nth(3) + fib_nth(2) + fib_nth(2) + fib_nth(1)
fib_nth(5) => fib_nth(2) + fib_nth(1) + fib_nth(2) + fib_nth(2) + fib_nth(1)
fib_nth(5) => 3
*/