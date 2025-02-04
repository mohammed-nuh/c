#include <stdio.h>

int main()
{
    int age = 18;
    int *ptr = &age;
    int _age = *ptr;

    printf("value of a: %d\n", age);
    printf("value of &a: %p\n", &age);
    printf("value of ptr %p\n", ptr);
    printf("value of *ptr %d\n", *ptr);
    printf("value of &ptr %d\n", &ptr);
    printf("value of _age %d\n", _age);
    printf("value of &_age %d\n", &_age);
    return 0;
}