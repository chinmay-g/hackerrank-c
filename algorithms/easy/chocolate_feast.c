#include <stdio.h>

int chocolateFeast(int n, int c, int m)
{
    int bars = n / c;
    int wrappers = bars;

    while (wrappers >= m)
    {
        int newBars = wrappers / m;
        bars += newBars;
        wrappers = wrappers % m + newBars;
    }

    return bars;
}

int main()
{
    int testCases;
    scanf("%d", &testCases);

    int bars[testCases];

    for (int i = 0; i < testCases; i++)
    {
        int n, c, m;
        scanf("%d %d %d", &n, &c, &m);
        bars[i] = chocolateFeast(n, c, m);
    }

    for (int i = 0; i < testCases; i++)
    {
        printf("%d\n", bars[i]);
    }
}
