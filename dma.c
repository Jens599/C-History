#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int *nums = (int *)calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %dth term: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 10; i++)
        for (int j = i + 1; j < 10; j++)
        {
            if (nums[i] > nums[j])
            {
                t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
            }
        }
    printf("\nLargest: %d\n", nums[9]);
    printf("\nSmallest: %d\n", nums[0]);
}
