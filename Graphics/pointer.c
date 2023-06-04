#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a;
    printf("a = %d\n", a);
    *p = 6;
    printf("a = %d\n", a);
}