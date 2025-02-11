#include <stdio.h>

struct Data
{
    int id;
    float value;
};

int main()
{
    struct Data d1 = {1, 99.5}, d2;
    FILE *file = fopen("data.bin", "wb"); // Write binary mode
    fwrite(&d1, sizeof(struct Data), 1, file);
    fclose(file);

    file = fopen("data.bin", "rb"); // Read binary mode
    fread(&d2, sizeof(struct Data), 1, file);
    fclose(file);

    printf("ID: %d, Value: %.2f\n", d2.id, d2.value);
    return 0;
}
