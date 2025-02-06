#include <stdio.h>

int main()
{
    char input[] = "42 3.14 A Hello";
    int num;
    float pi;
    char ch;
    char str[20];

    char Buffer1[10];
    char Buffer2[10];

    sprintf(Buffer1, "This is too long!"); // Writes beyond 10 bytes → buffer overflow
    printf("%s\n", Buffer1);

    snprintf(Buffer2, sizeof(Buffer2), "This is too long!");
    printf("%s\n", Buffer2); // Truncated output, preventing overflow

    // sscanf() reads data from the input string
    sscanf(input, "%d %f %c %s", &num, &pi, &ch, str);

    // Display extracted values
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", pi);
    printf("Character: %c\n", ch);
    printf("String: %s\n", str);

    return 0;
}
