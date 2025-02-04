#include <stdio.h>
#include <string.h>

void checkChar(char str[], char ch);

int main()
{
    char yourStr[50];
    char ch;

    printf("Enter String: ");
    gets(yourStr);
    printf("Enter Character: ");
    scanf("%c", &ch);

    checkChar(yourStr, ch);

    return 0;
}

void checkChar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("%c is found in the string.\n", ch);
            return;
        }
    }
    printf("%c is not found in the string.\n", ch);
}