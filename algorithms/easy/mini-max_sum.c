#include <stdio.h>

int main()
{
    long long int arr[5], min, max, temp;

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    max = 0;

    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            for (int c = 0; c < n; c++)
            {
                for (int d = 0; d < n; d++)
                {
                    if (a != b && a != c && a != d && b != c && b != d && c != d)
                    {
                        temp = arr[a] + arr[b] + arr[c] + arr[d];

                        if (max < temp) {
                            max = temp;
                        }

                        if (min == 0) // We need to assign a max value of min with which we will compare it. If we take an infinitely large number the user can enter a number +1 of that then our code will fail.
                        {
                            min = max;
                        }

                        if (min > temp)\
                        {
                            min = temp;
                        }
                    }
                }
            }
        }
    }

    printf("%lld ", min);
    printf("%lld", max);

    return 0;
}
