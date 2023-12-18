#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);

    int input[n];
    int output[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (input[i] > 37)
        {
            x = input[i];

            for (int j = 1; j < 5; j++)
            {
                if (x % 5 != 0)
                {
                    x++;
                }
            }

            if ((x - input[i]) < 3)
            {
                output[i] = x;
            }
            else
            {
                output[i] = input[i]
            }
        }
        else
        {
            output[i] = input[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", output[i]);
    }

}
