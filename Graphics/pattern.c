#include <stdio.h>

int main()
{
    int val = 1;
    for (int i = 5; i >= 1; i--)
    {
        for (int k = 4; k >= i; k--)
        {
            printf("\t");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", val%2);
            val++;
        }
        printf("\n");
    }
}