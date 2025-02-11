#include <stdio.h>

// Function that takes two integers and returns their sum
int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Declare a function pointer that matches the add function's signature
    int (*func_ptr)(int, int);

    func_ptr = add; // Assign function address

    int result = func_ptr(5, 3); // Call function via pointer
    printf("Sum: %d\n", result);

    return 0;
}
