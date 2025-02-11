#include <stdio.h>

struct Data
{
    int id;
    float value;
};

int main()
{
    struct Data d1[2] = {{1, 99.5}, {2, 45.3}}, d2[2]; // Two structures
    FILE *file;

    // Writing two structures
    file = fopen("data.bin", "wb");           // Open in write-binary mode
    fwrite(d1, sizeof(struct Data), 2, file); // Write both structures
    fclose(file);

    // Reading two structures
    file = fopen("data.bin", "rb");          // Open in read-binary mode
    fread(d2, sizeof(struct Data), 2, file); // Read both structures
    fclose(file);

    // Display the read data
    for (int i = 0; i < 2; i++)
    {
        printf("ID: %d, Value: %.2f\n", d2[i].id, d2[i].value);
    }

    return 0;
}
