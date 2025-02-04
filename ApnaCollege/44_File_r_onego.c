#include <stdio.h>

int main()
{
    char ch;

    FILE *fptr;
    fptr = fopen("Sample.txt", "r");

    if (fptr == NULL)
    {
        printf("File doesnt exist!\n");
    }

    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    fclose(fptr);
    return 0;
}