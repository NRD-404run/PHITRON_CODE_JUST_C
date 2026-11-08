#include<stdio.h>
int pos_neg_zero(int n)
{
    if(n > 0)
    {
        return 1;
    }
    else if(n < 0)
    {
        return -1;
    }
    else if(n == 0)
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int val = pos_neg_zero(n);
    if(val == 1)
    {
        printf("POSITIVE");
    }
    else if(val == -1)
    {
        printf("NEGATIVE");
    }
    else if(val == 0)
    {
        printf("ZERO");
    }
}