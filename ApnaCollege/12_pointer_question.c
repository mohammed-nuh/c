#include <stdio.h>

int main()
{
    int x, *ptr;
    x = 0;

    ptr = &x;

    printf("%d\n", x);
    printf("%d\n", *ptr);

    *ptr = 5;
    printf("%d\n", x);
    printf("%d\n", *ptr);

    *ptr += 2;
    printf("%d\n", x);
    printf("%d\n", *ptr);

    (*ptr)++;
    printf("%d\n", x);
    printf("%d\n", *ptr);
    return 0;
}