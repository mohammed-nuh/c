#include <stdio.h>

int main()
{
    int age = 18;
    int *agePtr = &age;
    printf("%u\n", agePtr);
    agePtr++;
    printf("%u\n", agePtr);
    agePtr--;
    printf("%u\n", agePtr);

    float weight = 75.6;
    float *weightPtr = &weight;
    printf("%u\n", weightPtr);
    weightPtr++;
    printf("%u\n", weightPtr);
    weightPtr--;
    printf("%u\n", weightPtr);

    char grade = 'A';
    char *gradePtr = &grade;
    printf("%u\n", gradePtr);
    gradePtr++;
    printf("%u\n", gradePtr);
    gradePtr--;
    printf("%u\n", gradePtr);

    return 0;
}