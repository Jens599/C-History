#include <stdio.h>
int main()
{
    int n, t;
    printf("no of terms: ");
    scanf("%d", &n);
    int *nums = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
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
    printf("\nLargest: %d\n", nums[n - 1]);
    printf("\nSmallest: %d\n", nums[0]);
}