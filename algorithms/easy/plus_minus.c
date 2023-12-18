#include <stdio.h>

int main()
{
    float n, num, negative, zero, positive, ans;

    scanf("%f", &n);

    for (int i = 0; i < n; i++) {
        scanf("%f", &num);

        if (num < 0) {
            negative++;
        }

        if (num == 0) {
            zero++;
        }

        if (num > 0) {
            positive++;
        }
    }

    ans = positive/n;
    printf("%f\n", ans);
    ans = 0;

    ans = negative/n;
    printf("%f\n", ans);
    ans = 0;

    ans = zero/n;
    printf("%f\n", ans);
}
