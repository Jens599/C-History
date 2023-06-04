#include <stdio.h>
int main()
{

    int numbers[7] = {5,
                      9,
                      4,
                      6,
                      5,
                      8,
                      2},
        temp;

    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("largest:%d\nsmallest:%d", numbers[6], numbers[0]);
}