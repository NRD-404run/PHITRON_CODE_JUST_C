#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int tc=1; tc<=T; tc++)
    {
        int M1,M2,D;
        scanf("%d %d %d",&M1,&M2,&D);
        int howManyDay = M1*D/(M1+M2);
        int reduceDay= D - howManyDay;
        printf("%d\n",reduceDay);
    }
}