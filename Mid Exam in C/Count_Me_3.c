#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int tc=1; tc<=T; tc++)
    {
        char s[10001];
        scanf("%s",s);
        int i,capital,small,digit;
        i=capital=small=digit=0;
        while(s[i]!='\0')
        {
            if(s[i]>=65 && s[i]<=90)
            {
                capital++;
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                small++;
            }
            else if(s[i]>=48 && s[i]<=57)
            {
                digit++;
            }
            i++;
        }
        printf("%d %d %d\n",capital,small,digit);
    }
}