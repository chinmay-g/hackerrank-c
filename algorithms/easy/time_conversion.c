#include <stdio.h>

int main()
{
    char time[11];
    scanf("%s", time);

    char final_time[9];
    int hh = 0;

    if (time[8] == 'P')
    {

        if (time[0] == '1')
        {

            // If time is between 12 PM & 1 PM
            if (time[1] == '2')
            {
                for (int i = 0; i < 8; i++)
                {
                    final_time[i] = time[i];
                }
                final_time[8] = '\0';
                printf("%s", final_time);
            }

            // If time is between 10 PM & 11:59:59 PM
            else
            {
                for (int i = 0; i < 2; i++)
                {
                    hh = hh * 10 + (time[i]) - 48;
                }

                hh = hh + 12;

                // Add minutes and seconds
                for (int i = 2; i < 8; i++)
                {
                    final_time[i] = time[i];
                }

                final_time[8] = '\0';
                printf("%i", hh);
                for (int i = 2; i < 8; i++)
                {
                    printf("%c", final_time[i]);
                }
            }
        }

        // If other times are given than above mentioned conditions
        else
        {
            /*
            // Add 12 to hour only
            for (int i = 0; i < 2; i++)
            {
                final_time = final_time * 10 + time[i];
            }
            */

            for (int i = 0; i < 2; i++)
            {
                hh = hh * 10 + (time[i]) - 48; // Why -48? - I also don't know. Maybe it is to convert str to int datatype.
            }

            hh = hh + 12;

            // Add minutes and seconds
            for (int i = 2; i < 8; i++)
            {
                final_time[i] = time[i];
            }

            final_time[8] = '\0';
            printf("%i", hh);
            for (int i = 2; i < 8; i++)
            {
                printf("%c", final_time[i]);
            }
        }
    }

    // If AM, print same time
    else
    {
        // Condition for 12 AM
        if (time[0] == '1')
        {
            if (time[1] == '2')
            {
                printf("%s", "00:");
                for (int i = 2; i < 8; i++)
                {
                    final_time[i] = time[i];
                }
                final_time[8] = '\0';
                for (int i = 3; i < 8; i++)
                {
                    printf("%c", time[i]);
                }
            }
        }
        else
        {
            for (int i = 0; i < 8; i++)
            {
                printf("%c", time[i]);
            }
        }
    }
}
