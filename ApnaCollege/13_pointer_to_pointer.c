#include <stdio.h>

int main()
{
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%p\n", *pptr);
    printf("%d", **pptr);
    return 0;
}