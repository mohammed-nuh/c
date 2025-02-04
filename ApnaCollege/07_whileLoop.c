#include <stdio.h>

int main()
{
    int num = 0;
    while (num <= 10)
    {
        printf("Enter no greater than 10: ");
        scanf("%d", &num);
    }
    printf("You escaped the matrix.");
    return 0;
}