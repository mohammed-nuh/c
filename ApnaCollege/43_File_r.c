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

    fscanf(fptr, "%c", &ch);
    printf("%c", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c", ch);

    fclose(fptr);
    return 0;
}