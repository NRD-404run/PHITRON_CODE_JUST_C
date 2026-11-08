#include<stdio.h>
void star_print(int value)
{
    for(int i=1; i<=value; i++)
    {
        printf("*");
    }
}
void space_print(int space)
{
    for(int i=1; i<=space; i++)
    {
        printf(" ");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int star_tracker = 2 * n - 1;
    int space_tracker = 0;
    for(int i=1; i<=n; i++)
    {
        space_print(space_tracker);
        star_print(star_tracker);
        printf("\n");


        space_tracker++;
        star_tracker -= 2;
    }

}