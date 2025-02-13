#include <stdio.h>

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    printf("%d ", *(nums + 2)); // 3
    printf("%d ", *(nums + 5)); // garbage value (random data from memory)
    return 0;
}