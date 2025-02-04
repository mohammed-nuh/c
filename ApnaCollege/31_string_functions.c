#include <stdio.h>
#include <string.h>

int main()
{
    char message[] = "Hello World";
    printf("Size of array: %zu\n", sizeof(message));

    // 1. strlen()
    printf("Length of message array excluding null character: %d\n", strlen(message)); // u, zu, lu will also work

    // 2. strcpy()
    char oldString[] = "oldStr";
    char newString[] = "newStr";

    strcpy(oldString, newString);

    puts(oldString);

    // 3. strcat()
    char str1[20] = "Hello ";
    char str2[] = "World";

    strcat(str1, str2);

    puts(str1);

    // 4. strcmp()
    char str3[] = "Apple";
    char str4[] = "Banana";
    printf("%d", strcmp(str3, str4));

    return 0;
}
