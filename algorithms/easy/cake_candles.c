#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int candles[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &candles[i]);
    }

    int count = 0;
    int largest = 0;

    for (int i = 0; i < size; i++)
    {
        if (candles[i] > largest)
        {
            largest = candles[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (candles[i] == largest)
        {
            count++;
        }
    }

    printf("%d", count);

}
