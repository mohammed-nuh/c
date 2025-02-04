#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[20];
    int age;
    float perc;
};

int main()
{
    struct student BIO[5];

    // Data for BIO students
    // Manual Assigning
    BIO[0].roll = 1;
    strcpy(BIO[0].name, "Abid");
    BIO[0].age = 18;
    BIO[0].perc = 85.5;

    BIO[1] = (struct student){2, "Sarah", 19, 90.2};
    BIO[2] = (struct student){3, "John", 20, 78.9};
    BIO[3] = (struct student){4, "Emma", 18, 88.3};
    BIO[4] = (struct student){5, "Liam", 19, 82.7};

    // Data for IT students
    struct student IT[5] = {
        {1, "Nuh", 18, 95.4},
        {2, "Usman", 19, 89.2},
        {3, "Zain", 20, 92.1},
        {4, "Isa", 18, 87.5},
        {5, "Omar", 19, 90.3}};

    int size = sizeof(IT) / sizeof(IT[0]);
    printf("IT Students Details: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Rollno:  %d, Name: %s, Age: %d, Perc: %.2f\n", IT[i].roll, IT[i].name, IT[i].age, IT[i].perc);
    }

    return 0;
}