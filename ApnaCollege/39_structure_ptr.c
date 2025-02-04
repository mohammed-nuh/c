#include <stdio.h>

struct car
{
    char name[20];
    char company[20];
    char color[20];
    int model;
};

int main()
{
    struct car c1 = {"Triber", "Renault", "Blue", 2020};

    printf("model: %d\n", c1.model);

    struct car *ptr = &c1;

    printf("model: %d\n", (*ptr).model);

    printf("model: %d\n", ptr->model);

    return 0;
}