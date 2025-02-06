#include <stdio.h>

#define MODE 2 // Change this value to test different cases

int main()
{
#if MODE == 1
    printf("Mode 1 selected\n");
#elif MODE == 2
    printf("Mode 2 selected\n");
#else
    printf("Unknown mode\n");
#endif

    return 0;
}
