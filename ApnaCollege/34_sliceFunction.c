#include <stdio.h>
#include <string.h>

void slice(char str[], int start, int end);

int main()
{
    char name[] = "Mohammed Nuh";
    puts(name);
    slice(name, 4, 7);
    return 0;
}

void slice(char str[], int start, int end)
{
    char slicedStr[20];
    int i, j;
    for (i = start, j = 0; i <= end; i++, j++)
    {
        slicedStr[j] = str[i];
    }
    slicedStr[j] = '\0';

    puts(slicedStr);
}