#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",&a);
    int idx;
    char val;
    scanf("%d %c",&idx,&val);
    int len = strlen(a);
    for(int i=len; i>=idx; i--)
    {
        a[i+1] = a[i];
    }
    a[idx] = val;
    printf("%s\n",a);

}