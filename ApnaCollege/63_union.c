#include <stdio.h>

union Data
{
    int x;
    float y;
    char ch;
};

int main()
{
    union Data d;

    d.x = 10;
    printf("X: %d\n", d.x);

    d.y = 5.5; // Overwrites x
    printf("Y: %.2f\n", d.y);

    d.ch = 'A'; // Overwrites y
    printf("Character: %c\n", d.ch);

    return 0;
}
