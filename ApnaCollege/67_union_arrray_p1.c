#include <stdio.h>

union Data
{
    int id;
    float score;
};

int main()
{
    union Data students[3]; // Array of 3 unions

    // Assign values to each union in the array
    students[0].id = 101;     // First student's ID
    students[1].score = 85.5; // Second student's score
    students[2].id = 102;     // Third student's ID

    // Access values
    printf("Student 1 ID: %d\n", students[0].id);
    printf("Student 2 Score: %.2f\n", students[1].score);
    printf("Student 3 ID: %d\n", students[2].id);

    return 0;
}
