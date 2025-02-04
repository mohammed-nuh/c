#include <stdio.h>

int main()
{
    char ch;

    FILE *fptr;
    fptr = fopen("word.txt", "r");

    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));

    fptr = fopen("word.txt", "w");
    fputc('B', fptr);
    fputc('O', fptr);
    fputc('O', fptr);
    fputc('K', fptr);

    return 0;
}