#include <stdio.h>

int main()
{
    char ch[] = "Watermelon is Juicy";

    FILE *fptr;
    fptr = fopen("Sample.txt", "w");

    if (fptr == NULL)
    {
        printf("File doesnt exist!\n");
    }

    for (int i = 0; ch[i] != '\0'; i++)
    {
        fputc(ch[i], fptr);
        // fprintf(fptr, "%c", ch[i]);
    }

    fclose(fptr);
    return 0;
}