#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    char ch;

    int i = 0;
    while (ch != '\n')
    {
        scanf("%c", &ch);
        string[i] = ch;
        i++;
    }
    string[i] = '\0';

    // puts(string);
    printf("%s\n", string);

    return 0;
}