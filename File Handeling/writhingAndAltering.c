#include <stdio.h>
int main()
{
    FILE *pF = fopen("ff.txt", "r");
    char buffer[255];
    while (fgets(buffer, 255, pF))
    {
        printf("%s\n", buffer);
    }
    fclose(pF);
}