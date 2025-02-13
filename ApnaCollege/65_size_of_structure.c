#include <stdio.h>

struct Example
{
    char a; // 1 byte
    int b;  // 4 bytes (needs alignment)
    char c; // 1 byte
};

int main()
{
    printf("Size: %lu\n", sizeof(struct Example)); // more of equal to sum of all members
    return 0;
}
