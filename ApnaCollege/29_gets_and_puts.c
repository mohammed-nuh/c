#include <stdio.h>

int main()
{
    char full_name[10];

    printf("Enter You full name: ");
    gets(full_name); // dangerous and outdated sice it can cause buffer overflow, it has no size parameter
    // fgets(full_name, 12, stdin);

    printf("Full name: ");
    puts(full_name);
    printf("%s", full_name);

    return 0;
}