#include<stdio.h>
void printing_positive_n_values(int n)
{
    for(int i = n; i >= -n; i--)
    {
        printf("%d ",i);
    }
}
void printing_negative_n_values(int n)
{
    for(int i = n; i <= -n; i++)
    {
        printf("%d ",i);
    }   
}
int main()
{
    int N;
    scanf("%d",&N);
    if(N>0)
    {
        printing_positive_n_values(N);
    }
    else
    {
        printing_negative_n_values(N);
    }
}