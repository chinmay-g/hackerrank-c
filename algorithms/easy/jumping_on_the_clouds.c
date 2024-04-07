#include <stdio.h>

int main()
{
    // Total number of clouds
    int n;
    scanf("%d", &n);

    // Array of clouds
    int c[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &c[i]);
    }

    int jump = 0;

    // Print the number of jumps // 0 0 1 0 0 1 0
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            break;
        }
        else
        {
            if (c[i] == 0)
            {
                if (c[i + 1] == 0)
                {
                    if (c[i + 2] == 0)
                    {
                        jump++;
                        i = i + 1;
                    }
                    else // if (c[i + 2] == 1)
                    {
                        jump++;
                    }
                }
                else if (c[i + 1] == 1)
                {
                    if (c[i + 2] == 0)
                    {
                        jump++;
                        i = i + 1;
                    }
                }
            }
        }
    }

    printf("%d", jump);

}
