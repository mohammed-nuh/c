#include <stdio.h>

// function declaration or prototype
void greet(char name[]);
int square(int num);
int cube(int num);

int main()
{
    char name[] = "Nuh";
    int num = 3;

    greet(name);
    printf("Cube of %d is %d", num, cube(num));

    return 0;
}

void greet(char name[])
{
    printf("Hello, %s!\n", name);
}

int square(int num)
{
    return num * num;
}

int cube(int num)
{
    return num * num * num;
}