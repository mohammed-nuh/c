#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum = 0;

    printf("argc = %d\n", argc);

    for (int i = 1; i < argc; i++)
    {
        sum += atoi(argv[i]);
    }

    printf("Sum = %d", sum);
}