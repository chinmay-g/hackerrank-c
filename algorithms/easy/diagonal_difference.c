#include <stdio.h>

int main()
{
    int n, s1 = 0, s2 = 0, d = 0;
    scanf("%d", &n);

    int matrix[n][n];

    for (int i = 0; i < n; i++) // Rows
    {
        for (int j = 0; j < n; j++) // Columns
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) // For back slash diagonal
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                s1 = s1 + matrix[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) // For forward slash diagonal
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                s2 = s2 + matrix[i][j];
            }
        }
    }

    d = s1 - s2;

    if (d < 0) // If d is negative; we need to print absolute value
    {
        d = -1 * d;
    }

    printf("%d", d);

}
