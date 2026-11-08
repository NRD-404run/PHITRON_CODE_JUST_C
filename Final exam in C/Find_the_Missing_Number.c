#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        long long int M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        long long int k = A * B * C;
        if (k == 0 && M != 0)
        {
            printf("-1\n");
        }
        else if (k != 0 && M % k != 0)
        {
            printf("-1\n");
        }
        else if (k == 0 && M == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%lld\n", M / k);
        }
    }
}