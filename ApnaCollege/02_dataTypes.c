#include <stdio.h>

int main()
{
    int a = 10;
    const float pi = 3.14;
    char grade = 'A';
    char name[] = "Nuh";
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    printf("The value of a is: %d\n", a);
    printf("The value of pi is: %.3f\n", pi);
    printf("The grade is: %c\n", grade);
    printf("The name is: %s\n", name);

    printf("The numbers in the array are: ");
    for (int i = 0; i < length; i++)
    {
        printf("Num [%d] = %d ", i, numbers[i]);
    }
    printf("\n");

    return 0;
}