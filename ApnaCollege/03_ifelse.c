#include <stdio.h>

int main()
{
    char name[10];
    printf("Enter your name: ");
    scanf("%s", &name);
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("%s, You are eligible to vote", name);
    }
    else
    {
        printf("%s, You are ineligible to vote", name);
    }
}