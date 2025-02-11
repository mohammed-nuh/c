#include <stdio.h>

union Example
{
    char a;   // 1 byte
    int b;    // 4 bytes
    double c; // 8 bytes
};

int main()
{
    printf("Size of union: %lu\n", sizeof(union Example));
    return 0;
}
