#include <stdio.h>

int main()
{
    char full_name[50];

    printf("Enter You full name: ");
    gets(full_name); // dangerous and outdated sice it can cause buffer overflow, it has no size parameter
    // fgets(full_name, 50, stdin);

    printf("Full name: ");
    puts(full_name);
    printf("%s", full_name);

    return 0;
}