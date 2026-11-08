#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&ar[i]);
    } 
    long long int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum+ar[i];
    }
    long long int result = llabs(sum);
    printf("%lld\n",result);
    return 0;
}