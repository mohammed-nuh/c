#include <stdio.h>

struct std_details
{
    char name[10];
    int age;
    float perc;
};

int main()
{
    struct std_details sd;

    printf("Enter name: ");
    gets(sd.name);

    printf("\nEnter age: ");
    scanf("%d", &sd.age);

    printf("\nEnter perc: ");
    scanf("%f", &sd.perc);

    FILE *fptr;
    fptr = fopen("std.txt", "w");

    if (fptr == NULL)
    {
        printf("File doesnt exist!\n");
    }

    fprintf(fptr, "std name: %s\n", sd.name);
    fprintf(fptr, "std age: %d\n", sd.age);
    fprintf(fptr, "std perc: %f\n", sd.perc);

    fclose(fptr);
    return 0;
}