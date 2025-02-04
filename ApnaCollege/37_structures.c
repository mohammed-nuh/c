#include <stdio.h>
#include <string.h>

struct car
{
    char name[20];
    char company[20];
    char color[20];
    int model;
};

int main()
{
    // one by one assigning using dot operator
    struct car c1;
    strcpy(c1.name, "Triber");
    strcpy(c1.company, "Renault");
    strcpy(c1.color, "Black");
    c1.model = 2024;

    printf("Car1 Details: \n");
    puts(c1.name);
    puts(c1.company);
    puts(c1.color);
    printf("%d", c1.model);

    // assigning in one go
    struct car c2 = {"Eon", "Hyundai", "White", 2008};
    printf("\n\nCar2 Details: \n");
    puts(c2.name);
    puts(c2.company);
    puts(c2.color);
    printf("%d", c2.model);

    return 0;
}