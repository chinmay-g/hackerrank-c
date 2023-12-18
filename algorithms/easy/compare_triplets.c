#include <stdio.h>

int main()
{
    int a[3];
    int b[3];
    int score1 = 0;
    int score2 = 0;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            score1++;
        }
        else
        {
            if (a[i] == b[i])
            {
                continue;
            }
            else
            {
                score2++;
            }
        }
    }

    printf("%d %d", score1, score2);

}
