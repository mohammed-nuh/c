#include <stdio.h>

struct Address
{
    char city[20];
    int pincode;
};

struct Employee
{
    char name[20];
    struct Address addr; // Nested structure
};

int main()
{
    struct Employee emp = {"John", {"New York", 10001}};

    printf("Name: %s\n", emp.name);
    printf("City: %s\n", emp.addr.city);
    printf("Pincode: %d\n", emp.addr.pincode);

    return 0;
}
