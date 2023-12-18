#include <stdio.h>

int main()
{
    long long int n = 0;
    scanf("%lld", &n);

    long long int num = 0, sum = 0;

    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &num);
        sum = sum + num;
        num = 0;
    }

    printf("%lld", sum);

}
