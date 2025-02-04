// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    FILE *fpointer = fopen("C:\\Nuh Coding\\C\\Details.text", "w");

    fprintf(fpointer, "Name: Nuh\nAge: 18\nPerc 95.4");

    fclose(fpointer);
}