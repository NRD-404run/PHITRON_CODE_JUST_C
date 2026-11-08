#include<stdio.h>
int main()
{
    char a[100];
    scanf("%s",&a);
    int idx;
    scanf("%d",&idx);
    int len = strlen(a);
    for(int i = idx; i<len; i++)
    {
        a[i] = a[i+1];
    }
    printf("%s",a);
}