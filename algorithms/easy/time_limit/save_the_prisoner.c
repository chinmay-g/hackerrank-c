/*
 * n = number of prisoners
 * m = number of candies
 * s = chair from which the distribution will start
 */

#include <stdio.h>

int saveThePrisoner(int n, int m, int s)
{
    int prisonerNo = s-1; // We have to give candy to the prisoner from where we are starting
    for (int i = 0; i < m; i++)
    {
        prisonerNo++;
        if (prisonerNo > n)
        {
            prisonerNo = 1;
        }
    }

    return prisonerNo;
}

int main()
{
    int testCases;
    scanf("%d", &testCases);

    int samples[testCases];
    for (int i = 0; i < testCases; i++)
    {
        int n, m, s;
        scanf("%d %d %d", &n, &m, &s);
        samples[i] = saveThePrisoner(n, m, s);
    }

    for (int i = 0; i < testCases; i++)
    {
        printf("%d\n", samples[i]);
    }
}
