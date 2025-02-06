#include <stdio.h>

int main()
{
    int a = 6, b = 8; // Binary: a = 0110, b = 1000

    printf("Bitwise OR (a | b): %d\n", a | b);    // 0110 | 1000 = 1110 (14)
    printf("Bitwise AND (a & b): %d\n", a & b);   // 0110 & 1000 = 0000 (0)
    printf("Bitwise XOR (a ^ b): %d\n", a ^ b);   // 0110 ^ 1000 = 1110 (14)
    printf("Bitwise NOT (~a): %d\n", ~a);         // ~0110 = 1001 (in 2's complement: -7)
    printf("Left Shift (a << 1): %d\n", a << 1);  // 0110 << 1 = 1100 (12)
    printf("Right Shift (b >> 1): %d\n", b >> 1); // 1000 >> 1 = 0100 (4)

    return 0;
}