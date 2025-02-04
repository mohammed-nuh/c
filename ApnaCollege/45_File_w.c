#include <stdio.h>

int main()
{
    char ch;

    FILE *fptr;
    fptr = fopen("Sample.txt", "w");

    if (fptr == NULL)
    {
        printf("File doesnt exist!\n");
    }

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');

    fclose(fptr);
    return 0;
}