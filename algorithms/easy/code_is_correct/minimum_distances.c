#include <stdio.h>

int main()
{
    // Input size of array
    int size;
    scanf("%d", &size);

    // Input array
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Finding same elements and their distance
    int dist[size];
    dist[0] = -1; // To check if there is any same element
    int k = 1;
    int distance = 0; // To store distance
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                if (dist[0] == -1)
                {
                    distance = j - i;
                    if (distance < 0)
                    {
                        distance = -distance;
                    }
                    dist[0] = distance;
                    k++;
                }
                else
                {
                    distance = j - i;
                    dist[k] = distance;
                    k++;
                }
            }
        }
    }

    // Printing minimum distance
    int min_index = 0;
    for (int i = 0; i < k; i++)
    {
        if (dist[i] < dist[min_index])
        {
            min_index = i;
        }
    }
    printf("%d", dist[min_index]);
}
