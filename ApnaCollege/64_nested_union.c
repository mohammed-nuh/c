#include <stdio.h>

union Inner
{
    int x;
    float y;
};

union Outer
{
    char name[20];
    union Inner data; // Nested union
};

int main()
{
    union Outer obj;

    obj.data.x = 10; // Setting value for x
    printf("X: %d\n", obj.data.x);

    obj.data.y = 5.5; // Overwrites x
    printf("Y: %.2f\n", obj.data.y);

    return 0;
}
