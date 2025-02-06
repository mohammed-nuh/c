#include <stdio.h>

int main()
{
    int num;
    float fnum;
    char ch;
    char str[100];

    // printf() - Print formatted output
    printf("Enter an integer: ");

    // scanf() - Read formatted input
    scanf("%d", &num);
    printf("You entered: %d\n", num);

    printf("Enter a floating-point number: ");
    scanf("%f", &fnum);
    printf("You entered: %.2f\n", fnum);

    printf("Enter a character: ");
    scanf(" %c", &ch); // Space before %c to consume the newline
    printf("You entered: %c\n", ch);

    printf("Enter a string (no spaces): ");
    scanf("%s", str); // Reads a word (stops at space)
    printf("You entered: %s\n", str);

    // sprintf() - Store formatted output in a string
    char buffer[100];
    sprintf(buffer, "Integer: %d, Float: %.2f, Char: %c, String: %s", num, fnum, ch, str);
    printf("Formatted string using sprintf(): %s\n", buffer);

    return 0;
}
