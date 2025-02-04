// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char line[255];
    FILE * fpointer = fopen("C:\\Nuh Coding\\C\\Details.text","r");

    fgets(line,255,fpointer);
    printf("%s",line);

    fclose(fpointer);
}
