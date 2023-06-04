#include <stdio.h>

int sum(int);

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    printf("sum= %d", sum(n));
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return (n + sum(n - 1));
}