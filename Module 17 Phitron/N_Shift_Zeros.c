#include<stdio.h>
void shift_zeros(int arr[],int n, int idx)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            arr[idx] = arr[i];
            idx++;

        }
    }

    while(idx<n)
    {
        arr[idx] = 0;
        idx++;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    shift_zeros(arr,n,0);

}