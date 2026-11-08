#include<stdio.h>
void alphabet_print(int value)
{
    for(int i=0; i<=value; i++)
    {
        printf("%c",i+97);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int value = 0;
    for(int i=1; i<=n; i++)
    {
        alphabet_print(value);
        printf("\n");
        value ++;
    }

}