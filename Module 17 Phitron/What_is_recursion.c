#include<stdio.h>
void hello()
{
    printf("HELLO\n");
    hello();
}
int main()
{
    printf("HI\n");
    hello();
}