//array A and size N. 
//copy of this array named B in ascending order.
//make another array C,where each indexi(0<=i<N)of array C is 
//the multiplication between array A [i] and B[i].
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int copy_arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        copy_arr[i] = arr[i];
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(copy_arr[i] > copy_arr[j])
            {
                int temp = copy_arr[i];
                copy_arr[i] = copy_arr[j];
                copy_arr[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",copy_arr[i]);
    }
    printf("\n");
    
    int R[n];
    for(int i=0; i<n; i++)
    {
        R[i] = arr[i] * copy_arr[i];
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",R[i]);
    }

}