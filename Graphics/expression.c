#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);

    double answer = 5 * x * sqrt(pow(y, 2) + 5);
    printf("Answer = %lf", answer);

    return 0;
}
