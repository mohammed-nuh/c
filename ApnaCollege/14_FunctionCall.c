#include <stdio.h>

// Function Call -> 2 Types
// 1. Call By Value
// 2. Call By Reference

void cube(int n);
void _cube(int *n);

int main()
{
    int num = 3;
    // 1. Call by Value
    cube(num);
    printf("Number = %d\n", num);

    // 2. Call By Reference
    _cube(&num);
    printf("Number = %d\n", num);
    return 0;
}

void cube(int n)
{
    n = n * n;
    printf("cube = %d\n", n);
}

void _cube(int *n)
{
    *n = (*n) * (*n);
    printf("cube = %d\n", *n);
}