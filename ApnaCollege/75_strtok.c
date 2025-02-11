#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello,World,This,is,C";
    char *token = strtok(str, ","); // First call

    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, ","); // Subsequent calls
    }

    return 0;
}
