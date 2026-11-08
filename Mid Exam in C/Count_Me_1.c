#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int count1=0,count2=0;
    int i=0;
    while(i<n)
    {
    if(a[i]%2==0)
    {
        count1++;
    }
    else if(a[i]%3==0)
    {
        count2++;
    }
    i++;
    }
    printf("%d %d\n",count1,count2);
}