#include <stdio.h>

int main()
{
    int n, k;

    // Input of size and max height
    scanf("%d %d", &n, &k);

    // Input of numbers
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Finding the max number in the array
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Finding the difference between the max height and the max number
    int diff = max - k;

    // If the difference is negative, print 0
    if (diff < 0)
    {
        diff = 0;
    }
    else
    {
        diff = diff;
    }

    printf("%d", diff);
}
