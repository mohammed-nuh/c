#include <stdio.h>
#include <string.h>

void saltPass(char pass[]);

int main()
{
    char pass[20];
    gets(pass);
    saltPass(pass);

    return 0;
}

void saltPass(char pass[])
{
    char salt[] = "XYZ";
    char newPass[50];
    strcpy(newPass, pass);
    strcat(newPass, salt);

    puts(newPass);
}