#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int first_digit = a/1000;
    {
        if(first_digit%2 == 0)
        printf("EVEN\n");
        else
        printf("ODD\n");
    }
    int last_digit = b%1000;
    if(last_digit%2 == 0)
    printf("EVEN\n");
    else
    printf("ODD");
}