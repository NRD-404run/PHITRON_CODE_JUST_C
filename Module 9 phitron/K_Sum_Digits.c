#include<stdio.h>
#include<string.h>
int main()
{
    int N;
    scanf("%d",&N);
    char s[N+1];
    scanf("%s",s);
    int sum=0;
    for(int i=0; i<N; i++)
    {
        sum = sum + (s[i]-'0') ; //'0'has an Ascii value 48 and 1=49 (49- 48) =1
    }
    printf("%d\n",sum);
}