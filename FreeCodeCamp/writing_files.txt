// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    FILE *fpointer = fopen("C:\\Nuh Coding\\C\\Details.text", "a");

    fprintf(fpointer, "\nUniversity: Amity");

    fclose(fpointer);
}
