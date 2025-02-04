#include <stdio.h>

void printString(char arr[]);
int countLength_String(char arr[]);

int main()
{
    char name[] = {'N', 'U', 'H', '\0'};
    char first_name[] = "MOHAMMED NUH";
    char last_name[] = "ABUHUSEINA";
    char message[20];

    printf("Lenght of first_name is: %d\n", countLength_String(first_name));
    printf("Lenght of last_name is: %d\n", countLength_String(last_name));

    printf("Enter Message: ");
    scanf("%s", message);
    printf("%s ", message);

    printString(first_name);
    printString(last_name);

    return 0;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf(" ");
}

int countLength_String(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

// To check whether compiler adds null character or not
// for (int i = 0; i < 4; i++)
// {
//     printf("%c ", first_name[i]);
// }