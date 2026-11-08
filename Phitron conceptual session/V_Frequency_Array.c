#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n+1],fre[m+1];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //0 set 
    for(int i=0; i<=m; i++)
    {
        fre[i] = 0;
    }
    for(int i = 1; i <= n; i++)
    {
        //frequency count
        int val = arr[i];
        fre[val]++;
    }
    for(int i=1; i<=m; i++)
    {
        printf("%d\n",fre[i]);
    }

}