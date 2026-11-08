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
    int Min=0;
    int Max=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]<a[Min])
        {
            Min = i;
        }
        if(a[i]>a[Max])
        {
            Max = i;
        }
    }
    int temp = a[Min];
    a[Min] = a[Max];
    a[Max] = temp;
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

}