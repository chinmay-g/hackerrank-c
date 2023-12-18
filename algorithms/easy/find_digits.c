#include <stdio.h>

int main()
{
    // Number of numbers
    int size;
    scanf("%d", &size);

    int num[size];
    int count[size];

    // Input numbers
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }

    // Dividing test
    int digit;
    int number;

    for (int i = 0; i < size; i++)
    {
        number = num[i];
        count[i] = 0;
        do
        {
            digit = number % 10;
            if (digit != 0) {
                if (num[i] % digit == 0) // Digit is divisible
                {
                    count[i] = count[i] + 1;
                }
            }
            number = number / 10;
        }
        while (number != 0);
    }

    // Printing the number of numbers which are divisible
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", count[i]);
    }
}
