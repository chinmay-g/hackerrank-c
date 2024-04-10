#include <stdio.h>

int main()
{
    int budget, size_keyboard, size_usb;
    scanf("%d %d %d", &budget, &size_keyboard, &size_usb);

    int keyboard[size_keyboard];
    for (int i = 0; i < size_keyboard; i++)
    {
        scanf("%d", &keyboard[i]);
    }

    int usb[size_usb];
    for (int i = 0; i < size_usb; i++)
    {
        scanf("%d", &usb[i]);
    }

    int sum[size_keyboard * size_usb];
    int array_index = 0;

    for (int i = 0; i < size_keyboard; i++)
    {
        for (int j = 0; j < size_usb; j++)
        {
            sum[array_index] = keyboard[i] + usb[j];
            array_index++;
        }
    }

    int new_array[array_index]; // To store all the possibilities for the budget
    int j = 0;
    for (int x = 0; x < array_index; x++)
    {
        if (sum[x] < budget) // To check if there is a product which can be purchased within the budget
        {
            for (int i = 0; i < array_index; i++)
            {
                if (sum[i] <= budget)
                {
                    new_array[j] = sum[i];
                    j++;
                }
            }

            int largest = new_array[0];
            for (int i = 0; i < j; i++)
            {
                for (int k = 0; k < j; k++)
                {
                    if (new_array[i] < new_array[k])
                    {
                        largest = new_array[k];
                    }
                }
            }

            printf("%d", largest);
            break;
        }
        else
        {
            printf("-1");
        }
    }
}
