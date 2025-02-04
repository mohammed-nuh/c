#include <stdio.h>

int main()
{
    int num1, num2, sum;

    FILE *fptr;
    fptr = fopen("nos.txt", "r");

    fscanf(fptr, "%d", &num1);
    fscanf(fptr, "%d", &num2);

    sum = num1 + num2;

    fptr = fopen("nos.txt", "w");

    fprintf(fptr, "%d", sum);

    return 0;
}