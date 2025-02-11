#include <stdio.h>

union Data
{
    int id;
    float score;
};

int main()
{
    // Initializing an array of unions using curly brackets
    union Data students[3] = {
        {.id = 101},     // First student initialized with ID
        {.score = 85.5}, // Second student initialized with score
        {.id = 102}      // Third student initialized with ID
    };

    // Accessing the values
    printf("Student 1 ID: %d\n", students[0].id);
    printf("Student 2 Score: %.2f\n", students[1].score);
    printf("Student 3 ID: %d\n", students[2].id);

    return 0;
}
