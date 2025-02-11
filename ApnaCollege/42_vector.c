#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} vect; // alias

struct point
{
    int x;
    int y;
} pt; // variable

void calcSum(vect v1, vect v2, vect *sum);

int main()
{
    vect v1 = {5, 8};
    vect v2 = {7, 12};
    vect sum = {0};

    calcSum(v1, v2, &sum);
    printf("%d\n", sum.x);
    printf("%d", sum.y);

    pt.x = -5;
    pt.y = 8;

    printf("\n\n%d", pt.x);
    printf("\n%d", pt.y);

    return 0;
}

void calcSum(vect v1, vect v2, vect *sum)
{
    sum->x = v1.x + v2.x;
    sum->y = v1.y + v2.y;
}