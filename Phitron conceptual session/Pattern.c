#include<stdio.h>
int main()
{
     int n,i,j;
    scanf("%d",&n);
    int val=1;
    int space = n-1;
    int flag = 1;
    for(i=1; i<=n; i++)
    {
        char ch;
        if(flag == 1)
        {
            ch = '#';
        }
        else
        {
            ch = '-';
        }
        for(j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(j=1; j<=val; j++)
        {
            printf("%c",ch);
        }
        printf("\n");
        val+=2;
        space--;
        flag = 1-flag;
    }
    val = 2*n-3;
    space = 1;
    for(i=n-1; i>=1; i--)
    {
        char ch;
        if(flag == 1)
        {
            ch = '#';
        }
        else{
            ch = '-';
        }
        for(j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(j=1; j<=val; j++)
        {
            printf("%c",ch);
        }
        printf("\n");
        val-=2;
        space++;
        flag = 1-flag;
    }

}

