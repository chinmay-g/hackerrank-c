#include <stdio.h>
#include <math.h>

int squares(int a, int b)
{
    float squareRoot;
    int count = 0;

    for (int i = a; i <= b; i++)
    {
        squareRoot = sqrt(i);
        for (int j = 0; j <= b; j++) // Checking if the value of sqareRoot is equal to any integer given in the range; if YES, it is a perfect Square Root
        {
            if (j == squareRoot)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int size;
    scanf("%d", &size);

    int answer[size];
    int a, b;

    for (int i = 0; i < size; i++)
    {
        scanf("%d %d", &a, &b);
        answer[i] = squares(a, b);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", answer[i]);
    }
}
