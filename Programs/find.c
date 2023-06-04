#include <stdio.h>
int main()
{
    int numbers[7] = {1, 2, 12, 40, 55, 61, 7};
    int a = 7;
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == a)
        {
            printf("Found\n");
            break;
        }
        printf("Not Found\n");
    }
}
