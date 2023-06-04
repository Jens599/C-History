#include <stdio.h>

int main()
{
    int i;
    printf("The first 13 terms of the Fibonacci sequence are:\n");
    for (i = 0; i < 13; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}