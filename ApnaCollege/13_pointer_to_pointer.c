#include <stdio.h>

int main()
{
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d\n", *ptr);
    printf("%p\n", &i);
    printf("%p\n", *pptr);
    printf("%d", **pptr);
    return 0;
}