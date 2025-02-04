#include <stdio.h>

int main()
{
    char ch;

    FILE *fptr;
    fptr = fopen("Sample.txt", "a");

    if (fptr == NULL)
    {
        printf("File doesnt exist!\n");
    }

    fprintf(fptr, " %c", 'P');
    fprintf(fptr, "%c", 'E');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'C');
    fprintf(fptr, "%c", 'I');
    fprintf(fptr, "%c", 'L');

    fclose(fptr);
    return 0;
}