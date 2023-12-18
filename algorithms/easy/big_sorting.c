#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    unsigned long long num[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%llu", &num[i]);
    }

    // Sorting
    unsigned long long temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    // Printing
    for (int i = 0; i < size; i++)
    {
        printf("%llu\n", num[i]);
    }
}
