#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int sum = 0, num; // I have no idea why we have to initialise sum
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum = sum + num;
        num = 0;
    }
    
    printf("%d", sum);
    
}
