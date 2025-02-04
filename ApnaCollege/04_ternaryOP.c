#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);
    bool isAdult = age >= 18 ? true : false;
    if (isAdult)
    {
        printf("You are adult.");
    }
    else
    {
        printf("You are kido.");
    }
}