/*
 * p: the price of the first game
 * d: the discount from the previous game price
 * m: the minimum cost of a game
 * s: the starting budget
*/

#include <stdio.h>

int howManyGames(int p, int d, int m, int s)
{
    int count = 0;

    while (s >= p) // If money is there or not
    {
        if (s == p) // If game price = minimum cost
        {
            count++;
            s = s - p;
        }
        else
        {
            count++;
            s = s - p; // Game bought > Deducting money
            if ((p-d) >= m) // If price of next game > minimum cost of a game
            {
                p = p - d;
            }
            else // Otherwise set the price of the game to minimum cost of a game
            {
                p = m;
            }
        }
    }

    return count;
}

int main()
{
    int p, d, m, s;
    scanf("%d %d %d %d", &p, &d, &m, &s);

    printf("%d", howManyGames(p, d, m, s));
}
