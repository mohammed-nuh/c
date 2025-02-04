#include <stdio.h>

void swapNums_NotWorking(int a, int b);
void swapNums(int *a, int *b);

int main()
{
    int a = 5, b = 10;
    // nos before swapping
    printf("Numbers: %d %d\n", a, b);

    // nos after swapping through swapNums_NotWorking
    swapNums_NotWorking(a, b);
    printf("Numbers: %d %d\n", a, b);

    // nos after swapping through swapNums
    swapNums(&a, &b);
    printf("Numbers: %d %d\n", a, b);
    return 0;
}

void swapNums_NotWorking(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapNums(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
