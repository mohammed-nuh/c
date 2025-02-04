#include <stdio.h>

int main()
{
    int age = 18;
    int _age = 19;
    int *agePtr = &age;
    int *_agePtr = &_age;

    printf("agePtr: %u\n", agePtr);
    printf("_agePtr: %u\n", _agePtr);

    printf("Difference: %u\n", agePtr - _agePtr);
    _agePtr = &age;
    printf("Comparision: %u", agePtr = _agePtr);

    return 0;
}