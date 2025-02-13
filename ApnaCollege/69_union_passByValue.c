#include <stdio.h>

union Data
{
    int intVal;
    float floatVal;
};

void printUnionByValue(union Data d)
{
    d.intVal = 20; // This change does not affect the original union
    printf("Inside function (pass by value): %d\n", d.intVal);
}

int main()
{
    union Data data;
    data.intVal = 10;

    printUnionByValue(data);
    printf("Outside function: %d\n", data.intVal); // Still 10

    return 0;
}
