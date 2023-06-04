#include <stdio.h>

void sort(int nums[], int n);

int main()
{
    int nums[10] = {9, 5, 2, 1, 8, 7, 3, 6, 4, 10};
    int n = 10;

    sort(nums, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

void sort(int nums[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] < nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}