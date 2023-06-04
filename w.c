#include <stdio.h>

int main()
{
    FILE *f = fopen("test.txt", "w");
    fprintf(f, "Welcome to BCA program");
    fclose(f);
}