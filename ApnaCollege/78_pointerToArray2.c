#include <stdio.h>

int main()
{
    int a[] = {11, 22, 33, 44, 55};
    int(*p)[5];

    printf("%u\n", p);
    int i;
    p = &a;

    printf("%u\n", p);

    printf("%u\n", a);
    printf("%u\n", &a);

    printf("%u\n", **p);

    for (i = 0; i < 5; i++)
    {
        printf("%u\n", *((*p + i)));
    }
}