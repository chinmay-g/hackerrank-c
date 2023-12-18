#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) // Number of rows
    {
        for (int j = size - i; j > 0; j--) // Blank spaces
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) // Printing #
        {
            printf("#");
        }
        printf("\n"); // End of each row
    }
}
