void modify(union Data *d)
{              // Passed by reference
    d->x = 20; // Modifies original
}

int main()
{
    union Data d;
    d.x = 10;

    modify(&d);
    printf("Value after function call: %d\n", d.x); // Now 20

    return 0;
}
