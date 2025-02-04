#include <stdio.h>

struct car
{
    char name[20];
    char company[20];
    char color[20];
    int model;
};

void printCarDetails(struct car c);
void _printCarDetails(struct car *ptr);

int main()
{
    struct car c1 = {"Triber", "Renault", "Black", 2020};
    struct car c2 = {"Eon", "Hyundai", "White", 2008};

    printCarDetails(c1);
    _printCarDetails(&c2);

    printf("%d\n", c1.model);
    printf("%d", c2.model);

    return 0;
}

void printCarDetails(struct car c)
{
    printf("Name: %s\n", c.name);
    printf("Company: %s\n", c.company);
    printf("Color: %s\n", c.color);
    printf("Model: %d\n\n", c.model);

    c.model = 2024;
}

void _printCarDetails(struct car *ptr)
{
    printf("Name: %s\n", ptr->name);
    printf("Company: %s\n", ptr->company);
    printf("Color: %s\n", ptr->color);
    printf("Model: %d\n\n", ptr->model);

    ptr->model = 2009;
}