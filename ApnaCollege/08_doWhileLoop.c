#include <stdio.h>

int main()
{
    int num;
    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("Escaped! you entered %d\n", num);
    return 0;
}