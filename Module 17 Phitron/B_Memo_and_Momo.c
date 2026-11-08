#include<stdio.h>
int main()
{
    long long int a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);
    long long int a_div = (a%k == 0);
    long long int b_div = (b%k == 0);
    if(a_div && b_div)
    {
        printf("Both\n");
    }
    else if(a_div)
    {
        printf("Memo\n");
    }
    else if(b_div)
    {
        printf("Momo\n");
    }
    else
    {
        printf("No One\n");
    }
}