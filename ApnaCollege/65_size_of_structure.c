#include <stdio.h>

struct Example
{
    char a; // 1 byte
    int b;  // 4 bytes (needs alignment)
    char c; // 1 byte
};

int main()
{
    printf("Size: %lu\n", sizeof(struct Example));
    return 0;
}
