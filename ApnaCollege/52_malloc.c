#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(5 * sizeof(int)); // not contiguous

    printf("%p\n", ptr);
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 10;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", ptr[i]);
    }

    ptr = realloc(ptr, 6);

    printf("\n\n%p\n\n", ptr);
    for (int i = 0; i < 6; i++)
    {
        ptr[i] = i + 10;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", ptr[i]);
    }

    free(ptr);

    return 0;
}