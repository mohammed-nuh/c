#include <stdio.h>

int main()
{
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    char cannotChange[] = "Hello World";
    // cannotChange = "Hello";   this wont work (compile time error)
    return 0;
}