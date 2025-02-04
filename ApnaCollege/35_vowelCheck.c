#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(char str[]);
void toLowerCase(char str[]);

int main()
{
    char brotherName[] = "Usman Pathan";
    toLowerCase(brotherName);
    printf("No of Vowels in brotherName: %d\n", countVowels(brotherName));
    return 0;
}

int countVowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

void toLowerCase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
}