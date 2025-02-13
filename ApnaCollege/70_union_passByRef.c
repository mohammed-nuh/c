#include <stdio.h>

union Data
{
    int intVal;
    float floatVal;
};

void printUnionByReference(union Data *d)
{
    d->intVal = 20; // This change affects the original union
    printf("Inside function (pass by reference): %d\n", d->intVal);
}

int main()
{
    union Data data;
    data.intVal = 10;

    printUnionByReference(&data);
    printf("Outside function: %d\n", data.intVal); // Now 20

    return 0;
}
