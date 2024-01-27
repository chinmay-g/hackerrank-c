#include <stdio.h>
#include <string.h>

int main()
{
    // Number of string(s)
    int size;
    scanf("%d", &size);

    // Sample string
    char sample[] = "hackerrank";
    int sample_size = strlen(sample);

    // String input for test from user
    char string[size][1000];
    for(int i = 0; i < size; i++)
    {
        scanf("%s", string[i]);
    }

    // Test from HERE!
    int j = 0; // For iterating sample string
    int count= 0; // For counting number of characters which are same
    for(int i = 0; i < size; i++) // Iterating over 2 strings from user
    {
        int string_size = strlen(string[i]); // Size of one test string
        {
            for (int k = 0; k < string_size; k++) // Iterating over test string
            {
                if (string[i][k] == sample[j]) // If characters are equal then
                {
                    count++;
                    j++;
                }
                if (j >= sample_size) // If j exceeds the length of sample string
                {
                    break;
                }
            }
        }
        if(count == sample_size) // If characters are same
        {
            printf("YES\n");
        }
        else // If characters are different
        {
            printf("NO\n");
        }
        // To reset these variables for next test string
        count=0;
        j=0;
    }
}
