#include <stdio.h>

// Function to be pointed to
void greet()
{
    printf("Hello, World!\n");
}

void sayBye()
{
    printf("Bye Bye\n");
}

int main()
{
    void (*func_ptr)(); // Declare a function pointer
    func_ptr = greet;   // Assign function address
    func_ptr();         // Call function via pointer

    func_ptr = sayBye; // Assign function address
    func_ptr();        // Call function via pointer

    return 0;
}
