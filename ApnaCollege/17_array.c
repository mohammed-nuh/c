#include <stdio.h>

int main()
{
    // int marks1 = 93;
    // int marks2 = 98;
    // int marks3 = 85;

    // int marks[] = {93, 98, 85};
    int nums[] = {1, 2, 3};
    printf("%zu", sizeof(nums));

    nums[4] = 10;
    printf("%d\n", nums[4]); // prints 10
    printf("%zu", sizeof(nums));

    // int marks[3];

    // printf("Enter Phy: ");
    // scanf("%d", &marks[0]);

    // printf("Enter Chem: ");
    // scanf("%d", &marks[1]);

    // printf("Enter Maths: ");
    // scanf("%d", &marks[2]);    //if v=&marks[3]  tun time error

    // printf("Marks in 3 Subjects: %d %d %d\n", marks[0], marks[1], marks[2]);

    return 0;
}