#include<stdio.h>
long long int log2(long long int N)
{
    if(N==1)
    {
        return 0;
    }
    return 1 + log2(N/2);

}
int main()
{
    long long int N;
    scanf("%lld",&N);
    long long int ans = log2(N);
    printf("%lld",ans);
}