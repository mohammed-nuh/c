#include <stdio.h>

typedef int i; // Alias for int

// Define a structure with typedef
typedef struct computerScienceEngineeringStudent
{
    char name[20];
    int rno;
    i age; // 'i' is an alias for 'int'
    float perc;
} cse_std;

int main()
{
    // Initializing using struct name
    struct computerScienceEngineeringStudent std1 = {"Rahul", 1, 20, 90.0};

    // Initializing using typedef alias
    cse_std std2 = {"Rohit", 2, 18, 95.3};

    // Printing details of std1
    printf("Details of std1:\n");
    printf("Name: %s\n", std1.name);
    printf("Roll Number: %d\n", std1.rno);
    printf("Age: %d\n", std1.age);
    printf("Percentage: %.2f%%\n\n", std1.perc);

    // Printing details of std2
    printf("Details of std2:\n");
    printf("Name: %s\n", std2.name);
    printf("Roll Number: %d\n", std2.rno);
    printf("Age: %d\n", std2.age);
    printf("Percentage: %.2f%%\n", std2.perc);

    return 0;
}
