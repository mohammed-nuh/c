#include <stdio.h>

int main()
{
    int num;

    FILE *fptr;
    fptr = fopen("nos.txt", "r");

    if (fptr == NULL)
    {
        printf("File doesnt exist!\n");
    }

    while (fscanf(fptr, "%d", &num) != EOF)
    {
        printf("%d\t", num);
    }

    fclose(fptr);
    return 0;
}