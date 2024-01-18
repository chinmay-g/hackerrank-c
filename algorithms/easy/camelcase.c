#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000];
    scanf("%s", &str);

    int len = strlen(str);
    int count = 1;
    for (int i = 1; i < len; i++)
    {
        if (65 <= str[i] && str[i] <= 90)
        {
            count++;
        }
    }

    printf("%d", count);
}
