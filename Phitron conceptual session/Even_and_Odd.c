#include<stdio.h>
void odd_even()
{
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int count1 = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            count++;
        }
        if(arr[i]%2 != 0)
        {
            count1++;
        }
    }
    printf("%d %d",count,count1);
}

int main()
{
   
    odd_even();
}