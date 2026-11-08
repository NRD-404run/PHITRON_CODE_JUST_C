#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int ar[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&ar[i]);
    }
    int pos_sum = 0;
    int neg_sum = 0;
    for(int i=0; i<N; i++)
    {
        if(ar[i]>0)
        {
            pos_sum += ar[i];
        }
        else{
           neg_sum += ar[i];
        }
    }
        printf("%d %d",pos_sum,neg_sum);

    
}